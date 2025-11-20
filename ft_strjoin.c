/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpouillo <mpouillo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:01:59 by mpouillo          #+#    #+#             */
/*   Updated: 2025/11/11 15:58:52 by mpouillo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	buf;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	buf = len_s1 + len_s2 + 1;
	new_s = malloc(sizeof(char) * buf);
	if (!new_s)
		return (NULL);
	ft_strlcpy(new_s, s1, len_s1 + 1);
	ft_strlcpy(new_s + len_s1, s2, len_s2 + 1);
	new_s[buf] = '\0';
	return (new_s);
}
