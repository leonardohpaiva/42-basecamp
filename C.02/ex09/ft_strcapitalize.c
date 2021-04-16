/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 22:02:30 by lehenriq          #+#    #+#             */
/*   Updated: 2021/04/16 05:09:57 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
		}
	}
	return (str);
}

//if (i == 0 && str[i] >= 97 && str[i] <= 122)
//	str[i] = str[i] - 32;
//else if (str[i] >= '0' && str[i] <= '9')
//	++i;
//else if (str[i] == )
//{
//	if (str[i] >= 97 && str[i] <= 122)
//	str[i] = str[i] - 32;
//}
