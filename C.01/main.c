/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 01:40:38 by lehenriq          #+#    #+#             */
/*   Updated: 2021/04/14 00:59:05 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ex00/ft_ft.c"
//#include "ex01/ft_ultimate_ft.c"
//#include "ex02/ft_swap.c"
//#include "ex03/ft_div_mod.c"
//#include "ex04/ft_ultimate_div_mod.c"
//#include "ex05/ft_putstr.c"
//#include "ex06/ft_strlen.c"
//#include "ex07/ft_rev_int_tab.c"
//#include "ex08/ft_sort_int_tab.c"

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
// Ex 00
//	int n;
//	
//	n = 21;
//	ft_ft(&n);
//	printf("%d\n", n);
// ou
//	int *nbr;
//	int n;
//
//	nbr = &n;
//	ft_ft(nbr);
//	printf("%d\n", n);


// Ex 01
//	int a;
//	int *ptr1;
//	int **ptr2;
//	int ***ptr3;
//	int ****ptr4;
//	int *****ptr5;
//	int ******ptr6;
//	int *******ptr7;
//	int ********ptr8;
//	int *********ptr9;
//
//	a = 21;
//	ptr1 = &a;
//	ptr2 = &ptr1;
//	ptr3 = &ptr2;
//	ptr4 = &ptr3;
//	ptr5 = &ptr4;
//	ptr6 = &ptr5;
//	ptr7 = &ptr6;
//	ptr8 = &ptr7;
//	ptr9 = &ptr8;
//	printf("Declarado: %d\n", *********ptr9);
//	ft_ultimate_ft(ptr9);
//	printf("Com a função: %d\n", *********ptr9);
//	return (0);


// Ex 02
//	int *a = calloc(1, sizeof(int));
//	int *b = calloc(1, sizeof(int));
//
//	*a = 42;
//	*b = 21;
//
//	printf("Antes:\n a: %d em %p\n b: %d em %p\n", *a, a, *b, b);
//	ft_swap(a, b);
//	printf("Antes:\n a: %d em %p\n b: %d em %p\n", *a, a, *b, b);
//	return (0);


// Ex 03
//	int a;
//	int b;
//	int *div = calloc(1, sizeof(int));
//	int *mod = calloc(1, sizeof(int));
//
//	a = 25;
//	b = 4;
//	ft_div_mod(a, b, div, mod);
//	printf("Se dividirmos %d por %d = %d, restando %d.\n", a, b, *div, *mod);
//	return (0);


// Ex 04
//	int *a;
//	int *b;
//	
//	a = calloc(1, sizeof(int));
//	b = calloc(1, sizeof(int));
//
//	*a = 25;
//	*b = 4;
//	printf("Temos as variaveis A = %d e B = %d.\n", *a, *b);
//	ft_ultimate_div_mod(a, b);
//	printf("Divisão = %d | Resto da div. = %d\n", *a, *b);
//	return (0);


// Ex 05
//	char *str;
//
//	str = "Ta na hora do ultimo gas! Bora galera!\n";
//	ft_putstr(str);
//	return (0);


// Ex 06
//	char	*str;
//	int		carac;
//
//	str = "Vamos todos passar na 42!";
//	carac = ft_strlen(str);
//	printf("Se contar quantas letras tem a frase \"%s\", vai dar %d letras.\n", str, carac);
//	return (0);


// Ex 07
//	int *tab;
//	int size;
//
//	size = 0;
//	tab = calloc(10, sizeof(int));
//	while (size < 10)
//	{
//		tab[size] = size;
//		size++;
//	}
//	size = 0;
//	while (size < 10)
//	{
//		printf("%d ", tab[size]);
//		size++;
//	}
//	printf("\n");
//	ft_rev_int_tab(tab, 10);
//	size = 0;
//	while (size < 10)
//	{
//		printf("%d ", tab[size]);
//		size++;
//	}
//	printf("\n");
//	return (0);


// Ex 08
//	int *tab;
//	int i;
//
//	i = -1;
//	tab = calloc(10, sizeof(int));
//	while (++i < 10)
//		tab[i] = rand() % 100;
//	i = -1;
//	while (++i < 10)
//		printf("%d ", tab[i]);
//	printf("\n");
//	ft_sort_int_tab(tab, 10);
//	i = -1;
//	while (++i < 10)
//		printf("%d ", tab[i]);
//	printf("\n");
//	return (0);
}
