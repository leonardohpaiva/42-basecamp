/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 03:03:38 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/07 17:06:59 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char i;

	i = 96;
	while (++i <= 122)
	{
		write(1, &i, 1);
	}
}

int		main(void)
{
	ft_print_alphabet();
}
