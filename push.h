/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:24:40 by ychair            #+#    #+#             */
/*   Updated: 2022/03/31 16:44:34 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_H
# define PUSH_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_a
{
	int			val;
	int			size_a;
	struct s_a	*next;
}	t_a;

int			checkav(char *av);
int			ft_strlen(const char *str);
int			ft_atoi(const char *str);
t_a			*ft_lst_addback(t_a **begin, t_a *new);
t_a			*ft_lst_new(int val);
void		ft_lst_free(t_a *begin);
void		ft_freestr(char **str);
int			ft_isdigit(char c);
t_a			*checkcommand(t_a *stack_a, int ac, char **av);
int			valduplicate(t_a *stack, int nbr);
int			is_char_digit(char *str);
void		error(void);
char		**ft_split(const char *str, char c);
t_a			*split_check(char **tab, t_a *stack);
int			ft_issplitable(char *str);
void		free_tab(char **str);
void		checkerror(char *str, t_a *stack);
void		ft_lst_push(t_a **begin,t_a *new);

void		ft_sab(t_a **stack);
void		ft_ss(t_a **stacka, t_a **stackb);
void		ft_p(t_a **a, t_a **b);
int			len(t_a *a);
void		ft_r(t_a **head);
void		ft_rab(t_a **a, t_a **b);
void		ft_rr(t_a **head);
void		ft_rrab(t_a **a, t_a **b);

void	half(t_a **a, t_a **b);



void ft_printall(t_a *a, t_a *b);
#endif
