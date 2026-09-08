#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	c;
	int	i;
	int	len;
	int	ret;

	if (argc != 2 || argv[1][0] == '\0')
		return (1);
	len = strlen(argv[1]);
	i = 0;
	while ((ret = read(STDIN_FILENO, &c, 1)) > 0)
	{
		if (c == argv[1][i])
			i++;
		else
		{
			write(1, argv[1], i);
			i = 0;
			if (c == argv[1][0])
				i++;
			else
				write(1, &c, 1);
		}
		if (i == len)
		{
			while (i--)
				write(1, "*", 1);
		}
	}
	if (ret < 0)
	{
		perror("Error");
		return (1);
	}
	write(1,argv[1], i);
	return (0);
}

//$> echo 'abcdefgaaaabcdefabc' | ./filter abc | cat -e
