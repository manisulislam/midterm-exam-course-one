#include<stdio.h>
int main(){
  int N;
  scanf("%d", &N);
  int A[N];
  for(int i=0; i<N; i++){
    scanf("%d", &A[i]);
  }
  int p;
  scanf("%d", &p);

  int values=0;

  for(int i=0; i<N; i++){
    if(A[i]==p){
        values++;
        
    }
  }
  printf("%d", values);

  return 0;
}
