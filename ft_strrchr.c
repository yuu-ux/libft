/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:38:18 by yehara            #+#    #+#             */
/*   Updated: 2024/05/05 23:03:06 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len > 0)
	{
		if (s[len] == (char)c)
			return ((char *)&(s[len]));
		len--;
	}
	if (s[0] == (char)c)
		return ((char *)&(s[0]));
	return (NULL);
}

// int	main(void)
// {
// 	const char *str = "hello";
// 	int c = 1;
// 	char *result = ft_strrchr(str, c);

// 	if (result != NULL)
// 	{
// 		printf("%d\n", strrchr(str, c));
// 		printf("%d\n", ft_strrchr(str, c));
// 	} else {
// 		printf("null");
// 	}
// 	return (0);
// }