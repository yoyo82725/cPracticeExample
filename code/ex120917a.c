/* 
       程式名稱: hello.c 
*/
// for demo 
#include <stdio.h>//讀取stdio.h作為程式的一部分 
// .h header file 標頭檔 
// include path=C:\...
#include <stdlib.h>
#include <math.h>
//#include "myinc.h" // 讀取自行定義的標頭檔 
// C語言程式是由函式(function)所組成
// 其中main()為主程式 
int main(void)
// int main(int argc, char **argv)
// int main(int argc, char *argv[])
{
    printf("Hello!\n");
    //system("pause");
    printf("sin(1)=%f\n",sin(1));
    system("pause");
    return 0;
}
 

