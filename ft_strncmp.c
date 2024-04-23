/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:52:59 by yehara            #+#    #+#             */
/*   Updated: 2024/04/23 14:06:59 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

// int main(void)
// {
//     char str[] = "ABC";
//     printf("ABC: ABD   = %d\n", strncmp(str, "ABD", 3));
//     printf("ABC: ABC   = %d\n", strncmp(str, "ABC", 2));
//     printf("ABC: AAA   = %d\n", strncmp(str, "AAA", 2));
//     printf("ABC: ABCD  = %d\n", strncmp(str, "ABCD", 2));
//     printf("ABC: AB    = %d\n", strncmp(str, "AB", 2));
//     printf("ABC: B     = %d\n", strncmp(str, "B", 2));
//     printf("ABC: A     = %d\n", strncmp(str, "A", 2));

//     for (int i = 0; i < 50; i++)
//     	printf("-");
//     printf("\n");

//     printf("ABC: ABD   = %d\n", ft_strncmp(str, "ABD", 3));
//     printf("ABC: ABC   = %d\n", ft_strncmp(str, "ABC", 2));
//     printf("ABC: AAA   = %d\n", ft_strncmp(str, "AAA", 2));
//     printf("ABC: ABCD  = %d\n", ft_strncmp(str, "ABCD", 2));
//     printf("ABC: AB    = %d\n", ft_strncmp(str, "AB", 2));
//     printf("ABC: B     = %d\n", ft_strncmp(str, "B", 2));
//     printf("ABC: A     = %d\n", ft_strncmp(str, "A", 2));

//     return (0);
// }
