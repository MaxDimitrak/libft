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

char	*ft_strjoin(char const *s1, char const *s2)
{	
	size_t	i;
	size_t	j;
	char	*new_split_str;
	size_t	length;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	length = ft_strlen(s1) + ft_strlen(s2);
	new_split_str = (char *)malloc(sizeof(*s1) * (length + 1));
	if (!new_split_str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		new_split_str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		new_split_str[j++] = s2[i++];
	new_split_str[j] = '\0';
	return (new_split_str);
}
