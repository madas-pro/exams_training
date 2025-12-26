/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 19:03:49 by adam              #+#    #+#             */
/*   Updated: 2025/12/23 19:24:49 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_epurable(char c)
{
	if (c == '\t' || c == ' ')
		return (1);
	return (0);
}

void	ft_epur_str(char *str)
{
	int	i;
	int	is_first_word;

	i = 0;
	is_first_word = 1;
	while (str[i])
	{
		if (ft_is_epurable(str[i]) == 0)
		{
			write(1, &str[i], 1);
			is_first_word = 0;
		}
		else if (ft_is_epurable(str[i + 1]) == 0 && str[i + 1] != '\0')
			if (is_first_word == 0)
				write(1, " ", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_epur_str(av[1]);
	write(1, "\n", 1);
}
