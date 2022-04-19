#include <stdio.h>

void main()
{
    int N, max=0, min=10;

      while(N>=0){
        printf("Digite a nota (nota negativa para terminar):\n");
        scanf("%d", &N);
        if(N>max){
            max=N;
        }
      }
      printf("A nota maxima foi %d.\n", max);
}
