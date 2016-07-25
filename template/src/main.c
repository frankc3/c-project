#include <stdio.h>
#include <stdlib.h>
#include "myApp.h"
#include "mydebug.h"

int main()
{
    int nbr=104;
    printf("Gap for %d is %d",nbr,getGap(nbr));
    return 0;
}
