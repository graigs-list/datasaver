#ifndef FILE_MODE_H
#define FILE_MODE_H

typedef enum _file_mode {
    DECRYPTED,
    ENCRYPTED
} file_mode;

typedef enum _reliability {
    UNRELIABLE,
    RELIABLE
} reliability;

typedef enum _read_write {
    READ,
    WRITE
} read_write;

#endif