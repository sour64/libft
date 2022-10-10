/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:43:40 by rmarquit          #+#    #+#             */
/*   Updated: 2021/10/19 16:43:41 by rmarquit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(const char *s1, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	while (s1[i] && i < len)
		i++;
	str = malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			ls;

	if (!s)
		return (NULL);
	ls = ft_strlen(s);
	if (ls < start)
		return (ft_strdup(""));
	str = ft_strndup(&s [start], len);
	if (str == NULL)
		return (NULL);
	return (str);
}
