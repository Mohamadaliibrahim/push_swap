/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamibr <mohamibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:36:20 by mohamibr          #+#    #+#             */
/*   Updated: 2024/10/20 15:40:16 by mohamibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

char	*ft_strdup(const char *src)
{
	char	*s;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	s = (char *) malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	while (j < i)
	{
		s[j] = src[j];
		j++;
	}
	s[i] = '\0';
	return (s);
}
