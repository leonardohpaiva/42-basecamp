/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 04:56:53 by lehenriq          #+#    #+#             */
/*   Updated: 2021/04/15 00:11:05 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
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
			if (str[i] >= '0' && str[i] <= '9')
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
