#ifndef _SAMPLE_HEADER_H_
#define _SAMPLE_HEADER_H_
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif /* _SAMPLE_HEADER_H_ */
