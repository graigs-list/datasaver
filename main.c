#include <stdio.h>

#include "./file_mode/file_mode.h"
#include "./parse_args/parse_args.h"

#define EXIT_SUCCESS 0
#define EXIT_ERROR -1

file_mode current_mode;
reliability current_reliability;
read_write current_read_write;
char* current_name;

int main(int argc, char* argv[]) {
    if (parse_args(argc, argv, &current_mode, &current_reliability, &current_name, &current_read_write)) {return EXIT_ERROR;}

    printf("Read: %i\n", current_read_write);
    printf("Mode: %i\n", current_mode);
    printf("Reliability: %i\n", current_reliability);
    printf("Name: %s\n", current_name);

    return EXIT_SUCCESS;
}