#include <stdio.h>
#include <stdlib.h>
int main(void)
{// �B�I�ƫ��A: float double 
    float f, e=1.23456789012345678;
    double d=1.23456789012345678;
    printf("sizeof(float)=%d\n",sizeof(float));
    printf("sizeof(double)=%d\n",sizeof(double));
    printf("f=%f\n",f);
    printf("e=%.20f\n",e);
    printf("d=%.20f\n",d);
    // %e %E ��ܱN�B�I�ƥH��ǰO�����
    //  e=> exponential ���ƪ� 
    e=1234567.89012345;
    d=1234500000000.123456;
    printf("e=%e\n",e);
    printf("d=%.20E\n",d);
    f=123.4567E+10;
    printf("f=%.10E\n",f);
    // �B�I�Ʊ`�� 
    printf("float: %.20f\n",0.1234567890123456789F);
    // �B�I�Ƨ��ݪ�F��ܸӯB�I�Ƭ�float���A 
    printf("double: %.20f\n",0.1234567890123456789);
    // �Y�B�I�ƥ����w���A�A�w�]��double���A 
    printf("sizeof(1.23)=%d\n",sizeof(1.23));
    printf("sizeof(1.23f)=%d\n",sizeof(1.23f));
    // http://211.21.140.4/sju/upload.htm
    // �U��: http://211.21.140.4/sju/download.htm 
//  �@�~: �ĥ|���@�~ ��6,7,10�D��g�bA4�������ȩΪťկȤW
//  �U�Юɶ�: �P���G �|  6:00~9:00PM  E524A 
    system("pause");
    return 0;
}
 
