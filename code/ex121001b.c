// ���P�i�쪺��ܪk 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
     int a=1000; // 1000->�Q�i��`�� 
     
     printf("a=%d\n",a);
     printf("hex: a=%x, a=%X\n",a,a);
     // %x %X ��ܾ�ƪ��Q���i��(hexadecimal)�ƭ� 
     printf("Oct: a=%o\n",a);
     // %o ��ܾ�ƪ��K�i��(octal)�ƭ� 
     // �Q���i��`��
     a=0X1234; // 0x 0X ��ܤQ���i��`�� 
     printf("a=%d, hex:%x, oct:%o\n",a,a,a);
     // �K�i��`�� 
     a=01234; // �b��ƫe�[0�Y��ܤK�i�� 
     printf("a=%d, hex:%x, oct:%o\n",a,a,a);
     // a=0xABCG; ERROR! �Q���i��̤j�Ʀr��f 
     printf("a=%o\n",a); 
     system("pause");
     return 0;
}
 
