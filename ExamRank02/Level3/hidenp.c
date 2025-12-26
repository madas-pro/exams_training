/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 16:32:24 by adam              #+#    #+#             */
/*   Updated: 2025/12/24 16:48:48 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_nbr(char c)
{
	write(1, (&c), 1);
}

int	hidenp(char *str, char *hidden)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == hidden[j])
			j++;
		if (hidden[j] == '\0')
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_putchar_nbr(hidenp(av[2], av[1]) + '0');
	write (1, "\n", 1);
	return (0);
}
