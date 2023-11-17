#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *sourceFileName = "file1.txt";
    const char *temporaryFileName = "temp_file.txt";

    // Your code to create or modify the temporary file

    // Rename the temporary file to the source file name
    if (rename(temporaryFileName, sourceFileName) == 0) {
        printf("File successfully renamed.\n");
    } else {
        perror("Error renaming file");
        exit(EXIT_FAILURE);
    }

    return 0;
}
