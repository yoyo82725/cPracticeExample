#include <stdio.h>
#include <stdlib.h>
int main(void)
{
     int a;
     
     printf("Input a HEX:");
     scanf("%x",&a);
     // %x %X ���J���Ʀr���Q���i��Ʀr 
     printf("a=%x, %d, %o\n",a,a,a);
     printf("Input a OCT:");
     scanf("%o",&a);
     printf("Oct:%o, Hex:%x, a=%d\n",a,a,a);
     
     system("pause");
     return 0;
}



