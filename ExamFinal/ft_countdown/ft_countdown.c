/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 10:16:37 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 10:21:11 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_countdown(void)
{
	char	number;

	number = '9';
	while (number >= '0')
	{
		write(1, &number, 1);
		number--;
	}
}

int main(void)
{
	ft_countdown();
	write(1, "\n", 1);
	return(0);
}
