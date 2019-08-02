/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 20:22:21 by exam              #+#    #+#             */
/*   Updated: 2019/07/05 20:45:49 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	maff_revalpha(void)
{
	char	lowercase;
	char	uppercase;
	int	i;

	lowercase = 'z';
	uppercase = 'Y';
	i = 0;
	while (i <= 12)
	{
		write(1, &lowercase, 1);
		write(1, &uppercase, 1);
		lowercase -= 2;
		uppercase -= 2;
		i++;
	}
	write(1,"\n", 1);
}

int	main(void)
{
	maff_revalpha();
	return(0);
}

