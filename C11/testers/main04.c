#include <stdio.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int));

int ft_f(int a, int b)
{
    return (a - b);
}

int main(void)
{
    int tab1[] = {0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tab2[] = {9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int tab3[] = {9, 2, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    printf("%d\n", ft_is_sort(tab1, 11, &ft_f));
    printf("%d\n", ft_is_sort(tab2, 11, &ft_f));
    printf("%d\n", ft_is_sort(tab3, 11, &ft_f));
}