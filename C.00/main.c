/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:51:33 by lehenriq          #+#    #+#             */
/*   Updated: 2021/04/16 01:31:27 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00/ftputchar.c"
#include "ex01/ft_print_alphabet.c"
#include "ex02/ft_print_reverse_alphabet.c"
#include "ex03/ft_print_numbers.c"
#include "ex04/ft_is_negative.c"
#include "ft_print_comb.c"
#include "ft_print_comb2.c"
#include "ft_putnbr.c"
#include "ft_print_combn.c"

#include <unistd.h>

int		main(void)
{
// ex00
	int	c;

	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
	ft_putchar('\n');
	return (0);

// ex01
	
}