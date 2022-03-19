/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:35:33 by ychair            #+#    #+#             */
/*   Updated: 2022/03/19 10:17:24 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9' || c == '-');
}

int	ft_atoi(const char *str)
{
	int			i;
	int			negative;
	long int	res;

	i = 0;
	negative = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i + 1] == '-' || str[i + 1] == '+')
			error();
		if (str[i] == '-')
			negative = negative * -1;
		i++;
	}
	while ((ft_isdigit(str[i])) && str[i] != '\0')
	{
			res = res * 10 + (str[i] - '0');
			i++;
	}
	if ((res * negative < -2147483648) || (res * negative > 2147483647))
		error();
	return (res * negative);
}
