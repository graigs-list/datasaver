#ifndef PARSE_ARGS_H
#define PARSE_ARGS_H

#include <string.h>
#include <stdlib.h>
#include "../file_mode/file_mode.h"

void parse_args(int argc, char* argv[], file_mode* mode, reliability* reliability, char* name[]) {
    char* file_name;
    strcpy(file_name, argv[1]);
    if (file_name) {
        (*name) = file_name;
    }

    free(file_name);
}

#endif