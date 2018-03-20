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

void		encrypt_data(unsigned char *map, size_t size, int woody)
{
	unsigned int	i;
	unsigned char	crypted;
	char		*key;

	i = 0;
	key = get_key();
	while (i < size)
	{
		crypted = (map[i] + key[i % ft_strlen(key)]) % 256;
		write(woody, &crypted, 1);
		i++;
	}
	ft_print(1, "\nEncryption finished\n");
	free(key);
}
