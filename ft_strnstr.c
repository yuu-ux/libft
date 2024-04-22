/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:47:28 by yehara            #+#    #+#             */
/*   Updated: 2024/04/22 23:17:21 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
    
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[j])
		{
			while (needle[j] != '\0')
			{
               	j = 0;
                if (haystack[i] == needle[j])
                {
					i++;
                    j++;	
                }
			}
			return ((char *)&(haystack[i]));
		}
		i++;
	}
	return (NULL);
}
int main(void)
{
    char *s1 = "abfaefafaebcfc";
    char *s2 = "bc";
    size_t n = 15;

    printf("%s\n", strnstr(s1, s2, n));
    printf("%s\n", ft_strnstr(s1, s2, n));
	return 0;
}
