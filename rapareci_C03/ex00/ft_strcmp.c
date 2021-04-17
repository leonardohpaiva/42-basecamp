/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:46:23 by rapareci          #+#    #+#             */
/*   Updated: 2021/04/13 17:35:54 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int	a;
	int b;

	a = 0;
	b = 0;
	while (s1[a] == s2[a])
	{
		if (s1[a] == '\0')
		{
			return (b = 0);
		}
		a++;
	}
	if (s1[a] > s2[a])
		b = 1;
	else
		b = -1;
	return (b);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;
	char s5[] = {'a', 'b', 'c', -10, -20, '\0'};

	s1 = calloc(10, sizeof(char)); 
	s2 = calloc(8, sizeof(char)); 
	s3 = calloc(10, sizeof(char)); 
	s4 = calloc(10, sizeof(char)); 
	s1 = "abcdefghi";
	s2 = "abcdefg";
	s3 = "abcdEfghi";
	s4 = "ab0defghi";
	printf("s1: %s, s2: %s, s3: %s, s4: %s, s5: %s\n", s1, s2, s3, s4, s5);
	printf("cmp_12 = %d, og_cmp_12 = %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	printf("cmp_13 = %d, og_cmp_13 = %d\n", ft_strcmp(s1, s3), strcmp(s1, s3));
	printf("cmp_14 = %d, og_cmp_14 = %d\n", ft_strcmp(s1, s4), strcmp(s1, s4));
	printf("cmp_15 = %d, og_cmp_15 = %d\n", ft_strcmp(s1, s5), strcmp(s1, s5));
	return(0);
}
