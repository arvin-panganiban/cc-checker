#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Input credit card number
    long cc_num = get_long("Number: ");

    //Initialize variables
    long num = cc_num;
    int digits = 0, sum = 0, num1 = 0, num2;

    //Dismantle CC Number
    while(cc_num > 0)
    {
        num1 = cc_num % 10;

        //Determine if the digit needs to be multiplied by 2
        if(digits % 2 == 0)
        {
            sum += num1;
        }
        else
        {
            //If num2 >= 10, take the sum of the digits (ex: 13 ==> 1 + 3 = 4)
            num2 = 2 * num1;
            sum += (num2 / 10) + (num2 % 10);
        }

        cc_num /= 10;
        //Counts number of digits in CC Number
        digits++;
    }

    //Check sum if CC Number is valid
    if ((sum % 10) == 0)
    {
        //Picks out the first two digits
        while (num >= 100)
        {
            num /= 10;
        }
        //Compare digits and the first two digits to determine CC Company
        if (digits == 15 && (num == 34 || num == 37))
        {
            printf("AMEX\n");
        }
        else if (digits == 16 && (num >= 51 && num <= 55))
        {
            printf("MASTERCARD\n");
        }
        else if ((digits >= 13 && digits <= 16) && (num / 10) == 4)
        {
            printf("VISA\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

}
