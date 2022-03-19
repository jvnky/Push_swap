/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:44:34 by ychair            #+#    #+#             */
/*   Updated: 2022/03/19 20:02:03 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	is_char_digit(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		//printf(" ||  %c\n",str[i]);
		if (!ft_isdigit(str[i]))
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
	int		nbr;
	int		j;
	char	**tab;
	t_a		*tmp;

	i = 1;
	j = 0;

	tab = ft_split(av[1], ' ');
	while (tab[j])
	{
		if (av[i][0] == '\0')
			error();
		tab = ft_split(av[i], ' ');
		stack = split_check(1, av, stack, tmp);
		i++;
		j++;
	}
	return (stack);
}
