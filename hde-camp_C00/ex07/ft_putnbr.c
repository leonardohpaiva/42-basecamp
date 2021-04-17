/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 23:52:13 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/07 17:31:27 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		pseudo_pow(int pow)
{
	int r;
	int i;

	r = 1;
	i = 0;
	if (pow <= 0)
		return (1);
	while (++i <= pow)
	{
		r = r * 10;
	}
	return (r);
}

void	int_to_char(int n, int pow)
{
	char	conv_number[(pow + 1)];
	int		aux[3];

	aux[0] = -1;
	aux[2] = 1;
	(n < 0) ? write(1, "-", 1) : write(1, "", 0);
	aux[2] = (n < 0) ? -1 : 1;
	while (aux[0] < pow)
	{
		aux[1] = n / pseudo_pow(pow - 1 - aux[0]);
		n = n % pseudo_pow(pow - 1 - aux[0]);
		conv_number[aux[0] + 1] = (48 + (aux[1] * aux[2]));
		aux[0]++;
	}
	write(1, &conv_number, (pow + 1));
}

void	size_counter(int nbr, int *counter)
{
	int a;

	a = nbr / 10;
	if (a != 0)
	{
		*counter = *counter + 1;
		size_counter(a, counter);
	}
}

void	ft_putnbr(int nb)
{
	int pow;
	int *ppow;

	pow = 0;
	ppow = &pow;
	size_counter(nb, ppow);
	int_to_char(nb, pow);
}

int		main(void)
{
	ft_putnbr(4321);
}
