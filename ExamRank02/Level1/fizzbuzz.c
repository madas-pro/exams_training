/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 19:55:22 by adam              #+#    #+#             */
/*   Updated: 2025/12/22 21:09:26 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

void	fizzbuzz(void)
{
	int	nbr;

	nbr = 1;
	while (nbr <= 100)
	{
		if (nbr % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (nbr % 5 == 0)
			write(1, "buzz", 4);
		else if (nbr % 3 == 0)
			write(1, "fizz", 4);
		else
			ft_putnbr(nbr);
		write (1, "\n", 1);
		nbr++;
	}
}

int	main(void)
{
	fizzbuzz();
}
