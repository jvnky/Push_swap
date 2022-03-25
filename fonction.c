/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:57:45 by ychair            #+#    #+#             */
/*   Updated: 2022/03/25 14:47:33 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	ft_strlen(const char *str)
{
	int	i;
	int	sp;

	sp = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			sp++;
		i++;
	}
	return (i - sp);
}

void	error(void)
{
	write (2, "Error\n", 6);
	exit(1);
}
