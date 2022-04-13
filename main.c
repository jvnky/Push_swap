/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:22:53 by ychair            #+#    #+#             */
/*   Updated: 2022/04/13 06:09:14 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	len(t_a *a)
{
	int	i;

	i = 0;
	while (a)
	{
		i++;
		a = a->next;
	}
	return (i);
}

void	sort_stack(t_a **stack_a, t_a **stack_b)
{
	if (len(*stack_a) <= 5)
		simple_sort(stack_a, stack_b);
	else
		bits(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_a	*head;
	t_a	*b;

	head = NULL;
	b = NULL;
	if (argc < 2 || argv[1] == NULL)
		return (0);
	head = checkcommand(head, argc, argv);
	head->size_a = len(head);
	tab(&head);
	if (is_sorted(head) || head->size_a <= 1)
	{
		ft_lst_free(head);
		ft_lst_free(b);
		return (0);
	}
	sort_stack(&head, &b);
	ft_lst_free(head);
	ft_lst_free(b);
	return (0);
}
