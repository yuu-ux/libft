#include <ctype.h>
#include <stdio.h>

// 大文字であれば対応する大文字が返されてそれ以外であればそのまま返される
// 引数はunsigned charかEOFじゃなければならない

int ft_tolower(int c)
{
    if (!(c >= 'A' && c <= 'Z'))
    {
        return (c);
    }
    else
    {
        return (c + 32);
    }
}
int main(void)
{
    int c;
    int d;
    c = tolower('\0');
    d = ft_tolower('\0');
    printf("%c\n", c);
    printf("%c\n", d);
}