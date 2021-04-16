/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 04:11:59 by lehenriq          #+#    #+#             */
/*   Updated: 2021/04/16 00:24:26 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
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
			if ((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z'))
			{
				ret = 1;
			}
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
