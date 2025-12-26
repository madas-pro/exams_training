/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 10:29:36 by adam              #+#    #+#             */
/*   Updated: 2025/12/23 10:42:34 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_rev_print(char *str)
{
	int		i;

	if (!str)
		return ;
	i = ft_strlen(str);
	while (i > 0)
	{
		write(1, &str[i - 1], 1);
		i--;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		write(1, "\n", 1);
	else
		ft_rev_print(av[1]);
	return (0);
}
