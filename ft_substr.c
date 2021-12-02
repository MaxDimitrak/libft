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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ns;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0' && i != start)
		i++;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	if (s[i] == '\0')
	{
		ns = (char *)malloc(1);
		*ns = '\0';
		return (ns);
	}
	ns = (char *)malloc(sizeof(char) * (len + 1));
	if (!ns)
		return (NULL);
	while (len--)
		ns[j++] = s[i++];
	ns[j] = '\0';
	return (ns);
}
