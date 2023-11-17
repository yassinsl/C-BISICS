#include <stdio.h>

int main(void) {
    FILE *file = fopen("example.txt", "r");

    if (file == NULL) 
    {
        perror("Error opening file");
        return 1;
    }

    // Read some content from the file
    char buffer[100];
    fgets(buffer, sizeof(buffer), file);
    printf("Read content: %s\n", buffer);

    // Get the current file position
    long position = ftell(file);
    printf("Current file position: %ld\n", position);

    fclose(file);

    return 0;
}
