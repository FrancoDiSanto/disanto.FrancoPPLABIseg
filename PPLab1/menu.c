#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"


int menu()
{
    int opcion;


    system("cls");
    printf("******menu de opciones********\n");
    printf("1- Alta notebook\n");
    printf("2- Modificar notebook\n");
    printf("3- Baja notebook\n");
    printf("4- Listar notebooks\n");
    printf("5- Listar marcas\n");
    printf("6- Listar tipos\n");
    printf("7- Listar servicios \n");
    printf("8- ALta trabajo \n");
    printf("9- Listar trabajo \n");
    printf("10- Submenu de informes \n");

    printf("11- Salir \n");
    printf("ingrese su opcion : ");
    scanf("%d", &opcion );

    return opcion;
}


int submenu()
{
    int opcion;


    system("cls");
    printf("******menu de opciones********\n");
    printf("1- Modificar precio\n");
    printf("2- Modificar tipo\n");

    printf("3- Salir \n");
    printf("ingrese su opcion : ");
    scanf("%d", &opcion );

    return opcion;



}




int  menuInformes()
{
    int opcion;
    system("cls");
    printf("******menu de opciones********\n");
    printf("1- Mostrar las notebooks del tipo seleccionado por el usuario\n");
    printf("2- Mostrar notebooks de una marca seleccionada.\n");
    printf("3- Informar la o las notebooks más baratas.\n");
    printf("4- Mostrar un listado de las notebooks separadas por marca.\n");
    printf("5- Elegir un tipo y una marca y contar cuantas notebooks hay de ese tipo y esa marca.\n");
    printf("6- Mostrar la o las marcas más elegidas por los clientes.\n");
    printf("7- Pedir una notebook y mostrar todos los trabajos que se le hicieron a la misma. \n");
    printf("8- Pedir un notebook e informar la suma de los importes de los services se le hicieron a la misma. \n");
    printf("9- Pedir un servicio y mostrar las notebooks a las que se realizó ese servicio y la fecha. \n");
    printf("10- Pedir un servicio y mostrar las notebooks a las que se realizó ese servicio y la fecha. \n");

    printf("11- Salir \n");
    printf("ingrese su opcion : ");
    scanf("%d", &opcion );
return opcion;
}
