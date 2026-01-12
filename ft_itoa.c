/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahabib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 20:23:46 by hahabib           #+#    #+#             */
/*   Updated: 2026/01/12 16:39:09 by hahabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long n)
{
	int		len;
	long	tmp;

	len = (n <= 0);
	if (n < 0)
		tmp = -n;
	else
		tmp = n;
	while (tmp)
	{
		tmp /= 10;
		len++;
	}
	return (len);
}

static long	make_positive(int n)
{
	long	num;

	num = n;
	if (num < 0)
		num = -num;
	return (num);
}

static char	*handle_zero(void)
{
	char	*str;

	str = malloc(2);
	if (!str)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		len;
	char	*str;

	if (n == 0)
		return (handle_zero());
	nbr = make_positive(n);
	len = count_digits(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (nbr)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (n < 0)
	{
		str[0] = '-';
	}
	return (str);
}
