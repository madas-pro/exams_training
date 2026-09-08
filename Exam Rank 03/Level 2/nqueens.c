#include <stdlib.h>
#include <stdio.h>

int	is_safe(int *board, int col, int row)
{
	int	i = 0;
	while (i < col)
	{
		if (board[i] == row || board[i] - row == col - i || row - board[i] == col - i)
			return (0);
		i++;
	}
	return (1);
}

void	solve(int *board, int col, int n)
{
	int	i;
	int	row;

	if (col == n)
	{
		i = 0;
		while (i < col)
		{
			if (i > 0)
				printf(" ");
			printf("%d", board[i]);
			i++;
		}
		printf("\n");
		return ;
	}
	row = 0;
	while (row < n)
	{
		if (is_safe(board, col, row))
		{
			board[col] = row;
			solve(board, col + 1, n);
		}
		row++;
	}
}

int	main(int ac, char **av)
{
	if(ac == 2)
	{
		int	n = atoi(av[1]);
		int	board[20];
		if (n < 1)
			return 1;
		solve(board, 0, n);
	}
	else
		return 1;
}
