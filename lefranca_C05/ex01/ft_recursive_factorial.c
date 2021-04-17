/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 19:37:49 by lefranca          #+#    #+#             */
/*   Updated: 2021/04/16 17:08:01 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calculando(int fatorial, int nb)
{
	fatorial = fatorial * nb;
	nb--;
	if (nb > 0)
	{
		return (calculando(fatorial, nb));
	}
	return (fatorial);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (calculando(1, nb));
}

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int nb;
	int res;

	nb = -5;
	while (nb <= 10)
	{
		res = ft_recursive_factorial(nb);
		printf("> n = %d, n! = %d\n", nb, res);
		nb++;
	}
	return (0);
}
