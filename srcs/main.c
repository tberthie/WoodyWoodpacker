/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:20:09 by tberthie          #+#    #+#             */
/*   Updated: 2017/11/08 02:23:18 by tberthie         ###   ########.fr       */
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
		ft_print(2, "%s%s%s: One file path expected\n", RED, av[0], EOC);
	else if ((fd = open(av[1], O_RDONLY)) == -1 ||
	(size = lseek(fd, 0, SEEK_END)) == -1 ||
	(map = mmap(0, (size_t)size, PROT_READ, MAP_FILE | MAP_PRIVATE, fd, 0))
	== MAP_FAILED)
		ft_print(2, "%s%s%s: %s: %s\n", RED, av[0], EOC, av[1],
		strerror(errno));
	else if (*(unsigned int*)map != 0x464c457f)
	{
		ft_print(2, "%s%s%s: %s: Invalid format\n", RED, av[0], EOC, av[1]);
		ft_print(2, "%sELF64 file expected%s\n", RED, EOC);
	}
	else if ((woody = open("woody", O_WRONLY | O_CREAT | O_TRUNC, 0755)) == -1)
		ft_print(2, "%s%s%s: woody: %s\n", RED, av[0], EOC, strerror(errno));
	else
		encrypt_data(map, (size_t)size, woody);
	return (0);
}
