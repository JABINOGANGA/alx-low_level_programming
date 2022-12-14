#ifndef _SAMPLE_HEADER_H_
#define _SAMPLE_HEADER_H_
#include <stdio.h>
#include <string.h>
/*
 * Structs, enums and unions definitions
 * Typedefs
 * _putchar - writes the character c to stdout
 * Function prototypes
 */
int _putchar(char c);

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
#endif /* _SAMPLE_HEADER_H_ */
