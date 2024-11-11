/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:08:52 by sellyani          #+#    #+#             */
/*   Updated: 2024/11/11 15:54:59 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
	
	}	return (ft_strdup(""));
	slen = ft_strlen(&s[start]);
	if (len > slen)
	{
		len = slen;
	}
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (0);
	ft_strlcpy(new, &s[start], len + 1);
	return (new);
}
int main(){
	char s[]="said";
	char *result;
	result = ft_substr(s,2,4);
	
	printf("%s\n",result);
}