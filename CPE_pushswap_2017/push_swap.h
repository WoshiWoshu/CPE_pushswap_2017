/*
** EPITECH PROJECT, 2018
** push_swap
** File description:
** headers
*/

#include <stdarg.h>
#ifndef MY_H_
#define MY_H_
#endif /*MY_H_*/

typedef struct Element Element;
struct Element
{
	int number;
	Element *next;
};

typedef struct List List;
struct List
{
	Element *first;
};

int bubble_sort_list_2(List *list);
int bubble_sort_list(List *list);
void swap_elem(List *list, Element *tmp);
void swap_elem_2(List *list, Element *tmp);
List *initialisation_list(int number);
void add_new_element(List *list, int number);
int to_delet(List *list);
void to_display_list(List *list);
void push_swap(int ac, char **argv);
