/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 19:33:30 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/16 14:53:38 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	while (begin_list != 0)
	{
		begin_list = begin_list->next;
		++i;
	}
	return (i);
}

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list);

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

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *temp;

	if (begin_list == 0)
		return ;
	temp = ft_create_elem(data);
	if (temp == 0)
		return ;
	temp->next = *begin_list;
	*begin_list = temp;
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
	t_list *list;

	ft_list_push_front(&list, "banana");
	ft_list_push_front(&list, "maçã");
	ft_list_push_front(&list, "abacaxi");
	printf("size %i, list: ", ft_list_size(list));
	print_list(list);
}
