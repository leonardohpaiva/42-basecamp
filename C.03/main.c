/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 01:26:08 by lehenriq          #+#    #+#             */
/*   Updated: 2021/04/16 19:10:04 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ex00/ft_strcmp.c"
//#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
//#include "ex03/ft_strncat.c"
//#include "ex04/ft_strstr.c"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ex01 antes da main (fake moulinette)
//void	ft_strncmp_test(char *s1, char *s2, unsigned int n)
//{
//	int res;
//	int ft_res;
//
//	res = strncmp(s1, s2, n);
//	ft_res = strncmp(s1, s2, n);
//	if (res != ft_res)
//		printf("> KO, expected: %d, got: %d\n", res, ft_res);
//	else
//		printf("> OK, result: %d\n", ft_res);
//}

int		main(void)
{
// ex00
//	char	s1[20] = "42 is cool!";
//	char	s2[20] = "42 is cool, Bro!";
//	int		ret;
//
//	ret = ft_strcmp(s1, s2);
//	if (ret > 0)
//		printf("a func retornou %d, então a frase 1 é maior.\n", ret);
//	else if (ret < 0)
//		printf("a func retornou %d, então a frase 2 é maior.\n", ret);
//	else
//		printf("a func retornou %d, então as duas frases são iguais.\n", ret);

// fake moulinette
//	char *s1;
//	char *s2;
//	char *s3;
//	char *s4;
//	char s5[] = {'a', 'b', 'c', -10, -20, '\0'};
//
//	s1 = calloc(10, sizeof(char)); 
//	s2 = calloc(8, sizeof(char)); 
//	s3 = calloc(10, sizeof(char)); 
//	s4 = calloc(10, sizeof(char)); 
//	s1 = "abcdefghi";
//	s2 = "abcdefg";
//	s3 = "abcdEfghi";
//	s4 = "ab0defghi";
//	printf("s1: %s, s2: %s, s3: %s, s4: %s, s5: %s\n", s1, s2, s3, s4, s5);
//	printf("cmp_12 = %d, og_cmp_12 = %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
//	printf("cmp_13 = %d, og_cmp_13 = %d\n", ft_strcmp(s1, s3), strcmp(s1, s3));
//	printf("cmp_14 = %d, og_cmp_14 = %d\n", ft_strcmp(s1, s4), strcmp(s1, s4));
//	printf("cmp_15 = %d, og_cmp_15 = %d\n", ft_strcmp(s1, s5), strcmp(s1, s5));


// ex01
//	char	s1[20] = "42 is cool, Bro!";
//	char	s2[20] = "42 is cool!";
//	int		ret;
//	unsigned int n;
//
//	n = 20;
//	ret = ft_strncmp(s1, s2, n);
//	if (ret > 0)
//		printf("a func retornou %d, então a s1 é maior.\n", ret);
//	else if (ret < 0)
//		printf("a func retornou %d, então a s2 é maior.\n", ret);
//	else
//		printf("a func retornou %d, então as duas são iguais.\n", ret);

// fake moulinette
//	char	*s1 = "abcdefghi";
//	char	*s2 = "abcdEfghi";
//	char	s3[] = {'a', 'b', -23, 'd', 'e', 'f', 'g', 'h', 'i', '\0'};
//	int		offset;
//
//	offset = 0;
//	printf("[1] Testing strings \"%s\" and \"%s\"\n", s1, s2);
//	while (offset < 10)
//	{
//		ft_strncmp_test(s1, s2, offset);
//		offset++;
//	}
//	offset = 0;
//	printf("[2] Testing strings \"%s\" and \"%s\"\n", s1, s3);
//	while (offset < 10)
//	{
//		ft_strncmp_test(s1, s3, offset);
//		offset++;
//	}
//	offset = 0;
//	printf("[3] Testing strings \"%s\" and \"%s\"\n", s2, s3);
//	while (offset < 10)
//	{
//		ft_strncmp_test(s2, s3, offset);
//		offset++;
//	}


// ex02
	char src[7] = "galera";
	char dest[11] = "alo ";
	char *ret;
	char *ret_test;

	ret = ft_strcat(dest, src);
	ret_test = strcat(dest, src);

	if (ret != ret_test)
		printf("Deu ruim! a função e o teste ficaram diferentes!\n");
	else if (strcmp(ret_test, ret) != 0)
		printf("Deu ruim! a função e o teste ficaram diferentes!\n");
	else
		printf("Deu Bom! Ficaram iguais!\n");

// fakemoulinette
//	char *src;
//	char *dest;
//	char *ft_src;
//	char *ft_dest;
//	char *result;
//	char *ft_result;
//
//	src = calloc(7, sizeof(char));
//	dest = calloc(12, sizeof(char));
//	ft_src = calloc(7, sizeof(char));
//	ft_dest = calloc(12, sizeof(char));
//	strcpy(src, "galera");
//	strcpy(dest, "alo ");
//	strcpy(ft_src, "galera");
//	strcpy(ft_dest, "alo ");
//	result = strcat(dest, src);
//	ft_result = ft_strcat(ft_dest, ft_src);
//	if (ft_dest != ft_result)
//		printf("KO, return value of ft_strcar is different of ft_dest. ft_strcar=%p ft_dest=%p\n", ft_result, ft_dest);
//	else if (strcmp(result, ft_result) != 0)
//		printf("KO, value returned from strcmp with ft_strcat and strcat is different of zero(%d).\n", strcmp(result, ft_result));
//	else
//		printf("OK.\nresult: %s\n", ft_result);


// ex03
//	char src[7] = "galera";
//	char dest[11] = "alo ";
//	char *ret;
//	char *ret_test;
//
//	ret = ft_strncat(dest, src, 4);
//	ret_test = strncat(dest, src, 4);
//	printf("%s\n", ret);
//	printf("%s\n", ret_test);
//	if (ret != ret_test)
//{
//	printf("Deu ruim! a função e o teste ficaram diferentes!\n");
//}
//	else if (strcmp(ret_test, ret) != 0)
//		printf("Deu ruim! a função e o teste ficaram diferentes!\n");
//	else
//		printf("Deu Bom! Ficaram iguais!");

// fake moulinette
//	int 	nb;
//	char	*src;
//	char	*dest;
//	char	*ft_src;
//	char	*ft_dest;
//	char	*buff;
//	char	*ft_buff;
//
//	src = calloc(7, sizeof(char));
//	dest = calloc(12, sizeof(char));
//	ft_src = calloc(12, sizeof(char));
//	ft_dest = calloc(12, sizeof(char));
//	strcpy(src, "galera");
//	strcpy(ft_src, "galera");
//	strcpy(dest, "alo ");
//	strcpy(ft_dest, "alo ");
//	nb = 13;
//	buff = strncat(dest, src, nb);
//	ft_buff = ft_strncat(ft_dest, ft_src, nb);
//	if (ft_dest != ft_buff)
//		printf("[1] KO, return value from ft_strncat is different of ft_dest. ft_strncat=%p ft_dest=%p\n", ft_buff, ft_dest);
//	else if (strcmp(buff, ft_buff) != 0)
//	{
//		printf("[1] KO, strcmp between ft_dest and dest is different of 0(%d)\n", strcmp(buff, ft_buff));
//		return (1);
//	}
//	else
//		printf("[1] OK, nb = %02d, result = %s\n", nb, ft_buff);
//	nb = 4;
//	strcpy(src, "galera");
//	strcpy(ft_src, "galera");
//	strcpy(dest, "alo ");
//	strcpy(ft_dest, "alo ");
//	buff = strncat(dest, src, nb);
//	ft_buff = ft_strncat(ft_dest, ft_src, nb);
//	if (ft_dest != ft_buff)
//		printf("[2] KO, return value from ft_strncat is different of ft_dest. ft_strncat=%p ft_dest=%p\n", ft_buff, ft_dest);
//	else if (strcmp(buff, ft_buff) != 0)
//	{
//		printf("[2] KO, strcmp between ft_dest and dest is different of 0(%d)\n", strcmp(buff, ft_buff));
//		return (1);
//	}
//	else
//		printf("[2] OK, nb = %02d, result = %s\n", nb, ft_buff);
//	nb = 0;
//	strcpy(src, "galera");
//	strcpy(ft_src, "galera");
//	strcpy(dest, "alo ");
//	strcpy(ft_dest, "alo ");
//	buff = strncat(dest, src, nb);
//	ft_buff = ft_strncat(ft_dest, ft_src, nb);
//	if (ft_dest != ft_buff)
//		printf("[3] KO, return value from ft_strncat is different of ft_dest. ft_strncat=%p ft_dest=%p\n", ft_buff, ft_dest);
//	else if (strcmp(buff, ft_buff) != 0)
//	{
//		printf("[3] KO, strcmp between ft_dest and dest is different of 0(%d)\n", strcmp(buff, ft_buff));
//		return (1);
//	}
//	else
//		printf("[3] OK, nb = %02d, result = %s\n", nb, ft_buff);


// ex04
//	char str[17] = "Bom dia a todos!";
//	char *to_find = "dia";
//	char *ret;
//	char *ret_test;
//
//	ret = ft_strstr(str, to_find);
//	ret_test = strstr(str, to_find);
//	printf("minha função retorna: %s\n", ret);
//	printf("com a original retorna: %s\n", ret_test);

// fake moullinete
//	char *str;
//	char *to_find;
//	char *buff;
//	char *ft_buff;
//
//	str = strcpy(calloc(11, sizeof(char)), "alo galera");
//	to_find = strcpy(calloc(7, sizeof(char)), "galera");
//	buff = strstr(str, to_find);
//	ft_buff = ft_strstr(str, to_find);
//	if (buff != ft_buff)
//		printf("[1] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
//	else
//		printf("[1] OK. expected: %s result: %s\n", buff, ft_buff);
//	str = strcpy(calloc(11, sizeof(char)), "alo galera");
//	to_find = strcpy(calloc(7, sizeof(char)), "galerA");
//	buff = strstr(str, to_find);
//	ft_buff = ft_strstr(str, to_find);
//	if (buff != ft_buff)
//		printf("[2] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
//	else
//		printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);
//	str = strcpy(calloc(11, sizeof(char)), "alo galera");
//	to_find = strcpy(calloc(1, sizeof(char)), "");
//	buff = strstr(str, to_find);
//	ft_buff = ft_strstr(str, to_find);
//	if (buff != ft_buff)
//		printf("[2] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
//	else
//		printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);


	return (0);
}
