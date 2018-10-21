#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

/**
 * struct type - data structure for each type
 *
 * @cmd: ptr to array with type char represented
 * @f: function ptr used by controller[]
 */

typedef struct type
{
	char cmd;
	void (*f)(va_list);
} type_t;

int _purchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* _VARIADIC_FUNCTIONS_H_ */
