#include <stdio.h>
#include <math.h>

float log_num(float n)
{
    float result;
    result = log(n);
    return result;
}

void test_log_num()
{
    if(1.72 == log_num(5.6))
        printf("w\n");
    else
        printf("nw\n");       
}

int main()
{
    void test_log_num();
    return 0;
}