/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:59:57 by adam              #+#    #+#             */
/*   Updated: 2025/12/22 20:10:38 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			break ;
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac != 2 || !av[1])
		write(1, "\n", 1);
	else
		first_word(av[1]);
	return (0);
}
