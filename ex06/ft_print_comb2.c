#include<unistd.h>

void    write_nums(short n)
{
    char    c;
    int num_in_tens;
    int num_in_ones;
    
    if (n < 10) // check if nums[] passed-in is 1 digit
    {
        // translate int to char by adding 48 to it(48 => '0' in ascii)
        // Ex. num = 2 | char => 2 + 48 = 50 | => '2' in ascii
        c = n + 48;
        write(1, "0", 1);
        write(1, &c, 1);
        return;
    }
    num_in_tens = n / 10; // extract only the tens digit from input number
    num_in_ones = n % 10; // extract only the ones digit from input number
    c = num_in_tens + 48; // print out the first digit (tens)
    write(1, &c, 1);
    c = num_in_ones + 48; // print out the second digit (ones)
    write(1, &c, 1);
}
void    ft_print_comb2(void){
    short nums[2];
    
    nums[0] = 0;
    while (nums[0] < 99)
    {
        nums[1] = nums[0] + 1;
        while (nums[1] < 100)
        {
            write_nums(nums[0]);
            write(1, " ", 1);
            write_nums(nums[1]);
            if (nums[0] == 98 && nums[1] == 99)
                write(1, ".\n", 2);
            else
                write(1, ", ", 2);
            nums[1]++;
        }
        nums[0]++;
    }
}

int main()
{
    ft_print_comb2();
    return 0;
}
