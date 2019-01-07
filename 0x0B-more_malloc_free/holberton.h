#ifndef HOLBERTON_H_
#define HOLBERTON_H_

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_memset(char *temp1, unsigned int nmemb, unsigned int size, char nc);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_init(int *ptr2, int min, int max);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
