#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    // �B�I��: float, double 
    float a;
    double b;
    printf("sizeof(a)=%d, sizeof(b)=%d\n",sizeof(a),
            sizeof(b));
    a=1.234567890123456f; // f��float�B�I�`�� 
    b=1.234567890123456789; // double�`��
    printf("a=%.20f\n",a);
    printf("b=%.20lf\n",b);
    // %lf ���double���A���B�I��
    printf("b=%.20f\n",b); 
    a=1.23E10; // �� 1.23���H10��10���誺��ǰO����ܪk
    printf("a=%e\n",a);
    printf("a=%E\n",a);
    printf("a=%.2E\n",a); // �����2��p�� 
    a=1234.5678e-12;
    printf("a=%e\n",a);
    printf("a=%.4e\n",a);
    printf("a=%.20f\n",a);
    // http://211.21.140.4/sju/upload.htm
    // �U�����} 
    // http://211.21.140.4/sju/download.htm 
    // �@�~: �ĥ|���@�~ 6, 7, 10
    // �U�Юɶ�: �P���G�B�| 6:00~9:00pm E524a 
    system("pause");
    return 0;
}

    
