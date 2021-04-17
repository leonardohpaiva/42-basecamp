/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefranca <lefranca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 00:53:49 by lefranca          #+#    #+#             */
/*   Updated: 2021/04/16 03:15:46 by lefranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calculando(int nb, int power, int origin)
{
	nb = nb * origin;
	power--;
	if (power > 0)
		return (calculando(nb, power, origin));
	return (nb);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (calculando(1, power, nb));
}
