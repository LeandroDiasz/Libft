/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 23:36:16 by root              #+#    #+#             */
/*   Updated: 2024/07/14 00:51:33 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_ptr;
	
	tmp_ptr = (unsigned char *)b;
	while (len > 0)
	{
		*(tmp_ptr++) = (unsigned char)c;
		len --;
	}
	return(b);
}