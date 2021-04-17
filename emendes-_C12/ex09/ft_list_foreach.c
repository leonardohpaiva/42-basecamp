/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:03:12 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/16 15:03:04 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void*))
{
	while (begin_list != 0)
	{
		f(begin_list->data);
		begin_list = begin_list->next;
	}
}

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void*));

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

	printf("list: ");
	print_list(list0);
	printf("=> foreach:\n");
	ft_list_foreach(list0, (void(*)(void*))puts);


	printf("\nlist: ");
	print_list(list1);
	printf("=> foreach:\n");
	ft_list_foreach(list1, (void(*)(void*))puts);
}
