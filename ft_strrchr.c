/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 19:16:29 by gna               #+#    #+#             */
/*   Updated: 2020/04/07 19:18:35 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		check_num(const char *str, int c)
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
			check = check + 1;
		i++;
	}
	return (check);
}

char	*ft_strrchr(const char *str, int c)
{
	int i;
	int check;

	i = 0;
	check = 0;
	if (c == '\0')
		return ((char *)(str + ft_strlen(str)));
	if (check_num(str, c) != 0)
	{
		while (str[i] != '\0')
		{
			if (str[i] == (unsigned char)c)
				check = check + 1;
			if (check == check_num(str, c))
				return ((char *)(str + i));
			i = i + 1;
		}
	}
	return ((char*)(0));
}
