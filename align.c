#include<stdio.h>

#define ALIGN_VALUE(value,align)  (((uint32_t)(value)+(align-1))&(~(align-1)))
int main()
{
    uint32_t x;
    x=ALIGN_VALUE(
    return 0;
}
