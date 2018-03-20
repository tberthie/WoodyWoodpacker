#include "woody.h"

static char	hexa(char random)
{
	char	hex;

	hex = BASE[(unsigned int)random % strlen(BASE)];
	return (hex);
}

char		*get_key(void)
{
	char	*key;
	int	fd;
	char	buffer;
	int	len;

	key = ft_strnew();
	len = KEY_LEN;
	fd = open("/dev/urandom", O_RDONLY);
	while (len--)
	{
		read(fd, &buffer, 1);
		ft_strpush(&key, hexa(buffer));
	}
	return (key);
}
