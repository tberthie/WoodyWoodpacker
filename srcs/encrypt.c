/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   encrypt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:35:27 by tberthie          #+#    #+#             */
/*   Updated: 2017/11/08 02:27:35 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "woody.h"
#include <stdio.h>

void		encrypt_data(void *map, size_t size, int woody)
{
	unsigned char	*data;

	data = (unsigned char*)map;
	printf("Data set at 0x%x - %zdo\n", (unsigned int)map, size);
	write(woody, map, size);
}
