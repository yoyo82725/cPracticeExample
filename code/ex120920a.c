#include <stdio.h>
#include <stdlib.h>
int main(void)
{// printf(�榡�Ʀr��,�Ѽ�1,�Ѽ�2,....); 
    printf("���   �ƶq     �`��\n");
    printf("====   ====    ======\n");
    printf(" %d     %d       %d\n",12,11,12*11);
    printf(" $%d    %d       %d\n",5,6,5*6);
    // �榡�Ʀr��
    //   %d       ��ܾ�Ƹ�� 
    printf("���   �ƶq     �`��\n");
    printf("====   ====    ======\n");
    printf("$%3d   %4d    %6d\n",12,11,12*11);
    printf("$%3d   %4d    %6d\n",5,6,5*6);
    // %nd   n ��Ʀr���(���e��) 
    printf("$%03d   %04d    %06d\n",5,6,5*6);
    // %0nd  n�����e�� 0������Ƹ�0
    printf("12345678901234567890\n");
    printf("[%4d][%04d][%04d]\n",12,123,12345); 
    // %+d  +�Y�O�������+��
    printf("%d %+d %+d %+4d %+04d\n",10,20,-30,40,50); 
    // %-nd  -��ܦV�����
    printf("[%10d][%-10d]\n",1234,1234);
    
    system("pause");
    return 0;
}

     
