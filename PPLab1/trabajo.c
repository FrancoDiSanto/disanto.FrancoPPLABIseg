#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trabajo.h"
#include "notebook.h"
//#include "datawarehouse.h"


int initTrabajos(eTrabajo listt[], int tam)
{
    int todoOK=0;
    for(int i =0; i <tam ; i++)
    {
        listt[i].isEmpty=1;
        todoOK=1;
    }
    return todoOK;
}

void mostrarTrabajos(eTrabajo works[], int tamw, eServicio services[], int tams, eNotebook noteb[], int tam)
{

    int flag=1;
    if(works != NULL && tamw >0 && services != NULL && tams> 0 && noteb != NULL && tam > 0)
    {
        printf("-------------Lista de trabajos-----------\n");
        printf(" id    idNotebook          modelo             Servicio                 Fecha       \n\n");
        for(int i =0; i< tamw ; i++)
        {
            if(!works[i].isEmpty)
            {
                mostrarTrabajo(works[i], services, tams, noteb, tam);
                flag =0;
            }

        }
    if(flag)
    {
        printf("\n");
        printf("\n");
        printf("--------No hay trabajos para mostar------ \n");
    }

    printf("\n");
    printf("\n");
    }

}

void mostrarTrabajo(eTrabajo unTrabajo, eServicio servicios[], int tams, eNotebook notebooks[], int tamn)
{
    char modeloNotebook[20];
    char descServicio[20];
    if(cargarModeloNotebook(unTrabajo.idNotebook, notebooks, tamn, modeloNotebook) &&
       cargarDescripcionServicio(unTrabajo.idServicio,servicios, tams, descServicio ))
    {
        printf("%3d    %5d              %-10s           %-20s   %2d / %2d / %4d  \n", unTrabajo.id,
               unTrabajo.idNotebook,
               modeloNotebook,
               descServicio,
               unTrabajo.fecha.dia,
               unTrabajo.fecha.mes,
               unTrabajo.fecha.anio);


    }



}

int altaTrabajo(eNotebook noteb[],int  tam,eMarca marc[],int tamm ,eTipo types[] , int tamt,eTrabajo trabajos[], int tamtrab, eServicio services[], int tams, int* pNuevoTrabajo, eCliente clients[], int tamc)
{
    int todoOK=0;
    int indice;
    eTrabajo nuevotrabajo;
    int idNotebook;
    int idServicio;
    if(noteb != NULL && marc != NULL && types != NULL && trabajos != NULL && tam > 0 && tamm >0 && tamt >0 && tamtrab >0 && pNuevoTrabajo != NULL)
    {
        printf("            ALTA TRABAJOS           \n");
        indice = buscarLibreTrabajo(trabajos, tamtrab);

        if (indice == -1)
        {
            printf("no hay lugar para mas trabajos ");
        }
        else
        {
            mostrarNotebooks(noteb,tam, marc,tamm,types,tamt,clients, tamc);
            printf("ingrese id notebook: ");
            scanf("%d", &idNotebook);
            while(!validarIDNotebook(idNotebook, noteb, tam))
            {
                printf("ingrese id notebook: ");
                scanf("%d", &idNotebook);

            }
            nuevotrabajo.idNotebook = idNotebook;


            mostrarServicios(services, tams);
            printf("ingrese id servicio: ");
            scanf("%d", &idServicio);
            while(!validarIDServicio(idServicio, services, tams))
            {
                printf("ingrese id servicio: ");
                scanf("%d", &idServicio);
            }
            nuevotrabajo.idServicio = idServicio;


            printf("ingrese fecha dd/mm/aaaa");
            scanf("%d/%d/%d", &nuevotrabajo.fecha.dia, &nuevotrabajo.fecha.mes, &nuevotrabajo.fecha.anio);
            nuevotrabajo.id = *pNuevoTrabajo;
            (*pNuevoTrabajo)++;
            nuevotrabajo.isEmpty=0;



            trabajos[indice] = nuevotrabajo;

            todoOK=1;


        }




    }
return todoOK;
}


int buscarLibreTrabajo(eTrabajo lista[], int tam)
{
    int LLibre=-1;
    for(int i =0; i<tam; i++)
    {
        if(lista[i].isEmpty)
        {
            LLibre=i;
            break;
        }
    }
return LLibre;

}

