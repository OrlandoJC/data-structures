#include<stdio.h>
#define SIZE 10 /*tamaño de elemento*/
void burbuja( int array[], int size);

/*****************
*ORDENAMIENTO BURBUJA OPTIMIZADO
*autor:Orlando de jesus
*
*1.-Despues del primer recorrido el elemento mas grande esta hasta arriba, es decir esta ordenado
*2.-verificar si estan en orden o si hay intercambios
*
*****************/

void main()
{

  static int i;
  int array[SIZE] = {1, 2 ,5 ,3 ,4 ,6 ,7 ,8 ,9 , 10};

  /*ejecutar el metodo*/
  burbuja(array, SIZE);

  printf("------------ARRAY ORDENADO---------------\n");
  /*mostrar array*/
  for ( i = 0; i < SIZE; i++){
    printf(" %d ", array[i]);
  }

}

void burbuja(int array[], int size){
  int i; /*contador de pasadas*/
  int j; /*contador de comparaciones*/
  int temp; /*ubicacion temporal para el intercambio*/ 
  int bandera = 1;/*bandera para verificar si hay comparaciones */

  /**ciclo controlador de pasadas  - "si existe intercambios y - i es menor que n-"*/
  for(i = 1; i < size && bandera == 1 ; i++){
    bandera = 0;//bandera establecida en "sin comparaciones"
    /*ciclo controlador del numero de comparaciones*/
    for(j = 0; j < size - i; j++){//reduce las comparaciones
      /*intercambio de elementos*/
      if( array[j] > array[j + 1]){
        bandera = 1;/*bandera establecida en "existe comparacion"*/
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }

}
