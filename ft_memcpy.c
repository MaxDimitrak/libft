/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bghost <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:17:37 by bghost            #+#    #+#             */
/*   Updated: 2021/10/04 17:17:39 by bghost           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*buf_dest;
	unsigned char	*buf_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	buf_dest = (unsigned char *)dest;
	buf_src = (unsigned char *)src;
	i = 0;
	while (n > 0)
	{
		buf_dest[i] = buf_src[i];
		i++;
		n--;
	}
	return (buf_dest);
}
