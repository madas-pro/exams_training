/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 10:42:59 by adam              #+#    #+#             */
/*   Updated: 2025/12/23 11:15:41 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isalpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (2);
	return (0);
}

void	ft_alpha_mirror(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isalpha(str[i]) == 1)
			ft_putchar('z' - str[i] + 'a');
		else if (ft_isalpha(str[i]) == 2)
			ft_putchar('Z' - str[i] + 'A');
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (!(ac != 2 || !av[1]))
		ft_alpha_mirror(av[1]);
	ft_putchar('\n');
}
