/*
** EPITECH PROJECT, 2018
** push_swap
** File description:
** function that sort an array with an other array
*/

#include <stdio.h>
#include <stdarg.h>
#include "include/my.h"
#include "push_swap.h"
#include <stdlib.h>

List *initialisation_list(int number)
{
	List *list = malloc(sizeof(*list));
	Element *element = malloc(sizeof(*element));

	if (list == NULL || element == NULL) {
		exit(84);
	}
	element -> number = number;
	element -> next = NULL;
	list -> first = element;
	return (list);
}

void add_new_element(List *list, int number)
{
	Element *new = malloc(sizeof(*new));

	if (list == NULL || new == NULL) {
		exit(84);
	}
	new -> number = number;
	new -> next = list -> first;
	list -> first = new;
}

int to_delet(List *list)
{
	Element *to_delet = list -> first;
	int nb = 0;
	
	if (list == NULL) {
		exit(84);
	}
	if (list != NULL && list -> first != NULL) {
		nb = to_delet -> number;
		list -> first = list -> first -> next;
		free(to_delet);
	}
	return (nb);
}

void to_display_list(List *list)
{
	Element *tmp = list -> first;
	
	if (list == NULL) {
		exit(84);
	}
	while (tmp != NULL) {
		printf("%d -> ", tmp->number);
		tmp = tmp -> next;
	}
	my_putchar('\n');
}
