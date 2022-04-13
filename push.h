/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:24:40 by ychair            #+#    #+#             */
/*   Updated: 2022/04/13 06:10:17 by ychair           ###   ########.fr       */
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
	int			index;
	int			size_a;
	struct s_a	*next;
}	t_a;

int			checkav(char *av);
int			ft_strlen(const char *str);
int			ft_atoi(const char *str);
t_a			*ft_lst_addback(t_a **begin, t_a *new);
t_a			*ft_lst_new(int val, int index);
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
void		ft_lst_push(t_a **begin, t_a *new);
int			len(t_a *a);
void		ft_sab(t_a **stack, int i);
void		ft_ss(t_a **stacka, t_a **stackb);
void		ft_p(t_a **a, t_a **b, int i);
void		ft_r(t_a **head, int i);
void		ft_rab(t_a **a, t_a **b);
void		ft_rr(t_a **head, int i);
void		ft_rrab(t_a **a, t_a **b);
void		bits(t_a **a, t_a **b);
int			get_max_bits(t_a **stack);
int			is_sorted(t_a *head);
void		tab(t_a **stack);
int			get_min(t_a **stack, int val);
void		sort_3(t_a **stack_a);
void		sort_4(t_a **stack_a, t_a **stack_b);
void		sort_5(t_a **stack_a, t_a **stack_b);
void		sort_stack(t_a **stack_a, t_a **stack_b);
void		simple_sort(t_a **stack_a, t_a **stack_b);
int			get_distance(t_a **stack, int index);
void		ft_tricks(t_a **a, int min, int next_min);

#endif
