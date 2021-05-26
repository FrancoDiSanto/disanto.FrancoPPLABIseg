#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"

int cargarNombre(int id, eCliente lista[], int tam, char desc[])
{
        int todoOk=0;
    for(int i =0; i < tam ;i++)
    {
        if(lista[i].id == id){
        strcpy(desc, lista[i].nombre);
        todoOk=1;
        break;
    }
}

return todoOk;

}



int initCliente(eCliente lista[], int tam)
{
    int todoOK=0;
    for(int i =0; i <tam ; i++)
    {
        lista[i].isEmpty=1;
        todoOK=1;
    }


    return todoOK;
}
