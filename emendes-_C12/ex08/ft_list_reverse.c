/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:00:00 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/16 15:01:01 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_put_front(t_list **begin_list, t_list *list)
{
	if (begin_list == 0)
		return ;
	list->next = *begin_list;
	*begin_list = list;
}

void	ft_list_reverse(t_list **begin_list)
{
	t_list *list;
	t_list *temp;

	if (begin_list == 0)
		return ;
	list = 0;
	while (*begin_list != 0)
	{
		temp = (*begin_list)->next;
		ft_list_put_front(&list, *begin_list);
		*begin_list = temp;
	}
	*begin_list = list;
}

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list);

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

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list *ret;
	int i;

	i = 0;
	ret = 0;
	while (i < size)
	{
		ft_list_push_front(&ret, strs[i]);
		++i;
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
	char *test0[] = {"blablabla", "abacaxi", "banana", "árvore"};
	char *test1[] = {"vaca", "galinha", "cavalo", "porco", "ovelha"};

	t_list *list0 = ft_list_push_strs(4, test0);
	t_list *list1 = ft_list_push_strs(5, test1);;

	printf("before: ");
	print_list(list0);
	ft_list_reverse(&list0);
	printf("after:  ");
	print_list(list0);


	printf("\nbefore: ");
	print_list(list1);
	ft_list_reverse(&list1);
	printf("after:  ");
	print_list(list1);
}
