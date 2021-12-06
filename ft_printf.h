/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:13:00 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/12/06 12:40:56 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>

int		ft_printf(const char *args, ...);

// Printers
int		print_string(char *c);
int		print_number(int nbr);
int		print_unsigned(unsigned int nbr);
int		print_hex(int nbr, int to_upper);
int		print_pointer(unsigned long ptr);

// Utils
void	ft_putunsigned(unsigned int nbr, int fd, int *len);
void	ft_puthex_fd(unsigned int nbr, int to_upper, int fd, int *len);
void	ft_put_ptr(uintptr_t nbr, int *len);

#endif
