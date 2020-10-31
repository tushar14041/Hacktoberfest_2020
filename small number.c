/*Second Smallest
You are given 3 distinct integer numbers X,Y and Z.Task is to print the second smallest number among the three provided numbers.

Example
Input
10 42 15
Output
15*/

#include <stdio.h>
  
  int main()
  {
    int X,Y,Z;
    scanf("%d %d %d",&X,&Y,&Z);
    if((X>Y&&X<Z)||(X>Z&&X<Y))
     printf("%d",X);
    if((Y>Z&&Y<X)||(Y>X&&Y<Z))
     printf("%d",Y);
    if((Z>Y&&Z<X)||(Z>X&&Z<Y))
     printf("%d",Z);
    
    return 0;
  }
