#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b;
    printf("����l��: a=%d, b=%d\n",a,b);
    printf("Please input two numbers:");
    scanf("%d , %d",&a,&b);
    // �Y��J�榡�����]�t�Ů�, �h��J��Ƥ��i�H�ΪŮ� 
    // ����ƪ����j,���Y���D�Ů檺�r��,�h��J����ƥ�
    // ���]�t�Ӧr���_�h�|�ɭP��J���~�����
    // ��: ��J����Ƭ� nn-dddd  n���Q���i�� d���K�i��
    // �hscanf���榡�r��������?
    printf("a=%d, b=%d\n",a,b);
    printf("Please input xx-oooo:");
    scanf("%2x - %4o",&a,&b);
    // �榡�r�ꤤ���Ů�i�H�N��J��Ƥ���e�᪺�Ů�
    // ���ӱ�
    // http://211.21.140.4/sju/upload.htm 
    printf("Your input %02X-%04o\n",a,b);
    system("pause");
    return 0;
}

    


