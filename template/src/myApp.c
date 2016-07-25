#include <stdio.h>
#include <stdlib.h>
#include "myApp.h"
#include <string.h>
/*
A binary gap within a positive integer N is any maximal sequence of consecutive zeros that is surrounded by ones at both ends in the binary representation of N.

For example, number 9 has binary representation 1001 and contains a binary gap of length 2.
The number 529 has binary representation 1000010001 and contains two binary gaps: one of length 4 and one of length 3.
The number 20 has binary representation 10100 and contains one binary gap of length 1.
The number 15 has binary representation 1111 and has no binary gaps.

Write a function:

int solution(int N);
that, given a positive integer N, returns the length of its long
est binary gap.
The function should return 0 if N doesn't contain a binary gap.

For example, given N = 1041 the function should return 5,
because N has binary representation 10000010001 and so its longest binary gap is of length 5.

Assume that:
N is an integer within the range [1..2,147,483,647].
Complexity:

expected worst-case time complexity is O(log(N));
expected worst-case space complexity is O(1).
*/

int int2bin(int n,int * bin)
{
    int temp=n;
    int i=0;
    while (temp >0)
    {
        int b=temp/2;
        b=b*2;
//        printf ("bin[%d]=%d\n",i,temp-b);
        * (bin+i)=temp-b;
        i++;
        temp/=2;
    }
    return i;
}
int calc_gap(int * bin,int size)
{
    int gap=0;
    int maxGap=0;
    int start=0;
    for(int i=0;i<size;i++)
    {
        if(1==*(bin+i))
        {
            if ((gap>0) && (1==start))
            {
                if(gap>maxGap)
                {
                    maxGap=gap;
                }
                start=0;
            }
            start=1;
            gap=0;

        }
        if (0==*(bin+i))
        {
            gap++;;
        }

    }
    return maxGap;
}
int getGap(int n)
{
    int size=32;
 //   printf("--> ");
//    int bin_ar[size]= {[0 ... 32] = 0};
    int bin_ar[size];
    memset(bin_ar, 0, size);
  //  printf("%d\n",bin_ar[0]);
//    printbin(bin_ar,size);
    int numBits=int2bin(n,bin_ar);
    printbin(bin_ar,numBits);
    int gap=calc_gap(bin_ar,numBits);
 //   printf("n=%d  Gap=%d\n",n,gap);
    return gap;
}
int printbin(int * bin,int size)
{
    int n=0;
    printf("[%d] ",size );
    for (int i=size-1;i>=0;i--)
    {
        printf("%d ", *(bin+i));
        n++;
    }
    printf("\n");
    return n;
}



