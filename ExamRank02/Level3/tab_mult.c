/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 11:54:58 by adam              #+#    #+#             */
/*   Updated: 2025/12/26 12:21:44 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (str[i] <= '9' && str[i] >= '0')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (nbr);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

void	ft_tab_mult(int nbr)
{
	int	i;

	i = 1;
	while (i < 10)
	{
		ft_putnbr(i);
		write (1, " x ", 3);
		ft_putnbr(nbr);
		write (1, " = ", 3);
		ft_putnbr(i * nbr);
		ft_putchar('\n');
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_tab_mult(ft_atoi(av[1]));
	else
		ft_putchar('\n');
}
