/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_int_hex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:33:06 by mvolkman          #+#    #+#             */
/*   Updated: 2024/01/02 15:34:39 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long n, int c)
{
	char	*uhex;
	char	*ihex;
	int		count;

	uhex = "0123456789ABCDEF";
	ihex = "0123456789abcdef";
	if (n >= 16)
	{
		count = ft_puthex(n / 16, c);
		if (count == -1)
			return (-1);
	}
	else
		count = 0;
	if (c)
	{
		if (ft_putchar(uhex[n % 16]) == -1)
			return (-1);
	}
	else
	{
		if (ft_putchar(ihex[n % 16]) == -1)
			return (-1);
	}
	return (count + 1);
}

int	ft_putptn(void *n)
{
	int	count;
	int	check;

	count = 0;
	check = ft_putstr("0x");
	if (check == -1)
		return (-1);
	count += check;
	check = ft_puthex((unsigned long long)n, 0);
	if (check == -1)
		return (-1);
	count += check;
	return (count);
}

int	ft_putint(long n)
{
	int	count;
	int	temp;

	count = 0;
	if (n < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		n = -n;
		count = 1;
	}
	if (n >= 10)
	{
		temp = ft_putint(n / 10);
		if (temp == -1)
			return (-1);
		count += temp;
	}
	if (ft_putchar(n % 10 + '0') == -1)
		return (-1);
	return (count + 1);
}

int	ft_putuint(unsigned int n)
{
	int	count;
	int	temp;

	count = 0;
	if (n >= 10)
	{
		temp = ft_putuint(n / 10);
		if (temp == -1)
			return (-1);
		count += temp;
	}
	if (ft_putchar(n % 10 + '0') == -1)
		return (-1);
	return (count + 1);
}
