

#include <stdio.h>

#include <stdlib.h>

#include "sieve.h"

int sieve(int targetPrime){
  int table[targetPrime*targetPrime];
  for(int a=0;a<targetPrime*TargetPrime){
    table[a]=1;
  }
  for(int i=1;i<targetPrime;i++){
    if (table[targetPrime]=1){
      table[targetPrime]=0;
      for(j=2;j<targetPrime;j+i){
	if(table[targetPrime]%i==0){
	  table[targetPrime]=0;
      }
    }
  }
    int hold=targetPrime;
    int start=0;
    int result;
    while(hold>0){
      if (table[start]==1){
      }
    }
    return result;
}
int main(int argc, char * argv[]){
  int iterations = 1;
  int target = 1000000;
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
