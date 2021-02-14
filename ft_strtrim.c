/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 19:45:58 by gna               #+#    #+#             */
/*   Updated: 2020/04/14 14:02:33 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	in_set(char c, char const *set)
{
	unsigned int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			break ;
		i++;
	}
	if (i != ft_strlen(set))
		return (1);
	else
		return (0);
}

int	get_start(char const *s1, char const *set)
{
	int i;
	int start;

	i = 0;
	start = 0;
	while (s1[i] != '\0')
	{
		if (in_set(s1[i], set) == 0)
		{
			start = i;
			return (start);
		}
		i++;
	}
	return (0);
}

int	get_end(char const *s1, char const *set)
{
	int i;
	int end;

	i = ft_strlen(s1) - 1;
	end = 0;
	while (i >= 0)
	{
		if (in_set(s1[i], set) == 0)
		{
			end = i;
			return (end);
		}
		i--;
	}
	return (-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	start;
	int	end;
	char	*trim_s;

	i = 0;
	if (s1 == 0 || set == 0)
		return ((char *)(0));
	start = get_start(s1, set);
	end = get_end(s1, set);
	if (!(trim_s = malloc(sizeof(char) * (end - start + 2))))
		return ((char *)(0));
	while (start <= end)
	{
		trim_s[i] = s1[start];
		i++;
		start++;
	}
	trim_s[i] = '\0';
	return (trim_s);
}
