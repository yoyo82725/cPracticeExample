#include <stdio.h>
#include <stdlib.h>
int main(void)
{
     int a,b;

     printf("Input a number:");
     scanf("%2x - %4d",&a,&b);
     //若有指定欄位寬度，最多只會讀取指定的個數
     //一個格式中，若有兩個要輸入的資料,格式中的空格
     //可將輸入中多餘的空格消耗掉 
     printf("a=%d,hex:%x\n",a,a);
     printf("b=%d,hex:%x\n",b,b);
     system("pause");
     return 0;
}
