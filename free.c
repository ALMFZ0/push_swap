/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeizi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 01:32:53 by afeizi            #+#    #+#             */
/*   Updated: 2025/12/19 01:32:57 by afeizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_free(t_data *data)
{
	t_stack	*current;
	t_stack	*next;

	if (!data)
		return (0);
	current = data->stack;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	if (data->tab)
		free(data->tab);
	free(data);
	return (0);
}
