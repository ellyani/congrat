/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:08:22 by sellyani          #+#    #+#             */
/*   Updated: 2024/10/30 15:45:04 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*result;

	i = 0;
	len = ft_strlen(s);
	result = malloc (len + 1);
	if (!s || !f)
		return (NULL);
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = f (i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}

// char	to_upper(unsigned int index, char c) {
// 	if (c >= 'a' && c <= 'z')
// 	{
// 		return (c - 3);
// 	}
// 	return (c);
// }
