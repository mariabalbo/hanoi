#include <stdio.h>
#include <stdlib.h>

void hanoi(int d, char og, char meio, char fim){
    if(d==1){
        printf("Move o disco 1 de %c para %c\n", og, fim);
        return;
    }
    hanoi(d-1, og, fim, meio); //para mover da torre A para B
    printf("Move o disco %d de %c para %c\n", d, og, fim);
    hanoi(d-1, meio, og, fim); //move de B para C
}

int main(){
  int d;
  printf("Numero de discos: ");
  scanf("%d", &d);
  hanoi(d, 'A', 'B', 'C');
  printf("\n");
  return 0;
}  
