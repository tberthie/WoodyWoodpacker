/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   woody.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:20:36 by tberthie          #+#    #+#             */
/*   Updated: 2017/11/08 15:12:04 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOODY_H
# define WOODY_H

# include "libft.h"

# include <fcntl.h>
# include <errno.h>
# include <sys/mman.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/syscall.h>

# define KEY_LEN	256
# define BASE		"0123456789ABCDEF"

void		encrypt_data(void *map, size_t size, int woody);
char		*get_key(void);

#endif
