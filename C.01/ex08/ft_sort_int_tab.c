/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 02:11:47 by lehenriq          #+#    #+#             */
/*   Updated: 2021/04/13 04:51:19 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int count;
	int repeat;
	int i;
	int swap;

	repeat = 1;
	while (repeat <= 10)
	{
		count = 1;
		i = -1;
		while (count <= size - 1)
		{
			i++;
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			count++;
		}
		repeat++;
	}
}
