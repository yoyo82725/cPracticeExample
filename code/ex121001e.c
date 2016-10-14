#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    // 浮點數: float, double 
    float a;
    double b;
    printf("sizeof(a)=%d, sizeof(b)=%d\n",sizeof(a),
            sizeof(b));
    a=1.234567890123456f; // f表float浮點常數 
    b=1.234567890123456789; // double常數
    printf("a=%.20f\n",a);
    printf("b=%.20lf\n",b);
    // %lf 顯示double型態的浮點數
    printf("b=%.20f\n",b); 
    a=1.23E10; // 表 1.23乘以10的10次方的科學記號表示法
    printf("a=%e\n",a);
    printf("a=%E\n",a);
    printf("a=%.2E\n",a); // 僅顯示2位小數 
    a=1234.5678e-12;
    printf("a=%e\n",a);
    printf("a=%.4e\n",a);
    printf("a=%.20f\n",a);
    // http://211.21.140.4/sju/upload.htm
    // 下載網址 
    // http://211.21.140.4/sju/download.htm 
    // 作業: 第四章作業 6, 7, 10
    // 助教時間: 星期二、四 6:00~9:00pm E524a 
    system("pause");
    return 0;
}

    
