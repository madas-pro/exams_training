/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 22:55:07 by adam              #+#    #+#             */
/*   Updated: 2025/12/23 10:51:43 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	find_alpha(char c, int maj)
{
	int	i;
	int	lettre;

	i = 0;
	if (maj == 0)
		lettre = 'a';
	else
		lettre = 'A';
	while (lettre + i < c)
		i++;
	return (i);
}

void	ft_repeat_alpha(char c)
{
	int		i;
	char	l;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		i = 0;
		if (c >= 'a' && c <= 'z')
			l = find_alpha(c, 0);
		else
			l = find_alpha(c, 1);
		while (i <= l)
		{
			ft_putchar(c);
			i++;
		}
	}
	else
		ft_putchar(c);
}

int	main(int ac, char **av)
{
	int	i;

	if (!(ac != 2 || !av[1]))
	{
		i = 0;
		while (av[1][i])
		{
			ft_repeat_alpha(av[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
}
