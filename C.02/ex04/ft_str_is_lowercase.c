/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 16:42:21 by lehenriq          #+#    #+#             */
/*   Updated: 2021/04/15 00:11:12 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
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
			if (str[i] >= 'a' && str[i] <= 'z')
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
