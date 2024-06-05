/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:28:47 by pbencze           #+#    #+#             */
/*   Updated: 2024/01/31 12:16:08 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
	struct s_list	*previous;
}					t_list;

long long	ft_atoi(const char *nptr);
int			ft_strlen(const char *s);
char		*ft_substr(char const *s, int start, int len);
char		**ft_split(char const *s, char c);
int			ft_isdigit(int c);
char		*ft_strdup(const char *s);
t_list		*ft_lstnew(int content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list **lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(int));
void		ft_lstclear(t_list **lst);
void		ft_lstiter(t_list *lst, void (*f)(int));
t_list		*ft_lstmap(t_list *lst, int (*f)(int));

#endif
