/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 19:42:55 by adam              #+#    #+#             */
/*   Updated: 2025/12/24 20:09:27 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_letter(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (2);
	return (0);
}

int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

void	ft_str_capitalize(char *str)
{
	int	i;
	int	is_in_word;

	i = 0;
	is_in_word = 0;
	while (str[i])
	{
		if (is_letter(str[i]) > 0)
		{
			if (is_in_word == 0 && is_letter(str[i]) == 1)
				str[i] -= 32;
			is_in_word = 1;
		}
		else if (is_space(str[i]))
			is_in_word = 0;
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	ac = ac;
	i = 1;
	while (av[i])
	{
		ft_str_capitalize(av[i]);
		i++;
	}
	ft_putchar('\n');
}
