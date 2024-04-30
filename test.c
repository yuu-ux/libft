#include <stdio.h>
#include <unistd.h>

int ft_max(int n, int num)
{
	if (n < num)
        return num;
    else
    	return n;
}

int main(void)
{
    int (*p_func)(int, int);
    p_func = ft_max;
    printf("%d\n", p_func(3,5));
	printf("%d\n", ft_max(3,5));
    return 0;
}