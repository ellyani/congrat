/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:06:45 by sellyani          #+#    #+#             */
/*   Updated: 2024/11/09 18:02:09 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	counter;

	if (src == NULL && dst == NULL)
		return (NULL);
	counter = 0;
	while (counter < n)
	{
		*((unsigned char *)dst + counter) = *((unsigned char *)src + counter);
		counter++;
	}
	return (dst);
}

int main(){
	
	char s1[]="";
	char s2[]="";

	printf("%s\n",ft_memcpy(s1,s2,4));
	printf("%s\n",memcpy(s1,s2,4));
}