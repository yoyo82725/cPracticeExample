#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b;
    printf("未初始化: a=%d, b=%d\n",a,b);
    printf("Please input two numbers:");
    scanf("%d , %d",&a,&b);
    // 若輸入格式中有包含空格, 則輸入資料中可以用空格 
    // 做資料的間隔,但若有非空格的字元,則輸入的資料必
    // 須包含該字元否則會導致輸入錯誤的資料
    // 例: 輸入的資料為 nn-dddd  n為十六進位 d為八進位
    // 則scanf的格式字串應為何?
    printf("a=%d, b=%d\n",a,b);
    printf("Please input xx-oooo:");
    scanf("%2x - %4o",&a,&b);
    // 格式字串中的空格可以將輸入資料中減號前後的空格
    // 消耗掉
    // http://211.21.140.4/sju/upload.htm 
    printf("Your input %02X-%04o\n",a,b);
    system("pause");
    return 0;
}

    


