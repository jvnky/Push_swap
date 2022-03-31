/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <ychair@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:22:53 by ychair            #+#    #+#             */
/*   Updated: 2022/03/31 17:15:05 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	len(t_a *a)
{
	int	i;

	i = 0;
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
	t_a	*b;

	head = NULL;
	b = NULL;
	if (argc < 2 || argv[1] == NULL)
		error();
	head = checkcommand(head, argc, argv);
	head->size_a = len(head);
	//printf("Size => %d \n", head->size_a);

	half(&head, &b);

	ft_printall(head, b);


	ft_lst_free(head);
	ft_lst_free(b);
	return (0);
}

void ft_printall(t_a *a, t_a *b)
{
	if(!a || !b)
		printf("null\n");
	while (a)
	{
		printf("A => %d \n", a->val);
		a = a->next;
	}
	while (b)
	{
		printf("B => %d \n", b->val);
		b = b->next;
	}

}
