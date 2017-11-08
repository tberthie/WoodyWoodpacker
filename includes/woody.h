/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   woody.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:20:36 by tberthie          #+#    #+#             */
/*   Updated: 2017/11/08 02:22:56 by tberthie         ###   ########.fr       */
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

void		encrypt_data(void *map, size_t size, int woody);

#endif
