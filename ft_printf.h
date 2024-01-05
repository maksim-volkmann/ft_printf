/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:45:58 by mvolkman          #+#    #+#             */
/*   Updated: 2024/01/02 15:34:51 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "./libft/libft.h"

int	ft_putuint(unsigned int n);
int	ft_putint(long n);
int	ft_putptn(void *n);
int	ft_puthex(unsigned long long n, int c);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_conversions(const char *format, va_list args);
int	ft_printf(const char *str, ...);

#endif
