#include<stdio.h>
int main()
{
    __int64 a,b;
    while(scanf("%I64x%I64x",&a,&b)!=EOF)
    {
        printf(a+b<0?"-%I64X\n":"%I64X\n",a+b<0?-a-b:a+b);//I64不能输出负数
    }
    return 0;
}

