#include "gnl.h"

char	*gnl(int fd)
{
	static char	buf[BUFFER_SIZE];
	static int	bytes;
	static int	pos;
	char	*line;
	int	i;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = malloc(100000);
	if (!line)
		return (NULL);
	i = 0;
	while (1)
	{
		if (pos >= bytes)
		{
			bytes = read(fd, buf, BUFFER_SIZE);
			pos = 0;
			if (bytes <= 0)
				break;
		}
		line[i] = buf[pos++];
		if (line[i++] == '\n')
			break ;
	}
	if (bytes < 0 || i == 0)
	{
		free(line);
		return (NULL);
	}
	line[i] = '\0';
	return (line);
}

int	main(void)
{
	int fd = 0;
	fd = open("subject.txt", O_RDONLY);
	char *line = gnl(fd);
	while (line)
	{
		printf("%s", line);
		free(line);
		line = gnl(fd);
	}
	close(fd);
}
