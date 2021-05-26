#ifndef DATAWAREHOUSE_H_INCLUDED
#define DATAWAREHOUSE_H_INCLUDED
#include "fecha.h"

char nombres[10][20]={
    "Felipe",
    "Micaela",
    "Pepe",
    "Adrian",
    "Gustavo",
    "Ivan",
    "Yanina",
    "Juana",
    "Emilia",
    "Enzo"
};
char sexos[10]={
    'm',
    'f',
    'm',
    'm',
    'm',
    'm',
    'f',
    'f',
    'f',
    'm'
};

char modelos[10][20]={
    "Prototype",
    "XT125",
    "Modelo 1",
    "Ultimate",
    "XT plus",
    "M3",
    "Clase i",
    "ROG",
    "YOGA",
    "ZenBook"
};

int marcas[10]={
    1000,
    1002,
    1003,
    1001,
    1002,
    1003,
    1000,
    1001,
    1002,
    1001
};

int tipos[10]={
    5001,
    5003,
    5003,
    5001,
    5000,
    5002,
    5003,
    5000,
    5002,
    5002
};

float precios[10]={
    100000,
    65000,
    50000,
    90000,
    150000,
    325000,
    47500,
    195000,
    265000,
    475000
};

int idNotebooks[10]={
    100,
    101,
    102,
    103,
    104,
    105,
    106,
    107,
    108,
    109

};


int idServicios[20]={
    20003,
    20000,
    20002,
    20001,
    20003,
    20003,
    20002,
    20000,
    20000,
    20001
};

eFecha fechas[10]={
    {17,02,2020},
    {10,01,2021},
    {1,10,2019},
    {27,05,2020},
    {20,02,2019},
    {14,05,2021},
    {30,9,2020},
    {07,05,2015},
    {21,9,2020},
    {10,12,2020},

};
int idClientes[10]={
    3000,
    3001,
    3002,
    3003,
    3004,
    3005,
    3006,
    3007,
    3008,
    3009

};

#endif // DATAWAREHOUSE_H_INCLUDED
