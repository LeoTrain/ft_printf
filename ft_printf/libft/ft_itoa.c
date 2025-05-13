/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:09:31 by leberton          #+#    #+#             */
/*   Updated: 2025/04/28 06:26:47 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_count(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*itoa_minus(int n)
{
	int		count;
	char	*str;

	n = -n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = ft_get_count(n);
	str = (char *)ft_calloc(count + 2, sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '-';
	while (count > 0)
	{
		str[count] = (n % 10) + 48;
		n /= 10;
		count--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*str;

	if (n < 0)
		return (itoa_minus(n));
	else if (n == 0)
		return (ft_strdup("0"));
	count = ft_get_count(n);
	str = (char *)malloc((count + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[count] = 0;
	while (count > 0)
	{
		str[count - 1] = (n % 10) + 48;
		n /= 10;
		count--;
	}
	return (str);
}
