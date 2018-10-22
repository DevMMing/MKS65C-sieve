

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

int main(int argc, char * argv[]){
  int iterations = 1;
  int target = 10;
  if(argc > 1){
    target = atoi(argv[1]);
  }
  if(argc > 2){
    iterations = atoi(argv[2]);
  }


  int ans = 0;
  while(iterations>0){
      ans=sieve(target);
      iterations--;
      printf("The n=%d prime is %d\n", target, ans );

      //this is to modify which prime to
      //potentially avoid CPU caching
      target++;
  }
  return 0;
}
