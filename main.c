/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:22:53 by ychair            #+#    #+#             */
/*   Updated: 2022/03/27 09:21:09 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	main(int argc, char **argv)
{
	t_a	*head;
	t_a *tmp;

	head = NULL;
	if (argc < 2 || argv[1] == NULL)
		error();
	head = checkcommand(head, argc, argv);
	printf("Size => %d \n", head->size_a);
	tmp = head;
	while (head)
	{
		printf("node => %d \n", head->val);
		head = head->next;
	}
	swap_a(tmp);
	/*check swaper*/
	while (tmp)
	{
		printf("node1 => %d \n", tmp->val);
		tmp = tmp->next;
	}

	ft_lst_free(head);
	return (0);
}
