/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvite-he <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 10:03:41 by dvite-he          #+#    #+#             */
/*   Updated: 2016/07/21 10:03:44 by dvite-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		str_len;
	char	*str;

	str_len = (ft_strlen(src));
	str = (char *)malloc(sizeof(*str) * (str_len + 1));
	if (!str)
	{
		return (0);
	}
	else
	{
		ft_strcpy(str, src);
	}
	return (str);
}
