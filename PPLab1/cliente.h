#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
typedef struct{
int id;
int nombre[25];
char sexo;
int isEmpty;
}eCliente;


#endif // CLIENTE_H_INCLUDED
int cargarNombre(int id, eCliente lista[], int tam, char desc[]);
int initCliente(eCliente lista[], int tam);

