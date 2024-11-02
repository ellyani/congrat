/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:06:00 by sellyani          #+#    #+#             */
/*   Updated: 2024/11/02 18:33:18 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **head, void (*del)(void *))
{
	t_list	*temp;

	if (head == NULL || del == NULL)
		return ;
	while (*head)
	{
		temp = (*head)->next;
		ft_lstdelone (*head, del);
		*head = temp;
	}
}
int del(t_list *s,int n){
	t_list *head;
	if (n == head->next){
		
	}
}
