/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:24:40 by ychair            #+#    #+#             */
/*   Updated: 2022/03/10 13:51:40 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_H
# define PUSH_H 

#include <unistd.h>
#include <stdlib.h>

typedef struct s_love
{
    int val;
    struct s_love *next;

} t_love;

int         checkav(char *av);
int         ft_strlen(const char *str);
int			ft_atoi(const char *str);
char		*ft_itoa(int nbr);
int	        ft_strcmp(char *s1, char *s2);
char	    *ft_strdup(char *s1);
void        lst_addback(t_love **begin,t_love *new);
t_love      *lst_new(int val);
void        lst_free(t_love *begin);



#endif