#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "notebook.h"
#include "marca.h"
#include "menu.h"



int initNotebooks(eNotebook listt[], int tam)
{
    int todoOK=0;
    for(int i =0; i <tam ; i++)
    {
        listt[i].isEmpty=1;
        todoOK=1;
    }
    return todoOK;
}


void mostrarNotebooks(eNotebook lista[], int tam, eMarca marcas[], int tamm, eTipo tipos[], int tamt, eCliente clients[], int tamc)
{
    int flag=1;
    printf("----------***  LISTA DE NOTEBOOKS  ***------------ \n");
    printf("id       modelo        marca         tipo            precio             CLiente\n");
    printf("-------------------------------------------------------------------------------------\n");
    for(int i =0; i<tam; i++)
    {
        if(!lista[i].isEmpty)
        {
            mostrarNotebook(lista[i],marcas , tamm, tipos, tamt, clients, tamc);
            flag=0;
        }

    }

    if(flag)
    {
        printf("\n");
        printf("\n");
        printf("--------No hay notebooks para mostar------ \n");
    }

    printf("\n");
    printf("\n");

}



void mostrarNotebook(eNotebook unaNoteookk,eMarca marcs[], int ttamm, eTipo ttipos[], int ttamt, eCliente clients[], int tamc)
{
    char descripcionTipo[20];
    char descripcionMarca[20];
    char nombre[20];
    cargarNombre(unaNoteookk.idCliente, clients, tamc, nombre);
    cargarDescripcionMarca(unaNoteookk.idMarca, marcs, ttamm, descripcionMarca);
    cargarDescripcionTipo(unaNoteookk.idTipo, ttipos, ttamt, descripcionTipo);
    printf("%d      %-10s     %-10s   %-10s    %.2f             %-10s",
            unaNoteookk.id , unaNoteookk.modelo , descripcionMarca,
            descripcionTipo, unaNoteookk.precio,nombre);
    printf("\n");





}


int bajaNotebook(eNotebook listaa[], int ttam, eMarca marcass[], int ttamm, eTipo ttipos[], int ttamt,eCliente client[], int tamc)
{
    int idABorrar;
    int todoOk=0;
    mostrarNotebooks(listaa, ttam, marcass, ttamm, ttipos, ttamt, client, tamc);
    printf("ingrese el numero de id de la  notebook a eliminar \n");
    scanf("%d", &idABorrar);

    for(int i =0; i<ttam; i++)
    {


        if(listaa[i].id == idABorrar)
        {
            listaa[i].isEmpty=1;
            todoOk=1;
            mostrarNotebook(listaa[i],marcass, ttamm, ttipos, ttamt,client, tamc);

        }

    }

    return todoOk;
}

int buscarLibre(eNotebook lista[],int tam)
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


int altaNotebook(eNotebook noteb[],int  tam,eMarca marc[],int tamm ,eTipo types[] , int tamt, int* pIdNuevanotebook, eCliente clients[], int tamc, int* pIdCliente )
{
    int todoOk=0;
    int i;
    eNotebook nuevaNotebook;
    int idTipo;
    int idMarca;

    system("cls");
    printf("Alta notebook\n");
    printf("id  %d \n", *pIdNuevanotebook);

    if(noteb != NULL && tam >0 && pIdNuevanotebook != NULL)
    {
        i= buscarLibre(noteb, tam);
        printf("%d", i);
        if(i == -1)
        {
            printf("NO hay lugar en el sistema");
        }
        else
        {


            printf("ingrese modelo: ");
            fflush(stdin);
            gets(nuevaNotebook.modelo);

            mostrarMarcas(marc , tamm);
            printf("ingrese id Marca: ");
            scanf("%d", &idMarca);
            while(idMarca < 1000 || idMarca > 1003)
            {
                printf("Error, ingrese id Marca valido: ");
                scanf("%d", &idMarca);
            }

            mostrarTipos(types, tamt );
            printf("ingrese ID tipo: ");
            fflush(stdin);
            scanf("%d", &idTipo);
            while(idTipo< 5000 || idTipo > 5003)
            {
                printf("Error ID tipo: ");
                fflush(stdin);
                scanf("%d", &idTipo);

            }

            printf("ingrese precio: ");
            scanf("%f", &nuevaNotebook.precio);

            printf("cliente nro %d \n", *pIdCliente);






            nuevaNotebook.idCliente = *pIdCliente;
            (*pIdCliente)++;
            nuevaNotebook.idTipo = idTipo;
            nuevaNotebook.idMarca = idMarca;
            nuevaNotebook.id= *pIdNuevanotebook;
            (*pIdNuevanotebook)++;
            nuevaNotebook.isEmpty=0;

            noteb[i] = nuevaNotebook;
            todoOk=1;
        }


}
return todoOk;
}



int modificarNotebook(eNotebook lista[], int tam, eMarca marcass[], int tamm, eTipo tipos[], int tamt, eCliente clients[], int tamc)
{
    int todoOK=0;
    if(lista != NULL && tam > 0 && marcass != NULL && tamm > 0 && tipos != NULL && tamt > 0 )
    {
         int idAModificar;

         mostrarNotebooks(lista, tam, marcass, tamm, tipos, tamt,clients,tamc);
         printf("ingrese el numero de id de la  notebook a modificar \n");
         scanf("%d", &idAModificar);

        for(int i =0; i<tam; i++)
        {


            if(lista[i].id == idAModificar)
            {
                int AM = i;
                char salir = 'n';
                    do{

                        switch(submenu())
                        {
                            case 1:
                                printf("reingrese precio");
                                scanf("%f", &lista[AM].precio);
                            break;
                            case 2:
                                mostrarTipos(tipos, tamt);
                                printf("reingrese id tipo");
                                scanf("%d", &lista[AM].idTipo);
                                while(lista[AM].idTipo > 5003 || lista[AM].idTipo < 5000)
                                {
                                    printf("Tipo invalido reingrese id tipo");
                                    scanf("%d", &lista[AM].idTipo);

                                }
                            break;
                            case 3:
                                printf("Desea salir/ dejar de modificar ingrese 's' de asi serlo : ");
                                fflush(stdin);
                                scanf("%c", &salir);
                            break;
                        }



                    }while(salir== 'n');
                todoOK =1;
            }

        }
    }

    return todoOK;
}


int cargarModeloNotebook(int id, eNotebook lista[], int tam, char modelo[])
{
    int todoOk=0;

    for(int i =0; i < tam ; i++)
    {
        if(lista[i].id == id)
        {
            strcpy(modelo, lista[i].modelo);
            todoOk=1;
            break;
        }
    }


    return todoOk;
}

int validarIDNotebook(int id, eNotebook lista[], int tam)
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


void ordenarNotebook(eNotebook lista[], int tam)
{
    eNotebook aux;

    if(lista != NULL && tam > 0)
    {
        for(int i =0; i < tam - 1; i++)
        {
            for(int j= i+1 ; j<tam ; j++)
            {

               if((lista[i].idMarca < lista[j].idMarca) || (lista[i].idMarca == lista[j].idMarca && lista[i].precio > lista[j].precio) )
               {

                   aux = lista[i];
                   lista[i] = lista[j];
                   lista[j]=aux;


               }


            }

        }

    }

}


int mostrarNotebookTipo(eNotebook lista[],int tam, eMarca marcas[], int tamm, eTipo tipos[], int tamt, eCliente clients[], int tamc)
{
    int todoOK=0;
    int tipoAMostrar;
    mostrarTipos(tipos, tamt);

    printf("ingrese el id del tipo que quiere mostrar");
    scanf("%d", &tipoAMostrar);
    printf("id       modelo        marca         tipo            precio             CLiente\n");
    for(int i =0; i <tam; i++)
    {
        if(lista[i].isEmpty==0 && tipoAMostrar == lista[i].idTipo )
        {


        printf("-------------------------------------------------------------------------------------\n");
            mostrarNotebook(lista[i], marcas, tamm, tipos, tamt, clients, tamc);
            todoOK=1;
        }


    }

return todoOK;
}

int  mostrarNotebookMarca(eNotebook lista[],int tam,eMarca marcas[], int tamm, eTipo tipos[], int tamt, eCliente clients[], int tamc)
{
    int todoOK=0;
    int marcaAMostrar;
    mostrarMarcas(marcas, tamm);

    printf("ingrese el id de la marca que quiere mostrar");
    scanf("%d", &marcaAMostrar);
    printf("id       modelo        marca         tipo            precio             CLiente\n");
    for(int i =0; i <tam; i++)
    {
        if(lista[i].isEmpty==0 && marcaAMostrar == lista[i].idMarca )
        {


        printf("-------------------------------------------------------------------------------------\n");
            mostrarNotebook(lista[i], marcas, tamm, tipos, tamt, clients, tamc);
            todoOK=1;
        }


    }

return todoOK;

}
void listarNotebooksAllMarcas(eNotebook lista[],int tam,eMarca marcas[], int tamm, eTipo tipos[], int tamt, eCliente clients[], int tamc)
{
    system("cls");

    printf("Listado por marcas \n");
    int flag =1;

    for(int i =0; i < tamm ; i++)
    {
        flag =1;
        printf("\n\n -------------- MARCA: %s ------------ \n \n", marcas[i].descripcion);
        for(int j=0; j < tam ; j++)
        {
            if(lista[j].isEmpty == 0 && lista[j].idMarca == marcas[i].id)
            {
                mostrarNotebook(lista[j],marcas,tamm,tipos,tamt,clients,tamc);
                flag =0;
            }

        }
        if(flag)
        {
            printf("No hay empleados\n");
        }
    }
}
void mostrarNotebookMasBarata(eNotebook lista[],int tam,eMarca marcas[], int tamm, eTipo tipos[], int tamt, eCliente clients[], int tamc)
{
    eNotebook aMostrar;
    eNotebook aux;

    int flag=1;

    for(int i =0; i < tam -1 ; i++)
    {
        for(int j = i +1; j<tam ; j ++)
        {
            if(lista[i].precio > lista[j].precio)
            {
                    aux = lista[i];
                    lista[i] = lista[j];
                    lista[j]=aux;

            }

        }

    }

    mostrarNotebook(lista[0], marcas, tamm, tipos, tamt, clients, tamc);

}




int cantidadTipoYMarca(eNotebook lista[],int tam,eMarca marcas[], int tamm, eTipo tipos[], int tamt, eCliente clients[], int tamc)
{
    int todoOK=0;
    int marcaAMostrar;
    int tipoAMostrar;
    int contador=0;
    mostrarMarcas(marcas, tamm);
    printf("ingrese el id de la marca que quiere mostrar");
    scanf("%d", &marcaAMostrar);

    mostrarTipos(tipos, tamt);
    printf("ingrese el id del tipo que quiere mostrar");
    scanf("%d", &tipoAMostrar);

    printf("id       modelo        marca         tipo            precio             CLiente\n");
    for(int i =0; i <tam; i++)
    {
        if(lista[i].isEmpty==0 && marcaAMostrar == lista[i].idMarca && lista[i].idTipo == tipoAMostrar )
        {
            printf("-------------------------------------------------------------------------------------\n");
            mostrarNotebook(lista[i], marcas, tamm, tipos, tamt, clients, tamc);
            todoOK=1;
            contador++;
        }


    }
    printf("\n");
    printf("Hay %d notebooks de ese tipo y marca ", contador);
return todoOK;

}

void marcaMasElegida(eNotebook lista[],int tam,eMarca marcas[], int tamm)
{
    int todoOK;
    int compaq = 1000;
    int asus = 1001;
    int hp = 1003;
    int acer = 1002;
    int contadorCompaq=0;
    int contadorAsus=0;
    int contadorAcer=0;
    int contadorHP=0;
    int masEleida;
    char descripcion[20];

    for(int i =0; i < tam ; i++)
    {
        if(lista[i].idMarca == compaq)
        {
            contadorCompaq++;
        }
        else if (lista[i].idMarca == asus)
        {

            contadorAsus++;
        }
        else if(lista[i].idMarca == hp)
        {

            contadorHP++;
        }
        else{
            contadorAcer++;
        }


    }

    if(contadorAcer > contadorAsus && contadorAcer > contadorCompaq && contadorAcer > contadorHP)
    {
        masEleida=1002;
    }else if(contadorAsus >=contadorAcer && contadorAsus > contadorCompaq && contadorAsus > contadorHP)
    {
        masEleida=1001;

    }else if(contadorCompaq > contadorAcer && contadorCompaq > contadorAsus && contadorCompaq > contadorHP)
    {
        masEleida=1000;
    }else{
        masEleida= 1003;
    }

    cargarDescripcionMarca(masEleida, marcas, tamm, descripcion);
    printf("la marca mas elegida por la gente es %s \n ", descripcion);
    system("pause");

}









