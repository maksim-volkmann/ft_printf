/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_c_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:42:10 by mvolkman          #+#    #+#             */
/*   Updated: 2024/01/02 14:56:44 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	check;

	check = write(1, &c, 1);
	if (check == -1)
		return (-1);
	return (check);
}

int	ft_putstr(char *str)
{
	int	count;
	int	i;
	int	check;

	count = 0;
	i = 0;
	if (str == NULL )
		return (write(1, "(null)", sizeof(char) * 6));
	while (str[i])
	{
		check = ft_putchar(str[i]);
		if (check == -1)
			return (-1);
		count += check;
		i++;
	}
	return (count);
}
