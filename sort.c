/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeizi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 01:35:44 by afeizi            #+#    #+#             */
/*   Updated: 2025/12/19 01:35:48 by afeizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_data *a, t_data *b)
{
	if (a->size == 2)
		sa(&a->stack);
	else if (a->size == 3)
		sort_three(&a->stack);
	else if (a->size == 4)
		sort_four(&a->stack, &b->stack, a);
	else if (a->size == 5)
		sort_five(&a->stack, &b->stack, a);
	else
		sort_chunks(&a->stack, &b->stack, a);
}
