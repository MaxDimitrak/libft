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

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr_s;
	char	sym;

	ptr_s = (char *)s + ft_strlen(s);
	sym = (char)c;
	while (ptr_s >= s)
	{
		if (*ptr_s == sym)
			return (ptr_s);
		ptr_s--;
	}
	return (NULL);
}
