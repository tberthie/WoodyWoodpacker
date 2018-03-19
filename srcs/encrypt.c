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
	char	*key;

	key = get_key();
	// do the encryption
	printf("\x1b[32mWoody file encrypted\x1b[0m\n");
	printf("\x1b[33mEncryption key: \n%s\x1b[0m\n", key);
	free(key);
}
