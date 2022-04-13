/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:44:34 by ychair            #+#    #+#             */
/*   Updated: 2022/04/13 01:19:17 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	is_char_digit(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]) || (str[i] == '-' && !ft_isdigit(str[i + 1])))
			return (0);
		if (str[i] == '-' && ft_isdigit(str[i - 1]))
			return (0);
		i++;
	}
	return (1);
}

int	valduplicate(t_a *stack, int nbr)
{
	while (stack)
	{
		if (stack->val == nbr)
			return (1);
		stack = stack->next;
	}
	return (0);
}

t_a	*checkcommand(t_a *stack, int ac, char **av)
{
	int		i;

	i = 1;
	while (i < ac)
	{
		checkerror(av[i], stack);
		if (ft_issplitable(av[i]) == 1)
			stack = split_check(ft_split(av[i], ' '), stack);
		else
		{
			if (is_char_digit(av[i]) == 0)
				error();
			if (!stack)
			{
				stack = ft_lst_new(ft_atoi(av[i]), 0);
			}
			else
				ft_lst_addback(&stack, ft_lst_new(ft_atoi(av[i]), 0));
		}
		i++;
	}
	return (stack);
}
