/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:11:44 by lehenriq          #+#    #+#             */
/*   Updated: 2021/04/15 00:11:24 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;
	int ret;

	i = 0;
	if (str[i] == '\0')
		ret = 1;
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				ret = 1;
			else
			{
				ret = 0;
				break ;
			}
			i++;
		}
	}
	return (ret);
}
