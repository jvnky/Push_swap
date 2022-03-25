/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listedfunction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:59:41 by ychair            #+#    #+#             */
/*   Updated: 2022/03/25 18:03:45 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

//creation maillon
t_a	*ft_lst_new(int val)
{
	t_a	*tmp;

	tmp = malloc(sizeof(t_a));
	tmp->val = val;
	tmp->next = NULL;
	return (tmp);
}

//ajout fin maillon.
t_a	*ft_lst_addback(t_a **begin, t_a *new)
{
	t_a	*tmp;

	tmp = *begin;
	if (tmp == NULL)
	{
		*begin = new;
		return (*begin);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->next = NULL;
	return (tmp);
}

void	ft_lst_free(t_a *begin)
{
	t_a	*tmp1;

	while (begin && begin->next)
	{
		tmp1 = begin->next;
		free(begin);
		begin = tmp1;
	}
	if (begin)
		free(begin);
}

void	free_tab(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i = 0;
		i++;
	}
	free(str[i]);
	str[i] = 0;
}
