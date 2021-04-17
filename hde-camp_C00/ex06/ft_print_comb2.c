/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 21:36:35 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/07 17:25:17 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb(int i, int ii)
{
	char comb[5];

	comb[0] = ((i / 10) + 48);
	comb[1] = ((i % 10) + 48);
	comb[2] = (32);
	comb[3] = ((ii / 10) + 48);
	comb[4] = ((ii % 10) + 48);
	write(1, &comb, 5);
	if (!(i == 98 && ii == 99))
		write(1, ", ", 2);
}

void	eval_comb(int i, int *ii)
{
	if (i != *ii)
		print_comb(i, *ii);
	*ii = *ii + 1;
}

void	ft_print_comb2(void)
{
	int i;
	int ii;
	int *pii;

	i = 0;
	ii = 0;
	pii = &ii;
	while (i < 100)
	{
		while (ii < 100)
		{
			eval_comb(i, pii);
		}
		i++;
		ii = i;
	}
}
