/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:05:12 by sellyani          #+#    #+#             */
/*   Updated: 2024/11/09 17:51:37 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	if ((int)count < 0 || (int)size < 0)
	{
		return (NULL);
	}
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	
	ft_bzero (ptr, size * count);
	return (ptr);
}
// int main(){
// 	//int *ptr,i;
// 	//size_t count = -1;
// 	printf("%p\n", ft_calloc(-5, -10));
// 	printf("%p\n", calloc(-5, -10));
// 	// //if (!ptr) return 0;
// 	// //while (i < count)
// 	// {
// 	// 	printf("%d\n",ptr[i]);
// 	// 	i++;
// 	// }
	
// }