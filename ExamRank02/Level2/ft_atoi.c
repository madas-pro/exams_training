/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 14:08:50 by adam              #+#    #+#             */
/*   Updated: 2025/12/23 15:11:07 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_skip_space(char *str)
{
	int	i;

	i = 0;
	while ((str[i]) && (str[i] == ' ' || str[i] == '+'))
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	nbr;

	sign = 1;
	nbr = 0;
	i = ft_skip_space(str);
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (nbr);
		else
			nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (nbr * sign);
}
/*
int	main(void)
{
	char *tests[] = {
        "42",
        "-42",
        "   123",
        "+56",
        "42abc",
        "abc",
        "",
        "0",
        "2147483647",
        "-2147483648"
    };

    int i = 0;

    while (i < 10)
    {
        printf("Test \"%s\"\n", tests[i]);
        printf("  atoi    = %d\n", atoi(tests[i]));
        printf("  ft_atoi = %d\n\n", ft_atoi(tests[i]));
        i++;
    }
    return 0;
}
*/
