/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 19:28:47 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/16 14:51:34 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data);

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
	t_list *list;

	ft_list_push_front(&list, "banana");
	ft_list_push_front(&list, "maçã");
	ft_list_push_front(&list, "abacaxi");
	print_list(list);
}
