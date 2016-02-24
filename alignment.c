#include <stdio.h>
#define ALIGN_VALUE(value,align)  (((unsigned long)(value)+(align-1))&(~(align-1)))

int main()
{
    int i=0;
    printf("Aligned value is %d\n",i);
    printf("");
    return 0;
}
