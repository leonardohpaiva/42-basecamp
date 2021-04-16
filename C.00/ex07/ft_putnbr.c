/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 21:22:35 by lehenriq          #+#    #+#             */
/*   Updated: 2021/04/09 03:07:50 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	mem[10];
	int		dig;
	int		calc;

	dig = 1;
	calc = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	else if (nb > 10)
	{
		while (nb != 0)
		{
			mem[10 - dig] = nb % 10;
			dig++;
			nb = nb / 10;
		}
		write(1, &mem, dig);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int		main(void)
{
	ft_putnbr(-4321);
	write(1, "\n", 2);
	return (0);
}
