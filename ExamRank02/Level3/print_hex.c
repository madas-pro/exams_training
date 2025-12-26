/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 18:41:38 by adam              #+#    #+#             */
/*   Updated: 2025/12/24 18:54:42 by adam             ###   ########.fr       */
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
	while (str[i])
	{
		nbr = nbr * 10;
		nbr += str[i] - '0';
		i++;
	}
	return (nbr);
}

void	print_hex(int nbr)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr >= 16)
		print_hex(nbr / 16);
	ft_putchar(base[nbr % 16]);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	ft_putchar('\n');
	return (0);
}
