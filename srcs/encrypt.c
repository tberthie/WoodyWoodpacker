/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   encrypt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:35:27 by tberthie          #+#    #+#             */
/*   Updated: 2017/11/08 15:37:18 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "woody.h"

void		encrypt_data(void *map, size_t size, int woody)
{
	unsigned char	*data;
	unsigned long	key;

	data = (unsigned char*)map;
	key = (unsigned long)map;

//	char *args[3] = {"/usr/bin/gcc", "test.c", 0};
//	syscall(SYS_execve, "/usr/bin/gcc", args, 0);

	printf("\x1b[32mWoody file encrypted\x1b[0m\n");
	printf("\x1b[33mKey_value: %lX\x1b[0m\n", key);
}
