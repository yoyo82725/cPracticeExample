#include <stdio.h>
#include <stdlib.h>
int main(void)
{
     int a,b;

     printf("Input a number:");
     scanf("%2x - %4d",&a,&b);
     //�Y�����w���e�סA�̦h�u�|Ū�����w���Ӽ�
     //�@�Ӯ榡���A�Y����ӭn��J�����,�榡�����Ů�
     //�i�N��J���h�l���Ů���ӱ� 
     printf("a=%d,hex:%x\n",a,a);
     printf("b=%d,hex:%x\n",b,b);
     system("pause");
     return 0;
}
