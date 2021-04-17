/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:33:24 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/07 17:16:06 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb(int c, int d, int u)
{
	int char_num;

	if ((c != d && c != u) && (d != c && d != u))
	{
		char_num = 48 + c;
		write(1, &char_num, 1);
		char_num = 48 + d;
		write(1, &char_num, 1);
		char_num = 48 + u;
		write(1, &char_num, 1);
		if (!(c == 7 && d == 8 && u == 9))
			write(1, ", ", 2);
	}
}

void	eval_print(int i, int ii, int *iii)
{
	print_comb(i, ii, *iii);
	*iii = *iii + 1;
}

void	ft_print_comb(void)
{
	int i;
	int ii;
	int iii;
	int *piii;

	i = 0;
	ii = 0;
	iii = 0;
	piii = &iii;
	while (i < 10)
	{
		while (ii < 10)
		{
			while (iii < 10)
				eval_print(i, ii, piii);
			ii++;
			iii = ii;
		}
		i++;
		ii = i;
	}
}

int		main(void)
{
	ft_print_comb();
}
