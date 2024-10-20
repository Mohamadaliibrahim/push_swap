/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamibr <mohamibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:23:41 by mohamibr          #+#    #+#             */
/*   Updated: 2024/10/20 15:40:16 by mohamibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static	void	push(t_stack **src, t_stack **dst)
{
	t_stack	*tmp;

	if (*src == NULL)
		return ;
	tmp = *src;
	*src = (*src)->next;
	if (*src != NULL)
		(*src)->prev = NULL;
	tmp->next = *dst;
	if (*dst != NULL)
		(*dst)->prev = tmp;
	*dst = tmp;
}

void	pa(t_stack **a, t_stack **b)
{
	push(b, a);
	ft_printf("pa\n");
}

void	pb(t_stack **a, t_stack **b)
{
	push(a, b);
	ft_printf("pb\n");
}
