/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:20:31 by ychair            #+#    #+#             */
/*   Updated: 2022/04/13 06:10:23 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	bits(t_a **a, t_a **b)
{
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	size = len(*a);
	max_bits = get_max_bits(a);
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*a)->index >> i) & 1) == 1)
				ft_r(a, 1);
			else
				ft_p(a, b, 2);
			j++;
		}
		while (len(*b) != 0)
			ft_p(b, a, 1);
		i++;
	}
}

int	get_max_bits(t_a **stack)
{
	t_a	*head;
	int	max;
	int	max_bits;

	head = *stack;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
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
	min = head->index;
	while (head->next)
	{
		head = head->next;
		if ((head->index < min) && head->index != val)
			min = head->index;
	}
	return (min);
}

void	sort_3(t_a **a)
{
	int		min;
	int		next_min;

	min = get_min(a, -1);
	next_min = get_min(a, min);
	if (is_sorted(*a))
		return ;
	ft_tricks(a, min, next_min);
}
