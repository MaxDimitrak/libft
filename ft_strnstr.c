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

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;
	char	*buf_big;

	if (!*little)
		return ((char *)big);
	if (ft_strlen(big) < ft_strlen(little))
		return (NULL);
	while (*big && len)
	{
		if (*big == *little)
		{
			buf_big = (char *)big;
			j = 0;
			while (big[j] == little[j] && len >= ft_strlen(little))
			{
				if (j == ft_strlen(little) - 1)
					return (buf_big);
				j++;
			}
		}
		len--;
		big++;
	}
	return (NULL);
}
