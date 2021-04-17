/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:53:07 by rapareci          #+#    #+#             */
/*   Updated: 2021/04/13 17:37:09 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int a;

	a = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[a] == s2[a] && s1[a] != '\0' && a <= n)
		a++;
	if (s1[a] != s2[a])
		return (s1[a] - s2[a]);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char *s1;
	char *s2;
	char s3[] = {'a', 'b', -23, 'd', 'e', 'f', 'g', 'h', 'i', '\0'};

	s1 = calloc(10, sizeof(char));
	s2 = calloc(10, sizeof(char));
	s1 = "abcdefghi";
	s2 = "abcdEfghi";
	printf("s1: %s, s2: %s\n", s1, s2);
	printf("n = 6; ft_cmp: %d, og_cmp: %d\n", ft_strncmp(s1, s2, 6), strncmp(s1, s2, 6));
	printf("n = 10; ft_cmp: %d, og_cmp: %d\n", ft_strncmp(s1, s2, 10), strncmp(s1, s2, 10));
	printf("n = 0; ft_cmp: %d, og_cmp: %d\n", ft_strncmp(s1, s2, 0), strncmp(s1, s2, 0));
	printf("s1: %s, s3: %s\n", s1, s3);
	printf("n = 6; ft_cmp: %d, og_cmp: %d\n", ft_strncmp(s1, s3, 6), strncmp(s1, s3, 6));
	printf("n = 10; ft_cmp: %d, og_cmp: %d\n", ft_strncmp(s1, s3, 10), strncmp(s1, s3, 10));
	printf("n = 0; ft_cmp: %d, og_cmp: %d\n", ft_strncmp(s1, s3, 0), strncmp(s1, s3, 0));
	return (0);
}
