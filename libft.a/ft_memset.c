/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:06:54 by sellyani          #+#    #+#             */
/*   Updated: 2024/11/12 14:26:07 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*led;

	led = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		led[i] = (unsigned char)c;
		i++;
	}
	return (led);
}
// int main()
// {
// 	int a[] = {464684685, 466467564, 64646864};

// 	ft_memset(&a[0],0,4);
// 	ft_memset(&a[0],77,1);



		


		
	
	

	
	
// 	printf("%d / %d / %d\n", a[0], a[1], a[2]); // -68455488 // int max // 77
	
// }