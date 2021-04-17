/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 10:13:11 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/14 18:03:29 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int cont;

	cont = 0;
	while (str[cont] != '\0')
		cont++;
	return (cont);
}

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

void	ft_strlen_test(char *str)
{
	int size;
	int ft_size;

	size = strlen(str);
	ft_size = strlen(str);
	if (size != ft_size)
		printf("> KO, return value of ft_strlen differs from expected. expected: %d, got: %d\n", size, ft_size);
	else
		printf("> OK. result: %d\n", ft_size);
}

int	main(void)
{
	char *str;

	str = "";
	ft_strlen_test(str);
	str = "Test";
	ft_strlen_test(str);
	str = "Testing mored and more and more and more and more and more.";
	ft_strlen_test(str);
	return (0);
}
