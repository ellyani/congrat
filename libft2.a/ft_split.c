/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:48:08 by sellyani          #+#    #+#             */
/*   Updated: 2024/11/11 17:31:21 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(const char *str, char c)
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

char	*ft_split1(const char *str, size_t debut_cpy, size_t len)
{
	char	*s;
	int		i;

	i = 0;
	s = ft_calloc((len - debut_cpy + 1), (sizeof(char)));
	if (!s)
		//free(s);
		//retrun ;
	while (debut_cpy < len)
	{
		s[i] = str[debut_cpy];
		i++;
		debut_cpy++;
	}
	s[i] = '\0';
	return (s);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	int			debut_cpy;
	char		**src;

	i = -1;
	j = 0;
	debut_cpy = -1;
	if (!s)
		return (0);
	src = ft_calloc((ft_count_words(s, c) + 1), sizeof(char *));
	if (!src)
		//ft_free(src);
		//return (NULL);
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && debut_cpy < 0)
			debut_cpy = i;
		else if ((s[i] == c || i == ft_strlen(s)) && debut_cpy >= 0)
		{
			src[j++] = ft_split1(s, debut_cpy, i);
			debut_cpy = -1;
		}
	}
	src[j] = 0;
	return (src);
}

void ft()
{
	system("LEAKS a.out");
}

int main(){
	char **result = ft_split("sdfghjkljhgfsdfghjhgf",' ');
	int i = 0;
	atexit(ft);
	while(result[i]){
		printf("%s\n",result[i]);
		free(result[i++]);
	}
	free(result);
	return (0);
}