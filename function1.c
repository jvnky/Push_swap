/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:24:08 by ychair            #+#    #+#             */
/*   Updated: 2022/03/31 12:42:54 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

t_a	*split_check(char **tab, t_a *stack)
{
	int		i;

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
		}
		else
		{
			if (valduplicate(stack, ft_atoi(tab[i])) == 1)
				error();
			ft_lst_addback(&stack, ft_lst_new(ft_atoi(tab[i])));
			stack->size_a++;
		}
	i++;
	}
	ft_freestr(tab);
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

void	ft_freestr(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}
