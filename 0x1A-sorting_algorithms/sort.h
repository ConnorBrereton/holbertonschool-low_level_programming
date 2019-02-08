#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Printing */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Bubble Sort */
void bubble_sort(int *array, size_t size);

/* Insertion Sort */
void insertion_sort_list(listint_t **list);

/* Selection Sort */
void selection_sort(int *array, size_t size);

/* Quick Sort */
void quick_sort(int *array, size_t size);
void sort_quickly(int *array, ssize_t lo, ssize_t hi, size_t size);
size_t partition(int *array, ssize_t lo, ssize_t hi, size_t size);

/* Shell Sort */
void shell_sort(int *array, size_t size);

#endif /* _SORT_H_ */
