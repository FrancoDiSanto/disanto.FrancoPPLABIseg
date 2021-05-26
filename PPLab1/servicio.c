#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "servicio.h"
void mostrarServicios(eServicio lista[], int tams)
{
    printf("-------------Lista de Servicios------------\n");
    printf(" id        descripcion         precio\n\n");
    for(int i =0; i< tams ; i++)
    {
        mostrarServicio(lista[i]);

    }


}

void mostrarServicio(eServicio servicio)
{
    printf("%d      %s        %f \n", servicio.id, servicio.descripcion, servicio.precio);

}

int cargarDescripcionServicio(int id, eServicio servicios[], int tam, char desc[])
{
    int todoOk=0;

    for(int i =0; i < tam ;i++)
    {
        if(servicios[i].id == id)
        {
            strcpy(desc, servicios[i].descripcion);
            todoOk=1;
            break;
        }
    }


return todoOk;
}


int validarIDServicio(int id, eServicio lista[], int tam)
{
    int valido=0;


if (lista != NULL && tam > 0 )
{
    for(int i=0; i<tam; i++)
    {
        if(lista[i].id== id)
        {
            valido=1;
            break;
        }
    }


}
return valido;
}

