#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

int main(void)
{
    t_stock_str *stock;
    char        *strs[5];

    strs[0] = "Hello";
    strs[1] = "how";
    strs[2] = "are";
    strs[3] = "you";
    strs[4] = "?";
    stock = ft_strs_to_tab(5, strs);
    ft_show_tab(stock);
}