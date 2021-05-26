#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "notebook.h"
#include "fecha.h"
#include "marca.h"
#include "tipo.h"
#include "servicio.h"
#include "trabajo.h"
#include "menu.h"
//#include "datawarehouse.h"
#include "harcodeo.h"
#include "cliente.h"
#define TAMM 4
#define TAMT 4
#define TAMS 4
#define TAM 10
#define TAMTRAB 10
#define TAMC 10







int trabajosNotebook(eNotebook lista[],int tam,eMarca marcas[], int tamm, eTipo tipos[], int tamt, eCliente clients[], int tamc, eTrabajo trabajos[], int tamtrab, eServicio services[], int tams);
int informes(eNotebook lista[], int tam, eMarca marcass[], int tamm, eTipo tipos[], int tamt, eCliente clients[], int tamc, eTrabajo trabajos[], int tamtrab, eServicio servicios[], int tamserv);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    eMarca marcas[TAMM]={ {1000, "Compaq"}, {1001, "Asus"},{1002, "Acer"},{1003, "HP"}};

    eTipo tipos[TAMT]= { {5000, "Gamer"}, {5001, "Disenio"},{5002, "Ultrabook"},{5003, "Normalita"}};

    eServicio servicios[TAMS]= { {20000, "Bateria", 250}, {20001, "Antivirus", 300},{20002, "Actualizacion", 400},{20003, "Fuente", 600}};

    eNotebook notebooks[TAM];
    int idNotebook = 100;
    initNotebooks(notebooks, TAM);

    eTrabajo trabajos[TAMTRAB];
    int idTrabajo =1;
    initTrabajos(trabajos, TAMTRAB);

    eCliente clientes[TAMC];
    int idCLiente=3000;


    hardcodearCLiente(clientes, TAMC, 10, &idCLiente);
    harcodearNOtebooks(notebooks, TAM , 10 , &idNotebook);
    harcodearTrabajos(trabajos, TAMTRAB , 10, &idTrabajo);
    char salir ='n';
    do
    {

        switch(menu())
        {
        case 1:
            if(altaNotebook(notebooks, TAM, marcas, TAMM,tipos , TAMT, &idNotebook, clientes, TAMC, &idCLiente ))
            {
                printf("1- Alta notebook Exitosa\n");

            }
            else
            {
                printf("1-Hubo un error,  Alta notebook fallida\n");

            }

            break;
        case 2:

             if(modificarNotebook(notebooks, TAM, marcas, TAMM, tipos, TAMT,clientes, TAMC))
            {
                printf("Se modifico correctamente \n");

            }
            else
            {
                printf("No se encontro notebook \n");

            }

            break;
        case 3:
            if(bajaNotebook(notebooks, TAM, marcas, TAMM, tipos, TAMT,clientes, TAMC))
            {
                printf("Se borro correctamente \n");

            }
            else
            {
                printf("No se encontro notebook \n");

            }

            break;
        case 4:

            printf("         Notebooks ordenadas por marca y precio \n");
            ordenarNotebook(notebooks, TAM);
            mostrarNotebooks(notebooks, TAM, marcas, TAMM, tipos, TAMT,clientes, TAMC);
            break;
        case 5:
            mostrarMarcas(marcas, TAMM);

            break;
        case 6:
            mostrarTipos(tipos, TAMT);

            break;
        case 7:

            mostrarServicios(servicios, TAMS);
            break;
        case 8:
            system("cls");
            altaTrabajo(notebooks, TAM, marcas, TAMM, tipos, TAMT, trabajos, TAMTRAB, servicios, TAMS,&idTrabajo,clientes, TAMC);
            break;
        case 9:
            mostrarTrabajos(trabajos, TAMTRAB, servicios, TAMS, notebooks,TAM);
            break;
        case 10:
            informes(notebooks,TAM, marcas,TAMM, tipos, TAMT, clientes, TAMC,trabajos,TAMTRAB, servicios, TAMS);
        break;
        case 11:
            printf("Desea salir: ");
            fflush(stdin);
            scanf("%c", &salir);

            break;



        }

        system("pause");
    }
    while(salir=='n');

}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int informes(eNotebook lista[], int tam, eMarca marcass[], int tamm, eTipo tipos[], int tamt, eCliente clients[], int tamc, eTrabajo trabajos[], int tamtrab, eServicio servicios[], int tamserv)
{
    char salir = 'n';
    int todoOK=0;
    if(lista != NULL && tam >0 && marcass != NULL && tamm >0 && tipos != NULL && tamt >0 && clients != NULL && tamc> 0)
    {
       do{
        switch(menuInformes())
        {

            case 1:

            if(!mostrarNotebookTipo(lista, tam, marcass, tamm, tipos, tamt, clients, tamc))
            {
                printf("No hay notebooks de ese tipo");
            }
            break;
            case 2:
                if(!mostrarNotebookMarca(lista, tam, marcass, tamm, tipos, tamt, clients, tamc))
                {
                    printf("No hay notebooks de esa marca");
                }

            break;
            case 3:
            mostrarNotebookMasBarata(lista, tam, marcass, tamm, tipos, tamt, clients, tamc);
            break;
            case 4:

            listarNotebooksAllMarcas(lista,tam,marcass,tamm,tipos,tamt,clients,tamc);
            break;
            case 5:
                cantidadTipoYMarca(lista, tam, marcass, tamm, tipos, tamt, clients, tamc);


            break;
            case 6:
                marcaMasElegida(lista, tam, marcass , tamm);
            break;
            case 7:

            if (!trabajosNotebook(lista, tam, marcass, tamm, tipos, tamt, clients, tamc, trabajos,tamtrab,servicios,tamserv))
            {
                printf("no se le realizaron trabajos a esa notebook");

            }
            break;
            case 8:

            break;
            case 9:

            break;
            case 10:

            break;
            case 11:
            printf("Desea salir: ");
            fflush(stdin);
            scanf("%c", &salir);

            break;



        }
       printf("\n");
       system("pause");
       }while(salir == 'n');


    }



}



int trabajosNotebook(eNotebook lista[],int tam,eMarca marcas[], int tamm, eTipo tipos[], int tamt, eCliente clients[], int tamc, eTrabajo trabajos[], int tamtrab, eServicio services[], int tams)
{   int todoOK=0;
    int idNotebookAbuscar;
    mostrarNotebooks(lista, tam, marcas, tamm, tipos, tamt, clients, tamc);
    printf("ingrese el id de la notebook que desea saber los trabajos \n");
    scanf("%d", &idNotebookAbuscar);

    for(int i =0; i<tamtrab ; i++)
    {
        if(trabajos[i].idNotebook == idNotebookAbuscar)
        {
            printf("los trabajos que se realizaron a esta notebook son \n");
            mostrarTrabajo(trabajos[i],services, tams,lista,tam);
            todoOK=1;
        }


    }

return todoOK;
}





























