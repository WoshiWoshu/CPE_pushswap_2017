/*
** EPITECH PROJECT, 2018
** push_swap
** File description:
** function that sort in ascending order a list
*/

#include "push_swap.h"
#include "include/my.h"
#include <stdio.h>
#include <stdlib.h>

int bubble_sort_list(List *list)
{
	int swapped = 0;
	List *list_b;
	Element *tmp_2;
	int i = 0;
	int j = 0;
	int nb = 0;

	for (Element *tmp = list -> first ; tmp -> next != NULL ; tmp = tmp -> next) {
		if (tmp -> number > tmp -> next -> number) {
			if (i == 0) {
				swap_elem(list,tmp);
				my_putstr("sa ");
				nb = to_delet(list);
				list_b = initialisation_list(nb);
				swapped = 1;
				my_putstr("pb ");
				i++;
			} else {
				swap_elem(list, tmp);
				my_putstr("sa ");
				nb = to_delet(list);
				add_new_element(list_b, nb);
				my_putstr("pb ");
				swapped = 1;
			}
		}
		if (i == 0) {
			nb = to_delet(list);
			list_b = initialisation_list(nb);
			my_putstr("pb ");
			i++;
		} else {
			nb = to_delet(list);
			add_new_element(list_b, nb);
			my_putstr("pb ");
		}
	}
	tmp_2 = list_b -> first;
	while (tmp_2 -> next != NULL) {
		nb = to_delet(list_b);
		if (j == 0) {
			list = initialisation_list(nb);
			j++;
			my_putstr("pa ");
		} else {
			add_new_element(list, nb);
			my_putstr("pa ");
		}
		tmp_2 = tmp_2 -> next;
	}
	if (swapped == 0) {
		return (0);
	} else {
		bubble_sort_list(list);
	}
}

void swap_elem(List *list, Element *tmp)
{
	int slot;

	slot = tmp -> number;
	tmp -> number = tmp -> next -> number;
	tmp -> next -> number = slot;
}
