#include <stdio.h>
#include <stdlib.h>
int main(void)
{
     int a;
     
     printf("Input a HEX:");
     scanf("%x",&a);
     // %x %X 表輸入的數字為十六進位數字 
     printf("a=%x, %d, %o\n",a,a,a);
     printf("Input a OCT:");
     scanf("%o",&a);
     printf("Oct:%o, Hex:%x, a=%d\n",a,a,a);
     
     system("pause");
     return 0;
}



