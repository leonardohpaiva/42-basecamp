/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lehenriq <lehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 19:29:40 by lehenriq          #+#    #+#             */
/*   Updated: 2021/04/15 00:11:31 by lehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
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
			if (str[i] >= 32 && str[i] <= 126)
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
