/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 11:42:31 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 12:21:13 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c)
{
	    write(1, &c, 1);
}

void    ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		 nbr = -nbr;
    }
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
    }
	else
		 ft_putchar(nbr % 10 + 48);
}

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
			write(1, "\n", 1);
		}
		else if (i % 3 == 0)
		{
			write(1, "fizz", 4);
			write(1, "\n", 1);
		}
		else	if (i % 5 == 0)
		{
			 write(1, "buzz", 4);
			  write(1, "\n", 1);
		}
		else
		{	ft_putnbr(i);
			ft_putchar('\n');
		}
		i++;
		
	}
	return (0);
}

