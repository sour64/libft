/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:16:46 by rmarquit          #+#    #+#             */
/*   Updated: 2021/10/07 16:16:49 by rmarquit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)dest;
	while (n > 0)
	{
		p[n - 1] = c;
		n--;
	}
	return (dest);
}
