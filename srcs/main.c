/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:20:09 by tberthie          #+#    #+#             */
/*   Updated: 2017/11/08 15:28:52 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "woody.h"

int			main(int ac, char **av)
{
	void		*map;
	int			woody;
	long long	size;
	int			fd;

	map = 0;
	if (ac != 2)
		ft_print(2, "%s: One file path expected\n", av[0]);
	else if ((fd = open(av[1], O_RDONLY)) == -1 ||
	(size = lseek(fd, 0, SEEK_END)) == -1 ||
	(map = mmap(0, (size_t)size, PROT_READ, MAP_FILE | MAP_PRIVATE, fd, 0))
	== MAP_FAILED)
		ft_print(2, "%s: %s: %s\n", RED, av[0], EOC, av[1],
		strerror(errno));
	else if (*(unsigned int*)map != 0x464c457f)
	{
		ft_print(2, "%s: %s: Invalid format\n", av[0], av[1]);
		ft_print(2, "ELF64 file expected\n");
	}
	else if ((woody = open("woody", O_WRONLY | O_CREAT | O_TRUNC, 0755)) == -1)
		ft_print(2, "%s: woody: %s\n", av[0], strerror(errno));
	else if (printf("Encrypting %s (%lluo)\n", av[1], size))
		encrypt_data(map, (size_t)size, woody);
	return (0);
}
