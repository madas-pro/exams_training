/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:52:35 by adam              #+#    #+#             */
/*   Updated: 2025/12/26 16:16:28 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	i;
	int	nbr;

	i = 2;
	if (ac == 2)
	{
		nbr = atoi(av[1]);
		if (nbr == 1)
			printf("1");
		while (i <= nbr)
		{
			if (nbr % i == 0)
			{
				printf("%d", i);
				nbr = nbr / i;
				if (nbr != 1)
					printf("*");
			}
			else
				i++;
		}
	}
	printf("\n");
}
