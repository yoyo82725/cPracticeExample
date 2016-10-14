#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a;
    
    printf("Input a hexdeciaml number:");
    scanf("%X",&a);
    // %X %x 表示輸入的資料為十六進位整數 
    printf("a=%x, %X, %d\n",a,a,a);
    printf("Please input an octal number:");
    scanf("%o",&a);
    printf("a=%o, %x, %d\n",a,a,a);
    // %o 表示輸入的資料為八進位整數 
    system("pause");
    return 0;
}

    
