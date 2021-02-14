/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 19:52:38 by gna               #+#    #+#             */
/*   Updated: 2020/04/07 19:55:30 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		malloc_size(long num)
{
	int minus_check;
	int malloc_size;

	minus_check = 0;
	malloc_size = 0;
	if (num < 0)
	{
		minus_check = 1;
		num = (-1) * num;
	}
	else if (num == 0)
		return (2);
	while (num != 0)
	{
		num = num / 10;
		malloc_size++;
	}
	if (minus_check == 1)
		return (malloc_size + 2);
	else
		return (malloc_size + 1);
}

char	*ft_itoa(int n)
{
	long	num;
	int		size;
	char	*s;

	num = n;
	size = malloc_size(num);
	if (!(s = (char *)malloc(sizeof(char) * size)))
		return ((char *)(0));
	if (num < 0)
	{
		num = (-1) * num;
		s[0] = '-';
	}
	s[size - 1] = '\0';
	size = size - 2;
	if (num == 0)
		s[size] = '0';
	while (num != 0)
	{
		s[size--] = num % 10 + '0';
		num = num / 10;
	}
	return (s);
}
