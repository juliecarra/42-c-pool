/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucarra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 13:16:06 by jucarra           #+#    #+#             */
/*   Updated: 2019/07/17 13:20:15 by jucarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define TRUE  1
# define FALSE 0
# define SUCCESS 0
# define EVEN_MSG    "I have an even number of arguments.\n"
# define ODD_MSG     "I have an odd number of arguments.\n"
# define EVEN(nbr) (nbr % 2 == 0)

void	ft_putstr(char *str);

typedef int	t_bool;

#endif
