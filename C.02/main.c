/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:32:42 by lehenriq          #+#    #+#             */
/*   Updated: 2021/04/15 18:55:26 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00/ft_strcpy.c"
//#include "ex01/ft_strncpy.c"
//#include "ex02/ft_str_is_alpha.c"
//#include "ex03/ft_str_is_numeric.c"
//#include "ex04/ft_str_is_lowercase.c"
//#include "ex05/ft_str_is_uppercase.c"
//#include "ex06/ft_str_is_printable.c"
//#include "ex07/ft_strupcase.c"
//#include "ex08/ft_strlowcase.c"
//#include "ex09/ft_strcapitalize.c"

#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
// ex00	
//	char src[16] = "42, here we go!";
//	char *dest = calloc(16, sizeof(char));
//
//	ft_strcpy(dest, src);
//	printf("src: %s\n", src);
//	printf("dest: %s\n", dest);
// ou
	char *src;
	char *dest;
	char *ret;

	src = calloc(11, sizeof(char));
	src = "0123456789";
	dest = calloc(11, sizeof(char));
	ret = ft_strcpy(dest, src);	
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("ret: %s\n", ret);


// ex01
//	char src[16] = "42, here we go!";
//	char *dest = calloc(16, sizeof(char));
//	unsigned int n;
//	
//	n = 16;
//	ft_strncpy(dest, src, n);
//	printf("src: %s\n", src);
//	printf("dest: %s\n", dest);


// ex02
//	char	str1[11] = "aAbBcCdDeE";
//	char	str2[11] = "aAb8cCdDeE";
//	char	str3[11];
//	int		x;
//
//	x = ft_str_is_alpha(str1);
//	printf("%d\n", x);
//	x = ft_str_is_alpha(str2);
//	printf("%d\n", x);
//	x = ft_str_is_alpha(str3);
//	printf("%d\n", x);


// ex03
//	char	str1[11] = "0123456789";
//	char	str2[11] = "01234567B0";
//	char	str3[1];
//	int		x;
//
//	x = ft_str_is_numeric(str1);
//	printf("%d\n", x);
//	x = ft_str_is_numeric(str2);
//	printf("%d\n", x);
//	x = ft_str_is_numeric(str3);
//	printf("%d\n", x);


// ex04
//	char	str1[11] = "abcdefghij";
//	char	str2[11] = "abcdEfghij";
//	char	str3[1];
//	int		x;
//
//	x = ft_str_is_lowercase(str1);
//	printf("%d\n", x);
//	x = ft_str_is_lowercase(str2);
//	printf("%d\n", x);
//	x = ft_str_is_lowercase(str3);
//	printf("%d\n", x);


// ex05
//	char	str1[11] = "ABCDEFGHIJ";
//	char	str2[11] = "ABCDeFGHIJ";
//	char	str3[2];
//	int		x;
//
//	x = ft_str_is_uppercase(str1);
//	printf("%d\n", x);
//	x = ft_str_is_uppercase(str2);
//	printf("%d\n", x);
//	x = ft_str_is_uppercase(str3);
//	printf("%d\n", x);


// ex06
//	char	str1[16] = "42! Here we Go.";
//	char	str2[16] = "42! Here+wè Go.";
//	char	str3[2];
//	int		x;
//
//	x = ft_str_is_printable(str1);
//	printf("%d\n", x);
//	x = ft_str_is_printable(str2);
//	printf("%d\n", x);
//	x = ft_str_is_printable(str3);
//	printf("%d\n", x);


// ex07
//	char	str1[20] = "Lets Code Every Day";
//	char	str2[20] = "Lets Code Every Day";
//
//	printf("Antes: %s\n", str1);
//	ft_strupcase(str2);
//	printf("Depois: %s\n", str2);


// ex08
//	char	str1[20] = "Lets Code Every Day";
//	char	str2[20] = "Lets Code Every Day";
//
//	printf("Antes: %s\n", str1);
//	ft_strlowcase(str2);
//	printf("Depois: %s\n", str2);


// ex09
//	char	str1[46] = "oi, tudo bem? quarenta-e-duas; cinquenta+e+um";
//	char	str2[46] = "oi, tudo bem? quarenta-e-duas; cinquenta+e+um";
//
//	printf("Antes: %s\n", str1);
//	ft_strcapitalize(str2);
//	printf("Depois: %s\n", str2);

	return(0);
}
