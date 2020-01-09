/*
** EPITECH PROJECT, 2018
** push_swap
** File description:
** function that sort in ascending order a list
*/

#include "../push_swap.h"
#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>

int bubble_sort_list_2(List *list)
{
	int swapped = 0;

	for (Element *tmp = list -> first ; tmp->next != NULL ; tmp = tmp -> next) {
		if (tmp -> number > tmp -> next -> number) {
			swap_elem_2(list,tmp);
			swapped = 1;
		}
	}
	if (swapped == 0) {
		return (0);
	} else {
		bubble_sort_list(list);
	}
}

void swap_elem_2(List *list, Element *tmp)
{
	int slot;

	slot = tmp -> number;
	tmp -> number = tmp -> next -> number;
	tmp -> next -> number = slot;
}
