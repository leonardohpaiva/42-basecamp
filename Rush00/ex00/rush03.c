/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 05:34:19 by lehenriq          #+#    #+#             */
/*   Updated: 2021/04/05 18:36:29 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int co;
	int li;

	li = 0;
	while (x > 0 && y > 0 && li < y)
	{
		co = -1;
		while (++co < x)
		{
			if ((co == 0 && li == 0) || (co == 0 && li == y - 1))
				ft_putchar('A');
			else if ((co == x - 1 && li == 0) || (co == x - 1 && li == y - 1))
				ft_putchar('C');
			else if ((co > 0 && co < x && li == 0) || (co > 0 && li == y - 1))
				ft_putchar('B');
			else if ((co == 0 || co == x - 1) && (li > 0 || li < y))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
		li++;
	}
}
