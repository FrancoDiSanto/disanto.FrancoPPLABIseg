#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "datawarehouse.h"
#include "notebook.h"
#include "fecha.h"
#include "marca.h"
#include "tipo.h"
#include "servicio.h"
#include "trabajo.h"
#include "cliente.h"

int harcodearNOtebooks(eNotebook lista[], int tam , int cant, int* pIdNotebook)
{
    int cantidadCargada =0;
    if(lista != NULL && tam > 0 && cant>=0 && cant <= tam && pIdNotebook != NULL)
    {
        for(int i =0; i < cant ; i ++)
        {
            lista[i].id = *pIdNotebook;
            (*pIdNotebook)++;

            strcpy(lista[i].modelo, modelos[i]);

            lista[i].idMarca = marcas[i];

            lista[i].idTipo = tipos[i];

            lista[i].precio = precios[i];

            lista[i].idCliente = idClientes[i];

            lista[i].isEmpty =0;

            cantidadCargada++;
        }


    }

    return cantidadCargada;
}



int harcodearTrabajos(eTrabajo lista[], int tam , int cant, int* pIdTrabajo)
{
    int cantidadCargada=0;
     if(lista != NULL && tam > 0 && cant>=0 && cant <= tam && pIdTrabajo != NULL)
    {
        for(int i =0; i < cant ; i ++)
        {
            lista[i].id= *pIdTrabajo;
            (*pIdTrabajo)++;

            lista[i].idNotebook = idNotebooks[i];

            lista[i].idServicio = idServicios[i];

            lista[i].fecha = fechas[i];

            lista[i].isEmpty=0;

            cantidadCargada++;
        }


    }



return cantidadCargada;
}

int hardcodearCLiente(eCliente lista[], int tam, int cant , int* pIdCliente)
{
    int cantidadCargada=0;
    if(lista != NULL && tam > 0 && cant>=0 && cant <= tam && pIdCliente != NULL)
    {
        for(int i =0; i < cant ; i ++)
        {
            lista[i].id = *pIdCliente;
            (*pIdCliente)++;

            strcpy(lista[i].nombre, nombres[i]);

            lista[i].sexo = sexos[i];

            lista[i].isEmpty =0;

            cantidadCargada++;
        }


    }


  return cantidadCargada;
}

