#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "marca.h"

void mostrarMarcas(eMarca lista[], int tam)
{
    printf("-------------Lista de Marcas------------\n");
    printf(" id        descripcion\n\n");
    for(int i =0; i< tam ; i++)
    {
        mostrarMarca(lista[i]);

    }


}


void mostrarMarca(eMarca marca)
{
    printf("%d      %s \n", marca.id, marca.descripcion);

}


int cargarDescripcionMarca(int id, eMarca marcas[], int tam, char desc[]){
int todoOk=0;
for(int i =0; i < tam ;i++){
    if(marcas[i].id == id){
        strcpy(desc, marcas[i].descripcion);
        todoOk=1;
        break;
    }
}

return todoOk;
}




