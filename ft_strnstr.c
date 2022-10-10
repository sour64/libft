/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:32:58 by rmarquit          #+#    #+#             */
/*   Updated: 2021/10/18 14:33:01 by rmarquit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = 0;
	n = ft_strlen(need);
	if (n == 0)
		return ((char *) hay + i);
	while (hay[i] && i < len)
	{
		j = 0;
		while (i + j < len && hay[i + j] == need[j] && need[j])
			j++;
		if (need[j] == '\0')
			return ((char *) hay + i);
		i++;
	}
	return (0);
}
