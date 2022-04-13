/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 01:27:07 by ychair            #+#    #+#             */
/*   Updated: 2022/04/13 06:09:55 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	sort_4(t_a **stack_a, t_a **stack_b)
{
	int	distance;

	if (is_sorted(*stack_a))
		return ;
	distance = get_distance(stack_a, get_min(stack_a, -1));
	if (distance == 1)
		ft_r(stack_a, 1);
	else if (distance == 2)
	{
		ft_r(stack_a, 1);
		ft_r(stack_a, 1);
	}
	else if (distance == 3)
		ft_rr(stack_a, 1);
	if (is_sorted(*stack_a))
		return ;
	ft_p(stack_a, stack_b, 2);
	sort_3(stack_a);
	ft_p(stack_b, stack_a, 1);
}

void	sort_5(t_a **stack_a, t_a **stack_b)
{
	int	distance;

	distance = get_distance(stack_a, get_min(stack_a, -1));
	if (distance == 1)
		ft_r(stack_a, 1);
	else if (distance == 2)
	{
		ft_r(stack_a, 1);
		ft_r(stack_a, 1);
	}
	else if (distance == 3)
	{
		ft_rr(stack_a, 1);
		ft_rr(stack_a, 1);
	}
	else if (distance == 4)
		ft_rr(stack_a, 1);
	if (is_sorted(*stack_a))
		return ;
	ft_p(stack_a, stack_b, 2);
	sort_4(stack_a, stack_b);
	ft_p(stack_b, stack_a, 1);
}

void	simple_sort(t_a **stack_a, t_a **stack_b)
{
	int	size;

	if (is_sorted(*stack_a) || len(*stack_a) == 0
		|| len(*stack_a) == 1)
		return ;
	size = len(*stack_a);
	if (size == 2)
		ft_sab(stack_a, 1);
	else if (size == 3)
		sort_3(stack_a);
	else if (size == 4)
		sort_4(stack_a, stack_b);
	else if (size == 5)
		sort_5(stack_a, stack_b);
}

int	get_distance(t_a **stack, int index)
{
	t_a		*head;
	int		distance;

	distance = 0;
	head = *stack;
	while (head)
	{
		if (head->index == index)
			break ;
		distance++;
		head = head->next;
	}
	return (distance);
}
