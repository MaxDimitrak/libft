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

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*buf_src1;
	unsigned char	*buf_src2;

	buf_src1 = (unsigned char *)s1;
	buf_src2 = (unsigned char *)s2;
	while (n--)
	{
		if (*buf_src1 != *buf_src2)
			return (*buf_src1 - *buf_src2);
		buf_src1++;
		buf_src2++;
	}	
	return (0);
}
