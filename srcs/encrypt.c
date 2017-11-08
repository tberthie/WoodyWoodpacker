/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   encrypt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:35:27 by tberthie          #+#    #+#             */
/*   Updated: 2017/11/08 03:37:47 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "woody.h"
#include <stdio.h>

void		encrypt_data(void *map, size_t size, int woody)
{
	unsigned char	*data;

	data = (unsigned char*)map;
	printf("\x1b[32mWoody file encrypted\x1b[0m\n");
	printf("\x1b[33mKey_value: %u\x1b[0m\n", rand());
}
