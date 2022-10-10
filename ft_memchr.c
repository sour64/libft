/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:54:25 by rmarquit          #+#    #+#             */
/*   Updated: 2021/10/12 17:54:27 by rmarquit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*us;
	size_t			i;

	i = 0;
	us = (unsigned char *) s;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if ((unsigned char) us[i] == (unsigned char) c)
			return ((char *) s + i);
		i++;
	}
	if (c == '\0')
		return ((char *) s + i);
	return (0);
}
