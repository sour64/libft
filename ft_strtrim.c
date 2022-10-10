/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:32:17 by rmarquit          #+#    #+#             */
/*   Updated: 2021/10/19 18:32:18 by rmarquit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_checkset(char a, char const *set)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	while (set[i])
	{
		if (set[i] == a)
		{
			b = 1;
		}
		i++;
	}
	return (b);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		l;
	char	*str;

	if (!s1)
		return (NULL);
	i = 0;
	l = ft_strlen(s1);
	while (s1[i] && ft_checkset(s1[i], set) == 1)
		i++;
	while (i < l && s1[l - 1] && ft_checkset(s1[l - 1], set) == 1)
		l--;
	str = ft_substr(s1, i, l - i);
	return (str);
}
