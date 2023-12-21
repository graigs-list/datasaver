#include <stdio.h>

#include "./file_mode/file_mode.h"

#define EXIT_SUCCESS 0
#define EXIT_ERROR 1

file_mode current_mode;
reliability current_reliability;

int main(int argc, char* argv[]) {
    /*if (argc >= 0) {
        printf("No file supplied");
        return EXIT_ERROR;
    }*/

    current_reliability = UNRELIABLE;

    printf("%i", current_reliability);

    return EXIT_SUCCESS;
}