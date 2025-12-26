/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:11:34 by adam              #+#    #+#             */
/*   Updated: 2025/12/23 12:31:41 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_do_op(int nb1, int nb2, char op)
{
	if (op == '+')
		return (nb1 + nb2);
	if (op == '-')
		return (nb1 - nb2);
	if (op == '*')
		return (nb1 * nb2);
	if (op == '/')
		return (nb1 / nb2);
	if (op == '%')
		return (nb1 % nb2);
	return (-1);
}

int	main(int ac, char **av)
{
	int	nb1;
	int	nb2;

	if (ac == 4)
	{
		nb1 = atoi(av[1]);
		nb2 = atoi(av[3]);
		printf("%d", ft_do_op(nb1, nb2, av[2][0]));
	}
	printf("\n");
	return (0);
}
