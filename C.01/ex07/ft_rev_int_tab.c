/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:58:14 by lehenriq          #+#    #+#             */
/*   Updated: 2021/04/13 01:55:42 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = -1;
	while (i++ < --size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
	}
}
