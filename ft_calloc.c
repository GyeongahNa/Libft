/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 19:34:55 by gna               #+#    #+#             */
/*   Updated: 2020/04/14 12:49:02 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	if (!(s = malloc(nmemb * size)))
		return ((void *)(0));
	while (i < nmemb * size)
	{
		s[i] = '\0';
		i++;
	}
	return ((void *)(s));
}
