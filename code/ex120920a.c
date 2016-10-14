#include <stdio.h>
#include <stdlib.h>
int main(void)
{// printf(Αて﹃,把计1,把计2,....); 
    printf("虫基   计秖     羆基\n");
    printf("====   ====    ======\n");
    printf(" %d     %d       %d\n",12,11,12*11);
    printf(" $%d    %d       %d\n",5,6,5*6);
    // Αてじ
    //   %d       陪ボ俱计戈 
    printf("虫基   计秖     羆基\n");
    printf("====   ====    ======\n");
    printf("$%3d   %4d    %6d\n",12,11,12*11);
    printf("$%3d   %4d    %6d\n",5,6,5*6);
    // %nd   n 计计(逆糴) 
    printf("$%03d   %04d    %06d\n",5,6,5*6);
    // %0nd  n逆糴 0ぃì计干0
    printf("12345678901234567890\n");
    printf("[%4d][%04d][%04d]\n",12,123,12345); 
    // %+d  +璝琌タ计陪ボ+腹
    printf("%d %+d %+d %+4d %+04d\n",10,20,-30,40,50); 
    // %-nd  -ボオ癸霍
    printf("[%10d][%-10d]\n",1234,1234);
    
    system("pause");
    return 0;
}

     
