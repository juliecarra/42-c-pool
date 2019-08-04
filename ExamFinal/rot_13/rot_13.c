/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:40:55 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 15:38:03 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int argc, char **argv)
{
	int i;
	int	plus;
	int minus;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			plus = argv[1][i] + 13;
			minus = argv[1][i] - 13;
			if((argv[1][i] >= 'A'  && 'M' >= argv[1][i]) || (argv[1][i] >= 'a' &&  'm' >= argv[1][i]))
			{
				write(1, &plus, 1);
			}
			if ((argv[1][i] >= 'N' && 'Z' >=  argv[1][i]) || (argv[1][i] >= 'n'  && 'z' >= argv[1][i]))
			{
				write(1, &minus, 1);
			}
			 if ((argv[1][i] >= '0' &&  argv[1][i] <= '9') || (argv[1][i] >= 32 &&  argv[1][i] <= 47))
			{
				 write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	 write(1, "\n", 1);
	return (0);
}
