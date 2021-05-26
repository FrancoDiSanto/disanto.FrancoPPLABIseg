#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED
#include "fecha.h"
#include "servicio.h"
#include "notebook.h"
typedef struct{
int id; // (autoincremental)
int idNotebook; // (debe existir) Validar
int idServicio; // (debe existir) Validar
eFecha fecha; // ( Validar día, mes y año )
int isEmpty;
}eTrabajo;


#endif // TRABAJO_H_INCLUDED
/** \brief coloca el campo isEmpty del array de trabajos en 0
 *
 * \param listt[] eTrabajo array de trabajos
 * \param tam int tamanio del aray de trabajos
 * \return int devueve 1 si pudo hacerlo
 *
 */
int initTrabajos(eTrabajo listt[], int tam);

/** \brief recorre el array de trabajos y llama a mostrartrabajo en cada iteracion
 *
 * \param works[] eTrabajo array de trabajos
 * \param tamw int tamanio del arya de trabajos
 * \param services[] eServicio array de servicios
 * \param tams int  tamanio del array de servicios
 * \param noteb[] eNotebook array de notebooks
 * \param tam int tamanio del array de notebooks
 * \return void
 *
 */
void mostrarTrabajos(eTrabajo works[], int tamw, eServicio services[], int tams, eNotebook noteb[], int tam);
/** \brief recibe una posicion del array de trabajos para ser mpstrada
 *
 * \param unTrabajo eTrabajo indice i del array de trabajos
 * \param servicios[] eServicio array de servicios
 * \param tams int tamanio del array de servicios
 * \param notebooks[] eNotebook array de notebooks
 * \param tamn int tamanio del array de notebooks
 * \return void
 *
 */
void mostrarTrabajo(eTrabajo unTrabajo, eServicio servicios[], int tams, eNotebook notebooks[], int tamn);
/** \brief da de alta un trabajo con los datos ingresados por el ususario
 *
 * \param noteb[] eNotebook array de notebooks
 * \param tam int tamanio del array de  notebooks
 * \param marc[] eMarca array de marcas
 * \param tamm int tamanio del array de marcas
 * \param types[] eTipo array de tipos
 * \param tamt int tamanio del array de tipos
 * \param trabajos[] eTrabajo array de trabajos
 * \param tamtrab inttamanio del array de trabaojs
 * \param services[] eServicio array de servicios
 * \param tams int tamanio del array de servicios
 * \param pNuevoTrabajo int* puntero a main de id de trabajo
 * \return int devuelve 1 si se pudo dar de alta un tabajo
 *
 */
int altaTrabajo(eNotebook noteb[],int  tam,eMarca marc[],int tamm ,eTipo types[] , int tamt,eTrabajo trabajos[], int tamtrab, eServicio services[], int tams, int* pNuevoTrabajo, eCliente clients[], int tamc);
/** \brief recorre el array de trabajos y devuleve una posicion libre
 *
 * \param lista[] eTrabajo array de trabajos
 * \param tam int tamanio del array de trabajos
 * \return int devuelve el indice del lugar libre
 *
 */
int buscarLibreTrabajo(eTrabajo lista[], int tam);
