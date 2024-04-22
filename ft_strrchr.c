/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:38:18 by yehara            #+#    #+#             */
/*   Updated: 2024/04/22 19:52:40 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned long int	ft_strlen(const char *str)
{
	int					i;
	unsigned long int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

//後ろから探す
char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	search;

	len = 0;
	search = (char)c;
	len = ft_strlen(s);
	while (s[--len] != search)
	{
		if (s[len] == '\0')
		{
			return (NULL);
		}
	}
	return ((char *)&s[len]);
}

// int	main(void)
// {
// 	const char *str = "Hello WorlH";
// 	int c = 'z';
// 	char *src;
// 	char *rsrc;

// 	src = strrchr(str, c);
// 	rsrc = ft_strrchr(str, c);

// 	printf("%s\n", src);
// 	printf("%s\n", rsrc);
// 	return (0);
// }