#ifndef HARCODEO_H_INCLUDED
#define HARCODEO_H_INCLUDED
#include "cliente.h"



#endif // HARCODEO_H_INCLUDED
/** \brief carga trabajos
 *
 * \param lista[] eTrabajo array de trabajos
 * \param tam int tamanio del array
 * \param cant int cantidad que quiero cargar
 * \param pIdTrabajo int* putero a los id de trabajos del main
 * \return int devuelve 1 si pudo cargar
 *
 */
int harcodearTrabajos(eTrabajo lista[], int tam , int cant, int* pIdTrabajo);
/** \brief carga notebooks
 *
 * \param lista[] eNotebook array de notebooks
 * \param tam int tamanio del array
 * \param cant int cantidad que quiero cargar
 * \param pIdTrabajo int* putero a los id de notebooks del main
 * \return int devuelve 1 si pudo cargar
 *
 */
int harcodearNOtebooks(eNotebook lista[], int tam , int cant, int* pIdNotebook);



int hardcodearCLiente(eCliente lista[], int tam, int cant , int* pIdCliente);
