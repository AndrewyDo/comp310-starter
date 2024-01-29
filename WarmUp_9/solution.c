#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[] = "ex.txt";

    //writing to a file
    FILE *fw = fopen(filename, "w"); //open the file for writing
    if (fw == NULL) {
        perror("Error trying to open file for writing");
        return EXIT_FAILURE;
    }
    fprintf(fw, "Hello, World!"); //write to the file
    fclose(fw); // cose the file

    // Reading from a file
    FILE *fr = fopen(filename, "r"); //open the file for reading
    if (fr == NULL) {
        perror("Error trying to open file for reading");
        return EXIT_FAILURE;
    }
    char buffer[100]; //buffer to hold the line read from the file
    while (fgets(buffer, 100, fr) != NULL) {
        printf("%s", buffer); //print the line read
    }
    fclose(fr); //close the file.

    return EXIT_SUCCESS;
}