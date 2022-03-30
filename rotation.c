/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 07:53:33 by ychair            #+#    #+#             */
/*   Updated: 2022/03/30 19:14:50 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	ft_sab(t_a **stack)
{
	t_a * tmp;
	t_a * suiv;


	tmp = *stack;
	if (tmp->size_a > 1)
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
}

t_a	*ft_p(t_a **a, t_a *b)
{
	t_a	*tmp;

	tmp = *a;
	b = ft_lst_new(tmp->val);
	*a = tmp->next;
	return (b);
}

t_a	*ft_r(t_a *head)
{
	t_a *tmp;
	t_a *tmp1;

	tmp = head;
	tmp1 = head;
	while (tmp1->next)
		tmp1 = tmp1->next;
	tmp1->next = head;
	head = tmp->next;
	tmp->next = NULL;
	return (head);
}
