/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 07:53:33 by ychair            #+#    #+#             */
/*   Updated: 2022/03/31 17:14:21 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	ft_sab(t_a **stack)
{
	t_a	*tmp;
	t_a	*suiv;

	tmp = *stack;
	if (len(*stack) > 1)
	{
		suiv = tmp->next;
		tmp->next = suiv->next;
		suiv->next = tmp;
		*stack = suiv;
	}
}

void	ft_ss(t_a **stacka, t_a **stackb)
{
	ft_sab(stacka);
	ft_sab(stackb);
	write(1, "ss\n", 3);
}

void	ft_p(t_a **a, t_a **b)
{
	t_a	*tmp;

	tmp = *a;
	if (len(tmp) > 0 && tmp)
	{
		if (!b)
			*b = ft_lst_new(tmp->val);
		else
			ft_lst_push(b, ft_lst_new(tmp->val));
		*a = tmp->next;
		free(tmp);
	}
}

void	ft_r(t_a **head)
{
	t_a	*tmp;
	t_a	*tmp1;

	tmp = *head;
	tmp1 = *head;
	if (len(*head) > 1)
	{
		while (tmp1->next)
			tmp1 = tmp1->next;
		tmp1->next = *head;
		*head = tmp->next;
		tmp->next = NULL;
	}
}
