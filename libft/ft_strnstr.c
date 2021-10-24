/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouisa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:17:13 by slouisa           #+#    #+#             */
/*   Updated: 2021/10/17 14:56:45 by slouisa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char	*h, const char	*n, size_t	len)
{
	size_t	i;
	size_t	t;

	i = 0;
	if (!*n)
		return ((char *)h);
	while (i < len && h[i] != '\0')
	{
		if (h[i] == n[0])
		{
			t = 0;
			while (i + t < len && h[i + t] == n[t] && n[t] != '\0')
				t++;
			if (n[t] == '\0')
				return ((char *)h + i);
		}
		i++;
	}
	return (0);
}
