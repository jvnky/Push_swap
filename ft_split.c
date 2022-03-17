/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:06:44 by ychair            #+#    #+#             */
/*   Updated: 2022/03/17 13:47:37 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"
static char			**ft_free(char **tab, int i)
{
	while (--i)
	{
		free(tab[i]);
		tab[i] = 0;
	}
	free(tab);
	tab = 0;
	return (0);
}

static int			ft_taillem(const char *str, int i, char charset)
{
	int j;

	j = 0;
	while (str[i] != charset && str[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

static int			ft_nbr_mots(const char *str, char charset)
{
	int i;
	int nbr_mots;

	i = 0;
	nbr_mots = 0;
	while (str[i])
	{
		while (str[i] == charset)
			i++;
		if (str[i])
			nbr_mots++;
		while (str[i] != charset && str[i] != '\0')
			i++;
	}
	return (nbr_mots);
}

char				**ft_split(const char *str, char c)
{
	int			is;
	int			i;
	int			j;
	char		**tab;

	if (!str)
		return (0);
	is = 0;
	if (!(tab = malloc(sizeof(char*) * (ft_nbr_mots(str, c) + 1))))
		return (0);
	i = 0;
	while (i < ft_nbr_mots(str, c))
	{
		j = 0;
		while (str[is] == c && str[is])
			is++;
		if (!(tab[i] = malloc(sizeof(char) * (ft_taillem(str, is, c) + 1))))
			return (ft_free(tab, i));
		while (str[is] != c && str[is])
			tab[i][j++] = str[is++];
		tab[i++][j] = '\0';
	}
	tab[i] = NULL;
	return (tab);
}