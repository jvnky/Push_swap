/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 23:41:27 by ychair            #+#    #+#             */
/*   Updated: 2022/04/13 05:53:10 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	*bubblesort(int *tab, int len)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

void	indexing(t_a **stack, int *tab)
{
	int	lent;
	int	i;
	t_a	*tmp;

	tmp = *stack;
	lent = len(*stack);
	while (tmp)
	{
		i = 0;
		while (i < lent)
		{
			if (tab[i] == tmp->val)
				tmp->index = i;
			i++;
		}
		tmp = tmp->next;
	}
}

void	tab(t_a **stack)
{
	int	*tab;
	int	i;
	t_a	*tmp;

	tab = malloc(sizeof(int) * len(*stack));
	tmp = *stack;
	i = 0;
	while (tmp)
	{
		tab[i] = tmp->val;
		i++;
		tmp = tmp->next;
	}
	tab = bubblesort(tab, len(*stack));
	indexing(stack, tab);
	free(tab);
}

void	ff(t_a **a)
{
	ft_r(a, 1);
	ft_sab(a, 1);
	ft_rr(a, 1);
}

void	ft_tricks(t_a **a, int min, int next_min)
{
	t_a	*head;

	head = *a;
	if (head->index == min && head->next->index != next_min)
		ff(a);
	else if (head->index == next_min)
	{
		if (head->next->index == min)
			ft_sab(a, 1);
		else
			ft_rr(a, 1);
	}
	else
	{
		if (head->next->index == min)
			ft_r(a, 1);
		else
		{
			ft_sab(a, 1);
			ft_rr(a, 1);
		}
	}
}
