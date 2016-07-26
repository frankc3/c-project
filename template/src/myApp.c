#include <stdio.h>    // printf,fopnen, ...
#include <stdlib.h>   // malloc ,system, ..
#include <string.h>   // strlen,stncpy, ...
#include <ctype.h>    // isdigit,tolower, ...
#include <stdarg.h>   // va_list,va_arg, ...
#include <time.h>     // asctime,localtime, ,..
#include <math.h>     // pow,ceil, ...
#include <limits.h>   // INT_MAX,INT_MIN,...
#include <float.h>    // FLT_MIN,FLT_MAX, ...
#include <assert.h>   // assert
#include <stdbool.h>  // true,false

#include "myApp.h"
#define  DEBUG  //print debug messages
#include "mydebug.h"

/**
* Docygen documentation
*/
int myfunction (int * nbr)
{
    LOG_INFO("Log info message");
    LOG_DBG("Number is %d \n",*nbr);
    return *nbr+2;
}




