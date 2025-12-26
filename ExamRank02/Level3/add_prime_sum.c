/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 14:43:37 by adam              #+#    #+#             */
/*   Updated: 2025/12/24 13:07:58 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

int	ft_is_prime(int nbr)
{
	int	i;
	int	range;

	i = 2;
	range = nbr / 2;
	while (i <= range)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;

	if (!str || str[0] == '-')
		return (0);
	i = 0;
	nbr = 0;
	while (str[i] && str[i] <= '9' && str[i] >= '0')
	{
		nbr = nbr * 10;
		nbr += str[i] - '0';
		i++;
	}
	return (nbr);
}

int	main(int ac, char **av)
{
	int	i;
	int	sum;
	int	nbr;

	if (ac == 2)
	{
		nbr = ft_atoi(av[1]);
		i = 2;
		sum = 0;
		while (i <= nbr)
		{
			if (ft_is_prime(i))
				sum += i;
			i++;
		}
		ft_putnbr(sum);
	}
	else
		ft_putchar('0');
	ft_putchar('\n');
}
