#ifndef _SAMPLE_HEADER_H_
#define _SAMPLE_HEADER_H_
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * Structs, enums and unions definitions
 * Typedefs
 * _putchar - writes the character c to stdout
 * Function prototypes
 */

int _putchar(char);

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif /* _SAMPLE_HEADER_H_ */
