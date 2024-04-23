/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:47:28 by yehara            #+#    #+#             */
/*   Updated: 2024/04/23 14:07:00 by yehara           ###   ########.fr       */
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
			while (needle[j] != '\0'
				&& haystack[i + j] == needle[j] && (i + j) < len)
			{
				j++;
				if (needle[i] == '\0')
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
// 	char	*s1;
// 	char	*s2;
// 	size_t	n;

// 	s1 = "a";
// 	s2 = "bc";
// 	n = 15;
// 	printf("%s\n", strnstr(s1, s2, n));
// 	printf("%s\n", ft_strnstr(s1, s2, n));
// 	return (0);
// }
