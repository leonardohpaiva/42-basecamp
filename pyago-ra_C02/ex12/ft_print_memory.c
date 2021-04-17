/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:00:49 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/04/07 19:03:40 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_int_hex(int addr, const int max_digits, int count_digits)
{
	int		digit;
	int		rest;

	digit = (addr % 16);
	count_digits++;
	if (addr / 16 > 0)
		count_digits = ft_int_hex(addr / 16, max_digits, count_digits);
	else
	{
		while (count_digits < max_digits)
		{
			count_digits++;
			ft_putchar('0');
		}
	}
	if (digit > 9)
	{
		rest = digit - 10;
		digit = 'a';
		digit += rest;
		ft_putchar(digit);
	}
	else
		ft_putchar(digit + '0');
	return (count_digits);
}

int		ft_is_printable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

void	ft_print_charhex(char *s, int index, int size)
{
	int count;

	count = index;
	while (count < index + 15 && count < size)
	{
		ft_int_hex((int)s[count], 2, 0);
		if (count + 1 < size)
			ft_int_hex((int)s[count + 1], 2, 0);
		else
			count--;
		ft_putchar(' ');
		count = count + 2;
	}
	if ((count == size) && !(size % 16 == 15 || size % 16 == 0))
	{
		ft_putchar(' ');
		ft_putchar(' ');
		ft_putchar(' ');
		ft_putchar(' ');
	}
}

void	*ft_print_memory(void *addr, unsigned int size, unsigned int index)
{
	char			*str;
	unsigned int	count;

	str = addr;
	if (size > 0)
	{
		ft_int_hex((int)&str[index], 15, 0);
		ft_putchar(':');
		ft_putchar(' ');
		ft_print_charhex(str, index, size);
		count = index;
		while (count < index + 16 && count < size)
		{
			if (!ft_is_printable(str[count]))
				ft_putchar('.');
			else
				ft_putchar(str[count]);
			count++;
		}
		ft_putchar('\n');
		if (count < size)
			ft_print_memory(addr, size, count);
	}
	return (addr);
}

int	main(void)
{
	char *str = "Bonjour les aminches\n\b\rc  est fou\ntout\rce qu on peut faire avec\r\r\nprint_memory\n\n\r\blol\rlol\r \b";

	ft_print_memory(str, strlen(str), 0);
	return (0);
}
