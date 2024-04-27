/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:47:28 by yehara            #+#    #+#             */
/*   Updated: 2024/04/27 17:44:05 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (haystack == NULL || needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while ((needle[j] != '\0')
				&& (haystack[i + j] == needle[j]) && (i + j < len))
			{
				j++;
				if (needle[j] == '\0')
				{
					return ((char *)&haystack[i]);
				}
			}
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *str = "libft-test-tokyo"; //16文字
// 	int	len = strlen(str); //len = 16j

// 	for (int i = 0; i < len; i++)
// 	{
// 		printf("%d回目のループ%s %s\n",i, ft_strnstr(str, "", i), strnstr(str, "", i));
// 		printf("%d回目のループ%s %s\n",i, ft_strnstr(str, "libft-test-tokyo", i), strnstr(str, "libft-test-tokyo", i));
// 		printf("%d回目のループ%s %s\n",i, ft_strnstr(str, "libft", i), strnstr(str, "libft", i));
// 		printf("%d回目のループ%s %s\n",i, ft_strnstr(str, "test", i), strnstr(str, "test", i));
// 		printf("%d回目のループ%s %s\n",i, ft_strnstr(str, "tokyo", i), strnstr(str, "tokyo", i));
// 		printf("%d回目のループ%s %s\n",i, ft_strnstr(str, "libft~", i), strnstr(str, "libft~", i));
// 		printf("%d回目のループ%s %s\n",i, ft_strnstr(str, "z", i), strnstr(str, "z", i));
// 	}
// 	return (0);
// }
