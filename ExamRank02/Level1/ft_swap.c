/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adam <adam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 22:48:29 by adam              #+#    #+#             */
/*   Updated: 2025/12/22 22:53:42 by adam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
void	putnbr(int n)
{
	if (n >= 10)
		putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int	main(void)
{
	int	a = 42;
	int	b = 21;

	putnbr(a);
	write(1, " ", 1);
	putnbr(b);
	write(1, "\n", 1);

	ft_swap(&a, &b);

	putnbr(a);
	write(1, " ", 1);
	putnbr(b);
	write(1, "\n", 1);

	return (0);
}
*/