/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 19:57:21 by gna               #+#    #+#             */
/*   Updated: 2020/04/14 14:07:59 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	endline;

	i = 0;
	endline = '\n';
	if (s == 0)
		return ;
	while (s[i] != '\0')
	{
		write(fd, s + i, 1);
		i++;
	}
	write(fd, &endline, 1);
}
