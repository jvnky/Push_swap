/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:22:53 by ychair            #+#    #+#             */
/*   Updated: 2022/03/30 19:18:39 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"


int len(t_a *a)
{
	int i = 0;
	while (a)
	{
		i++;
		a = a->next;
	}
	return (i);
}
int	main(int argc, char **argv)
{
	t_a	*head;
	t_a	*tmp;


	head = NULL;
	if (argc < 2 || argv[1] == NULL)
		error();
	head = checkcommand(head, argc, argv);
	head->size_a = len(head);
	printf("Size => %d \n", head->size_a);

	tmp = head;


	while (tmp)
	{
		printf("node1 => %d \n", tmp->val);
		tmp = tmp->next;
	}
	ft_lst_free(head);
	//ft_lst_free(b);
	return (0);
}
