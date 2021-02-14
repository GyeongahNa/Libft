/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 19:39:31 by gna               #+#    #+#             */
/*   Updated: 2020/04/14 18:49:35 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, const char *src)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

char	*ft_strjoin(char const *s1, const char *s2)
{
	unsigned int	s1_len;
	unsigned int	s2_len;
	char			*new_s;

	s1_len = 0;
	s2_len = 0;
	if (s1 == 0 || s2 == 0)
		return ((char *)(0));
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;
	if (!(new_s = malloc(sizeof(char) * (s1_len + s2_len + 1))))
		return ((char *)(0));
	ft_strcpy(new_s, s1);
	ft_strcat(new_s, s2);
	return (new_s);
}
