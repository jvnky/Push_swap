/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:35:33 by ychair            #+#    #+#             */
/*   Updated: 2022/03/10 12:40:27 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

static int	ft_expo(int a, int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (0);
	return (a * ft_expo(a, n - 1));
}

static int	ft_isspace(const char c)
{
	if (c == '\v' || c == '\t' || c == '\f' || c == '\n' ||
			c == '\r' || c == ' ')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int signe;
	int result;
	int i;

	signe = 1;
	if (!str)
		return (0);
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		signe *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str && (*str >= '0' && *str <= '9'))
		str++;
	str--;
	result = 0;
	i = 0;
	while ((ft_strlen(str) > 0) && (*str >= '0' && *str <= '9'))
		result += (*(str--) - '0') * ft_expo(10, i++);
	return (result * signe);
}