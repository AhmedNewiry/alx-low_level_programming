#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(int c);
int create_file(const char *filename, char *text_content);
unsigned int _strlen(char *str);
int append_text_to_file(const char *filename, char *text_content);
#endif

