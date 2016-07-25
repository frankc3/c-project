#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myApp.h"
#define  DEBUG  //print debug messages
#include "mydebug.h"


int myfunction (int * nbr)
{
    LOG_INFO("Log info message");
    LOG_DBG("Number is %d \n",*nbr);
    return 99;
}




