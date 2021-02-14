/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 19:18:57 by gna               #+#    #+#             */
/*   Updated: 2020/04/07 19:21:43 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t		exam_char(const char *big, const char *little, size_t i)
{
	size_t j;

	j = 0;
	while (little[j] != '\0')
	{
		if (little[j] != big[i])
			break ;
		i++;
		j++;
	}
	return (j);
}

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	size_t idx;

	i = 0;
	if (little[0] == '\0')
		return ((char *)(big));
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			idx = i;
			if (len - i < ft_strlen(little) ||
					ft_strlen(big) - i < ft_strlen(little))
				return ((char *)(0));
			j = exam_char(big, little, i);
			if (j == ft_strlen(little))
				return ((char *)(big + idx));
		}
		i++;
	}
	return ((char *)(0));
}
