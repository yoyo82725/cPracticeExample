#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a,b;
    printf("請輸入第一個數：");
    scanf("%d",&a);
    printf("請輸入第二個數：");
    scanf("%d",&b);
    printf("a * b = %d\n",a*b); 
    system("pause");
    //或以下 
    printf("請輸入兩數，以空白隔開：");
    scanf("%d %d",&a,&b);
    printf("a * b = %d\n",a*b); 
    system("pause");
    return 0;
}
