#ifndef COCO_H
#define COCO_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define PROMPT "coco $ "
#define ERROR "command not found: "
const size_t check = -1;
/*const char *delim = "\n\t ";*/

/*Utilities Functions*/
void _getline(char *lineptr, size_t n, int cmdCount, char **argv);

/*string handler functions*/
int getStr_len(char *str);
void display_string(char *str, int newLine);
int _write_char(char c);

/*Builtin Functions*/
void exit_sh(char *lineptr);


#endif
