#ifndef COCO_H
#define COCO_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define PROMPT "coco $ "

void interactive_sh(void);
void non_interactive_sh(void);
int getStr_len(char *str);
ssize_t _getline(void);
#endif
