#ifndef PARSE_ARGS_H
#define PARSE_ARGS_H

#include <string.h>
#include <stdlib.h>
#include "../file_mode/file_mode.h"

int parse_args(int argc, char* argv[], file_mode* mode, reliability* reliability, char* name[], read_write* r_w) {
    if (argc <= 0) {
        printf("No file supplied");
        return -1;
    }

    char* file_name;
    memcpy(file_name, argv[1], strlen(argv[1]) + 1);
    if (file_name) {
        (*name) = file_name;
    }


    if (argc <= 1) {
        printf("No file mode or read/write mode supplied");
        return -1;
    }

    char _r_w = argv[2][0];
    if (_r_w = 'r') {
        (*r_w) = READ;
        return 0;
    } else {
        (*r_w) = WRITE;
    }

    int _file_mode = argv[2][0] - '0';
    if (_file_mode) {
        (*mode) = (int)_file_mode;
    }

    if (argc <= 2) {
        printf("No file reliability supplied");
        return -1;
    }

    int _file_reliability = argv[3][0] - '0';
    if (_file_reliability) {
        (*reliability) = (int)_file_reliability;
    }

    free(file_name);

    return 0;
}

#endif