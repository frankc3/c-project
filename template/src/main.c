#include <stdio.h>
#include <stdlib.h>
#include "myApp.h"
#include "mydebug.h"

/**<  The main function is in a separate file */

int main(int argc, char * argv[])
{
    printf("Running %s\n",argv[0]);
    int * nbr;
    int mynbr=104;

    nbr=&mynbr;
    printf("Number is %d, return is  %d\n",*nbr,myfunction(nbr));
    return EXIT_SUCCESS; // equivalent to returning 0
 //  return EXIT_FAILURE ; // equivalent to returning 1
}
