/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 20:07:32 by gna               #+#    #+#             */
/*   Updated: 2020/04/14 13:55:30 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int	buff_size(long num)
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

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	int	size;
	char	s[1024];

	num = n;
	size = buff_size(num);
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
	ft_putstr_fd(s, fd);
}
