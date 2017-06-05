#include<stdio.h>
#define TAM 10

void main(int argc, char* argv[]){

int i, j, min, aux;/* controladores de los bucles y el auxiliar de intercambios*/

int arreglo[TAM] = {2 , 3, 19, 43, 1, 4, 43, 9, 10, 19}; /*array definido e inicializado*/




for(i = 0; i < TAM; i++){
    min = i;/*Se establece el el indice actual como el menor*/

    for(j = i + 1; j < TAM; j++){
        if(arreglo[j] < arreglo[min]){/*Verifica que haya un valor menor que min*/
            min = j;/*asigna a minimo el indice donde este el menor que min*/
        }
    }

    /*intercambio*/
    aux = arreglo[i];
    arreglo[i] = arreglo[min];
    arreglo[min] = aux;
}


/*Imprime array ordenado*/
for(i = 0;i < TAM; i++){
    printf(" %d ", arreglo[i]);
}


}
