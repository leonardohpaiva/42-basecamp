/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 19:41:39 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/16 14:55:42 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	if (begin_list == 0)
		return ;
	while (*begin_list != 0)
		begin_list = &(*begin_list)->next;
	*begin_list = ft_create_elem(data);
}

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data);

t_list		*ft_create_elem(void *data)
{
	t_list *ret;

	ret = malloc(sizeof(t_list));
	if (ret != NULL)
	{
		ret->data = data;
		ret->next = NULL;
	}
	return (ret);
}

void	print_list(t_list *list)
{
	while (list != NULL)
	{
		printf("\"%s\" -> ", list->data);
		list = list->next;
	}
	printf("NULL\n");
}

int		main(void)
{
	t_list *list0 = NULL;
	t_list *list1 = NULL;
	t_list *list2 = NULL;

	ft_list_push_back(&list0, "banana");
	ft_list_push_back(&list0, "maçã");
	ft_list_push_back(&list0, "abacaxi");
	printf("list: ");
	print_list(list0);
	ft_list_push_back(&list1, "brabo");
	printf("list: ");
	print_list(list1);
	ft_list_push_back(&list2, "brabo0");
	ft_list_push_back(&list2, "brabo1");
	printf("list: ");
	print_list(list2);
}
