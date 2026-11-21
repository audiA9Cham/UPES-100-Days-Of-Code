/*
Question: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
*/

#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

int main(void) {
    char sourceName[256], destinationName[256];
    int ch, failed = 0;
    FILE *sourceFile, *destinationFile;
    struct stat sourceInfo, destinationInfo;

    if (scanf("%255s %255s", sourceName, destinationName) != 2)
        return 1;

    if (strcmp(sourceName, destinationName) == 0) {
        puts("Source and destination must be different files");
        return 1;
    }

    if (stat(sourceName, &sourceInfo) == 0 &&
        stat(destinationName, &destinationInfo) == 0 &&
        sourceInfo.st_dev == destinationInfo.st_dev &&
        sourceInfo.st_ino == destinationInfo.st_ino) {
        puts("Source and destination refer to the same file");
        return 1;
    }

    sourceFile = fopen(sourceName, "rb");
    if (sourceFile == NULL) {
        puts("Cannot open source file");
        return 1;
    }

    destinationFile = fopen(destinationName, "wb");
    if (destinationFile == NULL) {
        fclose(sourceFile);
        puts("Cannot create destination file");
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        if (fputc(ch, destinationFile) == EOF) {
            failed = 1;
            break;
        }
    }

    if (ferror(sourceFile))
        failed = 1;
    if (fclose(sourceFile) != 0)
        failed = 1;
    if (fclose(destinationFile) != 0)
        failed = 1;

    if (failed) {
        puts("File copy failed");
        return 1;
    }

    printf("File copied successfully to %s\n", destinationName);
    return 0;
}
