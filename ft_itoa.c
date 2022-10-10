/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:26:14 by rmarquit          #+#    #+#             */
/*   Updated: 2021/10/23 18:47:07 by rmarquit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ch_num(int n)
{
	long	a;
	int		i;

	a = n;
	i = 0;
	if (a == 0)
		return (1);
	if (a < 0)
	{
		a = -a;
		i++;
	}
	while (a > 9)
	{
		a /= 10;
		i++;
	}
	if (a > 0 && a < 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		s;
	int		l;
	long	num;

	s = ch_num(n) - 1;
	l = ch_num(n);
	arr = (char *) malloc(sizeof(char) * (l + 1));
	if (!arr)
		return (NULL);
	num = n;
	if (num < 0)
		num = -num;
	while (s >= 0)
	{
		arr[s] = num % 10 + 48;
		num = num / 10;
		s--;
	}
	if (n < 0)
		arr[s + 1] = '-';
	arr[l] = '\0';
	return (arr);
}
