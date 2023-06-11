#include <unistd.h>

void    ft_ft(int *nbr)
{
    //*nbr = 42;
    int vNbr = *nbr;

    char c;
    char *pC = &c;

    c = (vNbr / 10) + 48;    
    write(1, pC, 1);
    c = (vNbr % 10) + 48;   
    write(1, pC, 1);
}

void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
    int v_nbr = *********nbr;
    char c;
    char *pC = &c;

    c = (v_nbr / 10) + 48;    
    write(1, pC, 1);
    c = (v_nbr % 10) + 48;   
    write(1, pC, 1);
}

void    ft_swap(int *a, int *b)
{
    int temp;
    int *p_temp = &temp;

    *p_temp = *a;
    *a = *b;
    *b = *p_temp;

    char c;
    char *p_c = &c;

    c = (*a % 10) + 48;
    write(1, p_c, 1);
    c = (*b % 10) + 48;
    write(1, p_c, 1);
}

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    char c;
    
    *div = a / b;
    *mod = a % b;
    write(1, "The quotient of ", 17);
    c = a + 48;
    write(1, &c, 1);
    write(1, " and ", 5);
    c = b + 48;
    write(1, &c, 1);
    write(1, " is: ", 5);
    c = *div + 48;
    write(1, &c, 1);
    write(1, ", ", 2);
    c = *mod + 48;
    write(1, &c, 1);
}

void    ft_ultimate_div_mod(int *a, int *b)
{
    int quotient;
    int remainder;
    int num1;
    int num2;
    char c;

    quotient = *a / *b;
    remainder = *a % *b;
    *a = quotient;
    *b = remainder;
    c = *a + 48;
    write(1, &c, 1);
    write(1, " ", 1);
    c = *b + 48;
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    char addr_str;
    
    addr_str = *str;
    write(1, &addr_str, 1);
}

int ft_strlen(char *str)
{
    int count;
    
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return(count);   
}

void    ft_rev_int_tab(int *tab, int size)
{
    int count;
    int rev_count;
    int rev_tab[size];
//  For test    char c;
    
    count = 0;
    rev_count = size - 1;
    while (count != size)
    {
        rev_tab[count] = tab[rev_count];
/* For test       
        c = rev_tab[count] + 48;
        write(1, &c, 1);
        write(1, " ", 1);
*/
        count++;
        rev_count--;
    }
}

void    ft_sort_int_tab(int *tab, int size)
{
    int temp;
    int *p_temp;
    int count;

    p_temp = &temp;
    count = 0;
    while (count != size)
    {
        if (tab[count] > tab[count + 1])
        {
            *p_temp = tab[count];
            tab[count] = tab[count + 1];
            tab[count + 1] = *p_temp;
            count = 0;
        }
        else
            count++;
    }
//  For test case
/*
    char c;

    count = 0;
    while (count != size)
    {
        c = tab[count] + 48;
        write(1, &c, 1);
        write(1, " ", 1);
        count++;
    }
*/
}

int main()
{
// Test ft_ultimate_ft
/*
    int number;
    int *p1_nbr;
    int **p2_nbr;
    int ***p3_nbr;
    int ****p4_nbr;
    int *****p5_nbr;
    int ******p6_nbr;
    int *******p7_nbr;
    int ********p8_nbr;
    int *********p9_nbr;

    p1_nbr = &number;
    p2_nbr = &p1_nbr;
    p3_nbr = &p2_nbr;
    p4_nbr = &p3_nbr;
    p5_nbr = &p4_nbr;
    p6_nbr = &p5_nbr;
    p7_nbr = &p6_nbr;
    p8_nbr = &p7_nbr;
    p9_nbr = &p8_nbr;
    ft_ultimate_ft(p9_nbr);
*/
// Test ft_swap
/*
    int num1;
    int num2;

    num1 = 7;
    num2 = 3;
    int *p_num1 = &num1;
    int *p_num2 = &num2;

    ft_swap(p_num1, p_num2);
*/
// Test ft_div_mod
/* 
    int num1;
    int num2;
    int quotient;
    int numerator;
    int *p_quotient = &quotient;
    int *p_numerator = &numerator;

    num1 = 7;
    num2 = 3;

    ft_div_mod(num1, num2, p_quotient, p_numerator);
*/
// Test ft_ultimate_div_mod
/*
    int num1;
    int num2;
    int *p_num1;
    int *p_num2;

    num1 = 11;
    num2 = 3;
    p_num1 = &num1;
    p_num2 = &num2;
    ft_ultimate_div_mod(p_num1, p_num2);
*/ 
// Test ft_putstr
/*
    ft_putstr("d");
*/
// Test ft_strlen
/*
    int result = 0;
    char testText[8] = {'b', 'l', 'a', 'h', 'b', 'l', 'a', 'h'};
    result = ft_strlen(testText);
    char c;
    c = result + 48;
    write(1, &c, 1);
*/
// Test ft_rev_int_ta
/*
    int testNumSet[3];

    testNumSet[0] = 3;
    testNumSet[1] = 4;
    testNumSet[2] = 5;
    ft_rev_int_tab(testNumSet, 3);
*/
// Test ft_sort_int_tab
/*
    int testNumSet[6];

    testNumSet[0] = 7;
    testNumSet[1] = 2;
    testNumSet[2] = 3;
    testNumSet[3] = 5;
    testNumSet[4] = 1;
    testNumSet[5] = 4;
    ft_sort_int_tab(testNumSet, 6);
*/
    return(0);
}