#include <stdio.h>

#include "./file_mode/file_mode.h"
#include "./parse_args/parse_args.h"

#define EXIT_SUCCESS 0
#define EXIT_ERROR 1

file_mode current_mode;
reliability current_reliability;
char* current_name;

int main(int argc, char* argv[]) {
    if (argc <= 0) {
        printf("No file supplied");
        return EXIT_ERROR;
    }

    parse_args(argc, argv, &current_mode, &current_reliability, &current_name);

    printf(current_name);

    return EXIT_SUCCESS;
}