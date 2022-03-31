/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:16:30 by ychair            #+#    #+#             */
/*   Updated: 2022/03/31 14:08:28 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	ft_rab(t_a **a, t_a **b)
{
	ft_r(a);
	ft_r(b);
}

void	ft_rr(t_a **head)
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
}

void	ft_rrab(t_a **a, t_a **b)
{
	ft_rr(a);
	ft_rr(b);
}
