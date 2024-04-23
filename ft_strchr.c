/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:38:18 by yehara            #+#    #+#             */
/*   Updated: 2024/04/23 14:42:01 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	search;

	i = 0;
	search = (char)c;
	while (s[i] != search)
	{
		if (s[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return ((char *)&s[i]);
}

// int	main(void)
// {
// 	const char *str = "Hello World";
// 	int c = 'W';
// 	// char *src;
// 	char *ft_src;

// 	// src = strchr(str, c);
// 	ft_src = ft_strchr(str, c);

// 	// printf("%s\n", src);
// 	printf("%s\n", ft_src);
// 	return (0);
// }