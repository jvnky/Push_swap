/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:20:31 by ychair            #+#    #+#             */
/*   Updated: 2022/03/31 17:16:36 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	half(t_a **a, t_a **b)
{
	int	i;
	int	lent;

	i = 0;
	lent = len(*a);
	printf("Size => %d \n", len(*a));
	while (i < lent / 2)
	{
		ft_p(a, b);
		write(1, "pb\n", 3);
		i++;
	}

}