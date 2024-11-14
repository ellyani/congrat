/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:06:30 by sellyani          #+#    #+#             */
/*   Updated: 2024/11/09 17:25:45 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
// void del(void *content){
	
// 	free(content);
// }
// void aff(void *c){
// 	printf("\033[0;35m%s\n",c);
	
// }
// void *ft_result(void *content){
// 	char *jdida = malloc(ft_strlen(content) + 6);// -jdida
// 	if (!jdida)
// 		return 0;
// 	sprintf(jdida,"%s-jdida\n",content);
// 	return jdida;
// }

// int main(){
// 	t_list *new1 = ft_lstnew(ft_strdup("said"));
// 	t_list *new2 = ft_lstnew(ft_strdup("hiba"));
// 	t_list *new3 = ft_lstnew(ft_strdup("hamid"));
// 	t_list *new4 = ft_lstnew(ft_strdup("mweyam"));
// 	t_list *new5 = ft_lstnew(ft_strdup("siham"));
	
// 	t_list *new6 = ft_lstnew(ft_strdup("salmaa")); //front
// 	t_list *new7 = ft_lstnew(ft_strdup("hamza")); //back
	
// 	new1->next =new2;
// 	new2->next =new3;
// 	new3->next =new4;
// 	new4->next =new5;
	
// 	ft_lstadd_front(&new1,new6);
// 	ft_lstadd_back(&new5,new7);

// 	//ft_lstdelone(new3,del); //delone
//  //clear
// //ft_lstiter(new1,aff); //iter
// 	//aff(ft_lstlast(new1)->content);
// 	//printf("%d\n",ft_lstsize(new1)); 
// 	t_list *result = ft_lstmap(new1,ft_result,del);
// 	t_list *t = result;

// 	while (t){
// 		printf("%s\n",t->content);
// 		t = t->next;
// 	}
// 	ft_lstclear(&new1,del);
// 	ft_lstclear(&result,del);
// // new3->next = NULL;	
// // if (new1){
// // 	while (new1){
// // 		printf("%s\n",new1->content);
// // 		new1 = new1 -> next;
// // 	}
// // }
// // else{
// // 	printf("\033[0;31mmemoire clear ...!");
// // }

// }

