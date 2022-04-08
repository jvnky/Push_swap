/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:16:30 by ychair            #+#    #+#             */
/*   Updated: 2022/04/08 17:56:54 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	ft_rab(t_a **a, t_a **b)
{
	ft_r(a, 0);
	ft_r(b, 0);
	write(1, "rr\n", 3);
}

void	ft_rr(t_a **head, int i)
{
	t_a	*tmp;
	t_a	*tmp1;

	tmp = NULL;
	tmp1 = *head;
	if (len(*head) > 1)
	{
		while (tmp1->next)
		{
			tmp = tmp1;
			tmp1 = tmp1->next;
		}
		tmp->next = NULL;
		tmp1->next = *head;
		*head = tmp1;
	}
	if (i == 1)
		write(1, "rra\n", 4);
}

void	ft_rrab(t_a **a, t_a **b)
{
	ft_rr(a, 0);
	ft_rr(b, 0);
	write(1, "rrr\n", 4);
}


