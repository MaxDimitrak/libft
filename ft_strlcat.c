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

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	j = dest_length;
	i = 0;
	if (dest_length < n - 1 && n > 0)
	{
		while (src[i] && dest_length + i < (n - 1))
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
	}
	if (dest_length >= n)
		dest_length = n;
	return (dest_length + src_length);
}
