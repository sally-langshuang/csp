#include "a.h"
#include "b.h"
extern int buf[];

// i am a shit
void swap() 
{
    int temp;
    int *bufp0 = &buf[0];
    int *bufp1 = &buf[1];
    temp = *bufp0;
    *bufp0 = *bufp1;
    *bufp1 = temp;
}