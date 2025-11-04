#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int *data;
    int topo;
    int capacidade;
} hanoi; //criada a pilha que representa as torres

void push(hanoi *p, int disco){ //troca o disco de torre
    p->data[++p->topo]=disco;
}

int pop(hanoi *p){ //tira o disco de uma torre
    if(p->topo==-1){
        printf("Torre vazia\n");
    }
    return p->data[p->topo--];
}

int peek(hanoi *p){ //verifica o disco que esta no topo
    if(p->topo==-1){
        printf("Torre vazia\n");
    }
    return p->data[p->topo];
}

void movimentos(hanoi *og, hanoi *aux, hanoi *fim, int n){
    if(n%2==0){

    }
}

