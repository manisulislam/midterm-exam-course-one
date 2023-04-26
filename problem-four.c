#include<stdio.h>
#include<string.h>
int main(){
  char S[100]        ;
  scanf("%s", &S);
  int size=strlen(S);
  int capital=0,small=0;
  for(int i=0; i<size; i++){
    if(S[i]>='a'&& S[i]<='z'){
       
       
           small++;

    }
    else{
          capital++;
       
       
    }
  }
  printf("%d %d", capital, small);
  return 0;
}
