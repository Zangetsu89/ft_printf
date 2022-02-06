/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edawood <edawood@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:20:39 by edawood           #+#    #+#             */
/*   Updated: 2022/02/03 13:22:56 by edawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>
# include "./libft/libft.h"

typedef struct s_info
{
	int		count;
	char	*input;
	va_list	args;
}	t_info;

int		ft_printf(const char *input, ...);
int		ft_input_checker(char *input, char *arguments, t_info *info);
void	ft_print_str(char *s);
void	ft_putstr(char *arguments, t_info *info);
void	ft_putchar(char c, t_info *info);
void	ft_putnbr(int n, t_info *info);
void	ft_print_ptr(unsigned long long ptr, t_info *info);
void	ft_print_decimal(int num, t_info *info);
void	ft_putnbr_base(uintptr_t n, int base, t_info *info, int upper);
void	ft_putstr(char *str, t_info *info);
#endif
