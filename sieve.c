

#include <stdio.h>
#include <stdlib.h>
#include "sieve.h"
#include <math.h>

int sieve(int targetPrime){
  int size=targetPrime*targetPrime*5;
  int table[size];
  for(int a=2;a<size;a++){
    table[a]=a;
  }
  for(int i=2;i<size;i++){
    for(int j=i+1;j<size;j++){
	     if(j%i==0){
	        table[j]=0;
      }
    }
  }
    int remain=targetPrime;
    int result;
    for(int start=2; start<size;start++){
      if (table[start]!=0){
        remain--;
        result=start;
      }
      if(remain==0){
        break;
      }
    }
    return result;
}
