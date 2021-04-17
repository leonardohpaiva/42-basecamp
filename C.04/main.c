/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 06:25:14 by lehenriq          #+#    #+#             */
/*   Updated: 2021/04/16 21:37:55 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ex00/ft_strlen.c"
//#include "ex01/ft_putstr.c"
//#include "ex02/ft_putnbr.c"
//#include "ex03/ft_atoi.c"

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

// ex00 fake moulinnete
//void	ft_strlen_test(char *str)
//{
//	int size;
//	int ft_size;
//
//	size = strlen(str);
//	ft_size = strlen(str);
//	if (size != ft_size)
//		printf("> KO, return value of ft_strlen differs from expected. expected: %d, got: %d\n", size, ft_size);
//	else
//		printf("> OK. result: %d\n", ft_size);
//}

// ex03 fake moulinnete
//void	ft_atoi_like_test(char *str)
//{
//	int buff;
//	int ft_buff;
//
//	buff = atoi(str);
//	ft_buff = ft_atoi(str);
//	if (buff != ft_buff)
//		printf("> KO, invalid int value returned. expected: %d got: %d\n", buff, ft_buff);
//	else
//		printf("> OK. result: %d\n", ft_buff);
//}
//
//void	ft_atoi_unlike_test(char *str, int expected_result)
//{
//	int ft_buff;
//
//	ft_buff = ft_atoi(str);
//	if (ft_buff != expected_result)
//		printf("> KO, invalid int value returned expected: %d got: %d\n", expected_result, ft_buff);
//	else
//		printf("> OK, result: %d\n", ft_buff);
//}


int		main(void)
{
// ex00
//	char *str;
//
//	str = "";
//	ft_strlen_test(str);
//	str = "Test";
//	ft_strlen_test(str);
//	str = "Testing mored and more and more and more and more and more.";
//	ft_strlen_test(str);
//	return (0);


// ex01
//	char *str;
//
//	str = "Ta na hora do ultimo gas! Bora galera!\n";
//	ft_putstr(str);

//ou Fake Mouliennete
//	char *str;
//
//	str = "";
//	ft_putstr(str);
//	write(1, "\n", 1);
//	str = "This is a test string.";
//	ft_putstr(str);
//	write(1, "\n", 1);
//	str = "This is a gianormous test string, testing to see whatever happens in here....";
//	ft_putstr(str);
//	write(1, "\n", 1);


// ex02
//	write(1, "-1: ", 4);
//	ft_putnbr(-1);
//	write(1, "\n1: ", 4);
//	ft_putnbr(1);
//	write(1, "\n-10: ", 6);
//	ft_putnbr(-10);
//	write(1, "\n10: ", 5);
//	ft_putnbr(10);
//	write(1, "\nINT_MAX: ", 10);
//	ft_putnbr(INT_MAX);
//	write(1, "\nINT_MIN: ", 10);
//	ft_putnbr(INT_MIN);
//	write(1, "\n", 1);


// ex03
//	char *str;
//
//// quando o comportamento e igual ao de atoi
//	str = " \n \t \r \v +1234567asd";
//	ft_atoi_like_test(str);
//	str = " \n \t\f\r \v -1234b67asd";
//	ft_atoi_like_test(str);
//// quando o comportamento e diferente ao de atoi
//	str = " \n \t \r \v --+-+-+-2147483648asd";
//	ft_atoi_unlike_test(str, -2147483648);
//	str = " \n \t\f\r \v -++-+-++1234b67asd";
//	ft_atoi_unlike_test(str, -1234);

	return (0);
}
