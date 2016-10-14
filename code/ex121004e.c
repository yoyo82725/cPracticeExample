#include <stdio.h>
#include <stdlib.h>
int main(void)
{// 浮點數型態: float double 
    float f, e=1.23456789012345678;
    double d=1.23456789012345678;
    printf("sizeof(float)=%d\n",sizeof(float));
    printf("sizeof(double)=%d\n",sizeof(double));
    printf("f=%f\n",f);
    printf("e=%.20f\n",e);
    printf("d=%.20f\n",d);
    // %e %E 表示將浮點數以科學記號顯示
    //  e=> exponential 指數的 
    e=1234567.89012345;
    d=1234500000000.123456;
    printf("e=%e\n",e);
    printf("d=%.20E\n",d);
    f=123.4567E+10;
    printf("f=%.10E\n",f);
    // 浮點數常數 
    printf("float: %.20f\n",0.1234567890123456789F);
    // 浮點數尾端的F表示該浮點數為float型態 
    printf("double: %.20f\n",0.1234567890123456789);
    // 若浮點數未指定型態，預設為double型態 
    printf("sizeof(1.23)=%d\n",sizeof(1.23));
    printf("sizeof(1.23f)=%d\n",sizeof(1.23f));
    // http://211.21.140.4/sju/upload.htm
    // 下載: http://211.21.140.4/sju/download.htm 
//  作業: 第四章作業 第6,7,10題手寫在A4的活頁紙或空白紙上
//  助教時間: 星期二 四  6:00~9:00PM  E524A 
    system("pause");
    return 0;
}
 
