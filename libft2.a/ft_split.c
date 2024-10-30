/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:48:08 by sellyani          #+#    #+#             */
/*   Updated: 2024/10/30 15:15:00 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size_(const char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (*str)
	{
		if (*str != c && j == 1)
		{
			j = 0;
			i++;
		}
		else if (*str == c && j == 0)
			j = 1;
		str++;
	}
	return (i);
}

char	*ft_m3yzo(const char *str, size_t n, size_t len)
{
	char	*s;
	int		i;

	i = 0;
	s = ft_calloc((len - n + 1), (sizeof(char)));
	while (n < len)
	{
		s[i] = str[n];
		i++;
		n++;
	}
	s[i] = '\0';
	return (s);
}

char	**ft_split(char const *s, char c)
{
	size_t		m;
	size_t		j;
	int			n;
	char		**src;

	m = -1;
	j = 0;
	n = -1;
	if (!s)
		return (0);
	src = ft_calloc((size_(s, c) + 1), sizeof(char *));
	if (!src)
		return (NULL);
	while (++m <= ft_strlen(s))
	{
		if (s[m] != c && n < 0)
			n = m;
		else if ((s[m] == c || m == ft_strlen(s)) && n >= 0)
		{
			src[j++] = ft_m3yzo(s, n, m);
			n = -1;
		}
	}
	src[j] = 0;
	return (src);
}
