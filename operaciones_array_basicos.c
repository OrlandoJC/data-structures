#include <stdio.h>


/*Prototipos*/
void insertar(int arrego[], int p, int TAM, int elemento);
void eliminar(int arrego[],int TAM, int elemento);
void mostrar(int arreglo[], int TAM);

void main(){

    int array[10] = {1, 2, 3, 4};

    int p,
        i,
        k,
        TAM= 9,
        elemento,
        opcion_insertar,
        elemento_borrar,
        opcion_menu;


    printf("el array actual luce asi\n");
    mostrar(array, TAM);


    printf("1.- insertar\n");
    printf("2.- eliminar\n");
    printf("3.- actualizar\n");
    printf(" 4.- ordenar");
    scanf("%d", &opcion_menu);

    /*EL menu termina si el usuario oprime -1( valor centinela)*/
    while(opcion_menu != -1 ){

        switch(opcion_menu){ /*evaluamos opcion_menu*/
         case 1:
             do{

                printf("En que indice quieres insertar el elemento?\n");
                scanf("%d", &p);

                printf("Que dato desea insertar\n");
                scanf("%d", &elemento);

                /*Se llama a la funcion insertar*/
                insertar(array, p, TAM, elemento);

                /*se solita una eleccion al usuario*/
                printf("Desea insertar mas?\n");
                scanf("%d", &opcion_insertar);

             }while(opcion_insertar > 0); // mientras opcion insertar un numero positivo
             break;
         case 2:
             printf("en que indice quieres meter borrar?");
             scanf("%d", &elemento_borrar);

             /*Se llama a la funcion eliminar*/
             eliminar(array, TAM, elemento_borrar);
             break;
         case 3:
             mostrar(array, TAM);
             break;
        case 4 :
            burbuja(array, TAM);
            break;
         default:
             printf("ingresa un numero valido");
        }

        printf("1.- insertar\n");
        printf("2.- eliminar\n");
        printf("3.- actualizar\n");
        scanf("%d", &opcion_menu);

    }


}

/* Funciones */

/*
 * Funcion: insertar
 * --------------------
 * Inserta un elemento dado al array
 *
 *  arreglo: el arreglo al cual se le aplicara la operacion
 *  p: el indice en donde se desea hacer la isercion
 *  TAM : El tamaño del array
 *  elemento: elemento a isertar
 *
 *  returns: sin valor de retorno
 *
 *
 */
void insertar(int arrego[], int p, int TAM, int elemento){

    while( TAM >= p){
        arrego[TAM] = arrego[TAM - 1];
        TAM--;
    }

    arrego[p] = elemento;
    printf("listo !\n");
}


/*
 * Funcion: eliminar
 * --------------------
 * elimina un elemento dado al array
 *
 *  arreglo: el arreglo al cual se le aplicara la operacion
 *  TAM : El tamaño del array
 *  elemento: elemento a borrar
 *
 *  returns: sin valor de retorno
 *
 *
 */

void eliminar(int arrego[],int TAM, int elemento){
    int aux = elemento;
    int i;
    for(i =  aux; i < TAM; i++){
        arrego[i] = arrego[i + 1]; // mueve los elementos restantes hacia abajo
    }
}

/*
 * Funcion: mostrar
 * --------------------
 * muestra los elementos dela array dado
 *
 *  arreglo: el arreglo al cual se le aplicara la operacion
 *  TAM : El tamaño del array
 *
 *
 */

void mostrar(int arreglo[], int TAM){
    int k;/*variable para la iteracion*/
    system("cls");
    for( k = 0; k < TAM; k++){
        printf("%d ", arreglo[k]);
    }

    printf("\n");
}


void revisar(int arreglo[], int TAM){
    int i , vacios = 0;


    for(i = 0; i < TAM; i++){
        if(arreglo[i] == 0){
            vacios++;
        }

        return TAM == vacios;
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
