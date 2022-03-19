/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:24:40 by ychair            #+#    #+#             */
/*   Updated: 2022/03/18 23:17:29 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_H
# define PUSH_H 

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct s_a
{
    int val;
    int size_a;
    
    struct s_a *next;

} t_a;


int         checkav(char *av);
int         ft_strlen(const char *str);
int			ft_atoi(const char *str);
char		*ft_itoa(int nbr);
int	        ft_strcmp(char *s1, char *s2);
char	    *ft_strdup(char *s1);
t_a         *ft_lst_addback(t_a **begin,t_a *new);
t_a         *ft_lst_new(int val);
void        ft_lst_free(t_a *begin);
int		    ft_isdigit(char c);
t_a         *checkcommand(t_a *stack_a, int ac, char **av);
int         valduplicate(t_a *stack, int nbr);
int	        is_char_digit(char *str);
void	    error();
char		**ft_split(const char *str, char c);
t_a        *split_check(int ac,char **tab,t_a *stack,t_a *tmp);

#endif