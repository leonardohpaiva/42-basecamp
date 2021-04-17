/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 03:45:30 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/07 17:11:04 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char i;

	i = 47;
	while (++i <= 57)
	{
		write(1, &i, 1);
	}
}

int		main(void)
{
	ft_print_numbers();
}
