/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvite-he <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 15:29:14 by dvite-he          #+#    #+#             */
/*   Updated: 2016/07/21 15:29:17 by dvite-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *np;
	int *num;
	int i;

	np = 0;
	i = 0;
	if (min >= max)
	{
		return (np);
	}
	num = (int*)malloc(sizeof(*num) * (max - min));
	if (!num)
	{
		return (num);
	}
	while (min < max)
	{
		num[i] = min;
		min++;
		i++;
	}
	return (num);
}
