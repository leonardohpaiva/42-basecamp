/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 01:24:21 by lehenriq          #+#    #+#             */
/*   Updated: 2021/04/15 00:39:39 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

int		main(void)
{
//	char	*str;
//	int		carac;
//
//	str = "Vamos todos passar na 42!";
//	carac = ft_strlen(str);
//	printf("Se contar quantas letras tem a frase \"%s\", vai dar %d letras.\n", str, carac);
//	return (0);
}