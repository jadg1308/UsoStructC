#include "Estructura.h"
#include <string.h>
/* Create - Agregar, crear, insertar, registrar
Read - leer, mostrar, buscar, imprimir
Update - Actualizar, modificar, editar.
Delete - eliminar, borrar, destruir */

// create
void registarCarrera(carrera c[], int pos, int id, char nombre[]){
    c[pos].id = id;
    strcpy(c[pos].nombre, nombre);
}

// update
void modificarCarrera(carrera c[], int tam, int id, char nombre[]){
    int pos = buscarCarreraXId(id, c, tam);
    if (pos != -1){
        strcpy(c[pos].nombre, nombre);
        printf("Registro actualizado... \n");
    }else{
        printf("Registro no existe...\n");
    }
    
}

//read
//Busca una carrera por id y 
//devuelve la posicion en la que se encuentra en el arreglo
int buscarCarreraXId(int id, carrera c[], int tam){
    int b = -1;
    for(int i=0; i<tam; i++){
        if(id == c[i].id){
            b = id;
            return b;
        }
    }
    return b;
}

void mostrarRegistro(carrera c[], int tam){
    for(int i=0; i<tam; i++){
        printf("Registro # %i\n", i+1);
        printf("ID: %i\n", c[i].id);
        printf("Nombre: %s\n", c[i].nombre);
        printf("===========================================");
    }
}

//Delete
void eliminar(int id, carrera c[], int tam){
    int pos = buscarCarreraXId(id, c, tam);
    if(pos != -1){
        for(int i = pos; i< tam; i++){
            carrera aux;
            aux.id = c[i+1].id;
            strcpy(aux.nombre, c[i+1].nombre);

            c[i].id = aux.id;
            strcpy(c[i].nombre, aux.nombre);

            c[i+1].id = 0;
            strcpy(c[i+1].nombre, "");
        }
        
    }

    
}
