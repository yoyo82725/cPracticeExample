// ぃ秈ボ猭 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
     int a=1000; // 1000->秈盽计 
     
     printf("a=%d\n",a);
     printf("hex: a=%x, a=%X\n",a,a);
     // %x %X 陪ボ俱计せ秈(hexadecimal)计 
     printf("Oct: a=%o\n",a);
     // %o 陪ボ俱计秈(octal)计 
     // せ秈盽计
     a=0X1234; // 0x 0X ボせ秈盽计 
     printf("a=%d, hex:%x, oct:%o\n",a,a,a);
     // 秈盽计 
     a=01234; // 俱计玡0ボ秈 
     printf("a=%d, hex:%x, oct:%o\n",a,a,a);
     // a=0xABCG; ERROR! せ秈程计f 
     printf("a=%o\n",a); 
     system("pause");
     return 0;
}
 
