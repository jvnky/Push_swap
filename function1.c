/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:24:08 by ychair            #+#    #+#             */
/*   Updated: 2022/03/25 16:31:27 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

t_a	*split_check(char **tab, t_a *stack)
{
	int		i;
	t_a		*tmp;

	i = 0;
	if (tab[0] == NULL)
		error();
	while (tab[i])
	{
		if (is_char_digit(tab[i]) == 0)
			error();
		if (!stack)
		{
		stack = ft_lst_new(ft_atoi(tab[i]));
		tmp = stack;
		}
		else
		{
			if (valduplicate(stack, ft_atoi(tab[i])) == 1)
				error();
			tmp = ft_lst_addback(&stack, ft_lst_new(ft_atoi(tab[i])));
			stack->size_a++;
		}
	i++;
	}
	return (stack);
}

t_a	*split_check1(char **tab, t_a *stack)
{
	int		i;
	t_a		*tmp;

	i = 1;
	if (tab == NULL)
		error();
	while (tab[i])
	{
		if (is_char_digit(tab[i]) == 0)
			error();
		if (!stack)
		{
		stack = ft_lst_new(ft_atoi(tab[i]));
		tmp = stack;
		}
		else
		{
			if (valduplicate(stack, ft_atoi(tab[i])) == 1)
				error();
			tmp->next = ft_lst_new(ft_atoi(tab[i]));
			tmp = tmp->next;
		}
	i++;
	}
	return (stack);
}

int	ft_issplitable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

void	checkerror(char *str, t_a *stack)
{
	if (str[0] == '\0' || str == NULL)
		error();
	if (valduplicate(stack, ft_atoi(str)) == 1)
		error();
}
