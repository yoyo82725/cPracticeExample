#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a;
    
    printf("Input a hexdeciaml number:");
    scanf("%X",&a);
    // %X %x ��ܿ�J����Ƭ��Q���i���� 
    printf("a=%x, %X, %d\n",a,a,a);
    printf("Please input an octal number:");
    scanf("%o",&a);
    printf("a=%o, %x, %d\n",a,a,a);
    // %o ��ܿ�J����Ƭ��K�i���� 
    system("pause");
    return 0;
}

    
