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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*buf_src1;
	unsigned char	*buf_src2;
	size_t			i;

	buf_src1 = (unsigned char *)s1;
	buf_src2 = (unsigned char *)s2;
	i = 0;
	while ((buf_src1[i] || buf_src2[i]) && i < n)
	{
		if (buf_src1[i] != buf_src2[i])
			return (buf_src1[i] - buf_src2[i]);
		i++;
	}
	return (0);
}
