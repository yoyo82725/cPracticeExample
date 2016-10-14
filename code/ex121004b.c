#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a=1000;
    printf("a=%d\n",a);
    printf("a=%x, %X\n", a, a);
    // %x %X 陪ボ俱计せ秈(hexdecimal)ボ 
    printf("a=%o\n",a);
    // %o 陪ボ俱计秈(octal)ボ 
    printf("a=%O\n",a);
    // %O 度陪ボ糶ダO
    a=1*16*16*16+2*16*16+3*16+4;
    printf("1. a=%x, %X\n", a, a);
    // せ秈盽计 0xnnn  0Xnnn   n:0~9 A~F 
    a=0x1234;
    printf("2. a=%x, %X\n", a, a);
    a=0X1234aB;
    printf("3. a=%x, %X\n", a, a);
    // 秈盽计  0nnnn   n: 0~7 
    a=01234;
    printf("a=%o, 秈:%d\n",a,a);
     
    system("pause");
    return 0;
}



