/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:20:31 by ychair            #+#    #+#             */
/*   Updated: 2022/04/08 17:57:28 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	bits(t_a **a, t_a **b)
{
	int	i;
	int	max;
	int	j;

	max = len(*a);
	i = 0;
	while (i < get_max_bits(a))
	{
		j = 0;
		while (j < max)
		{
			if ((((*a)->val >> i) & 1) == 1)
				ft_r(a, 1);
			else
			{
				ft_p(a, b, 0);
				write(1, "pb\n", 3);
			}
			j++;
		}
		i++;
		while ((*b) != NULL)
			ft_p(b, a, 1);
	}
}


int	get_max_bits(t_a **stack)
{
	t_a	*head;
	int	max;
	int	max_bits;

	head = *stack;
	max = head->val;
	max_bits = 0;
	while (head)
	{
		if (head->val > max)
			max = head->val;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

int	is_sorted(t_a *head)
{
	t_a	*tmp;

	tmp = head;

	while (tmp->next)
	{
		if (tmp->val > tmp->next->val)
		{
			return (0);
		}
		tmp = tmp->next;
	}
	return (1);
}

int	get_min(t_a **stack, int val)
{
	t_a		*head;
	int		min;

	head = *stack;
	min = head->val;
	while (head->next)
	{
		head = head->next;
		if ((head->val < min) && head->val != val)
			min = head->val;
	}
	return (min);
}

void	sort_3(t_a **stack_a)
{
	t_a		*head;
	int		min;
	int		next_min;

	head = *stack_a;
	min = get_min(stack_a, -1);
	next_min = get_min(stack_a, min);
	if (is_sorted(*stack_a))
		return ;
	if (head->val == min && head->next->val != next_min)
	{
		ft_r(stack_a, 1);
		ft_sab(stack_a, 1);
		ft_rr(stack_a, 1);
	}
	else if (head->val == next_min)
	{
		if (head->next->val == min)
			ft_sab(stack_a, 1);
		else
			ft_rr(stack_a, 1);
	}
	else
	{
		if (head->next->val == min)
			ft_r(stack_a, 1);
		else
		{
			ft_sab(stack_a, 1);
			ft_rr(stack_a, 1);
		}
	}
}
