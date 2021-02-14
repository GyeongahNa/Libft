/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 19:26:12 by gna               #+#    #+#             */
/*   Updated: 2020/04/07 21:53:10 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sanity_check(char *str)
{
	int i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] >= '0' && str[i] <= '9')
		return (i);
	else
		return (-1);
}

int	ft_atoi(char *str)
{
	int		i;
	long	decimal;

	if (sanity_check(str) == -1)
		return (0);
	i = sanity_check(str);
	decimal = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		decimal = (decimal + str[i] - '0') * 10;
		i++;
	}
	decimal = decimal / 10;
	if (sanity_check(str) - 1 >= 0 && str[sanity_check(str) - 1] == '-')
		decimal = (-1) * decimal;
	return (decimal);
}
