#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a=1000;
    printf("a=%d\n",a);
    printf("a=%x, %X\n", a, a);
    // %x %X ��ܾ�ƪ��Q���i��(hexdecimal)��� 
    printf("a=%o\n",a);
    // %o ��ܾ�ƪ��K�i��(octal)��� 
    printf("a=%O\n",a);
    // %O ����ܤj�g�r��O
    a=1*16*16*16+2*16*16+3*16+4;
    printf("1. a=%x, %X\n", a, a);
    // �Q���i��`�� 0xnnn  0Xnnn   n:0~9 A~F 
    a=0x1234;
    printf("2. a=%x, %X\n", a, a);
    a=0X1234aB;
    printf("3. a=%x, %X\n", a, a);
    // �K�i��`��  0nnnn   n: 0~7 
    a=01234;
    printf("a=%o, �Q�i��:%d\n",a,a);
     
    system("pause");
    return 0;
}



