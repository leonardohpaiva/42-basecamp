/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:00:49 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/04/07 18:58:12 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int		ft_is_printable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

void	ft_int_to_hexa(int n)
{
	int digit;
	int rest;

	digit = (n % 16);
	n = n / 16;
	if (n > 0)
		ft_int_to_hexa(n);
	if (digit > 9)
	{
		rest = digit - 10;
		digit = 'a';
		digit += rest;
		ft_putchar(digit);
	}
	else
		ft_putchar(digit + '0');
}

void	ft_putstr_non_printable(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if (ft_is_printable(str[count]))
			ft_putchar(str[count]);
		else
		{
			ft_putchar('\\');
			if (str[count] <= 16)
				ft_putchar('0');
			ft_int_to_hexa(str[count]);
		}
		count++;
	}
}

int	main(void)
{
	char str[] = {'0', '1', 2, 30, 16, '4', 'a', 19, 'C'};

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}
