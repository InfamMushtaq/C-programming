#include <stdio.h>
int main()
{
    int num, reverse;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        reverse = num % 10;
         printf("%d", reverse);
        num= num/10;
    }
    return 0;
}
