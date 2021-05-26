#ifndef NOTEBOOK_H_INCLUDED
#define NOTEBOOK_H_INCLUDED
#include "marca.h"
#include "tipo.h"
#include "cliente.h"

typedef struct{
int id;
char modelo[20];
int idMarca;
int idTipo;

float precio;
int isEmpty;
int idCliente;

}eNotebook;

#endif // NOTEBOOK_H_INCLUDED
/** \brief coloca los is empty en 0
 *
 * \param listt[] eNotebook lista notebooks
 * \param tam int tamanio del arrray
 * \return int si pudo inicializar devuleve 1
 *
 */
int initNotebooks(eNotebook listt[], int tam);
/** \brief da de alta una notebook con los datos que ingreso el usuario
 *
 * \param noteb[] eNotebook arry de otebooks
 * \param tam int tamanio del array
 * \param marc[] eMarca array de marcas
 * \param tamm int tamanio del array de marcas
 * \param types[] eTipo array de tiops
 * \param tamt int tamanio del array de tipos
 * \param pIdNuevanotebook int* puntero a main de id de notebook
 * \return int devuelve 1 si udo dar de alta
 *
 */
int altaNotebook(eNotebook noteb[],int  tam,eMarca marc[],int tamm ,eTipo types[] , int tamt, int* pIdNuevanotebook, eCliente clients[], int tamc, int* pIdCliente  );
/** \brief  muestra  notebooks llamando a mostranotebook
 *
 * \param lista[] eNotebook array de notebooks
 * \param tam int tamanio del arry
 * \param marcas[] eMarca array de marcas
 * \param tamm int tamanio del array de manrcas
 * \param tipos[] eTipo array de tipos
 * \param tamt int tamanio del array de tipos
 * \return void
 *
 */
void mostrarNotebooks(eNotebook lista[], int tam, eMarca marcas[], int tamm, eTipo tipos[], int tamt, eCliente clients[], int tamc);
/** \brief  muestra una notebook
 *
 * \param unaNoteook eNotebook array de noeboks en el indice i
 * \param marcas[] eMarca array de marcas
 * \param tamm int tamanio del array de marcas
 * \param tipos[] eTipo array de tipos
 * \param tamt int tamanio de l array de tipos
 * \return void
 *
 */
void mostrarNotebook(eNotebook unaNoteook,eMarca marcas[], int tamm, eTipo tipos[], int tamt, eCliente clients[], int tamc);
/** \brief realiza una baja logica de una notebook
 *
 * \param lista[] eNotebook array d notebooks
 * \param tam int tamanio del attay de notebooks
 * \param marcass[] eMarca array de marcas
 * \param tamm int tamanio del array de marcas
 * \param tipos[] eTipo array de tipos
 * \param tamt int tamanio del array de ripos
 * \return int devuelve 1 si ppudo realizae la baja logica
 *
 */
int bajaNotebook(eNotebook lista[], int tam, eMarca marcass[], int tamm, eTipo tipos[], int tamt,eCliente client[], int tamc);
/** \brief realiza una modificacion a una notebook ingresada por el ususario
 *
 * \param lista[] eNotebook array de notebooks
 * \param tam int tamanio del array
 * \param marcass[] eMarca array de marcas
 * \param tamm int tamaniod del array de marcas
 * \param tipos[] eTipo array de tipos
 * \param tamt int tamanio del array de yipos
 * \return int devuelve 1 si pudo modificar la notebook
 *
 */
int modificarNotebook(eNotebook lista[], int tam, eMarca marcass[], int tamm, eTipo tipos[], int tamt, eCliente clients[], int tamc);
/** \brief busca un lugar libre en el array de notebooks
 *
 * \param lista[] eNotebook array de notebooks
 * \param tam int tamanio del array de notebooks
 * \return int devuelve el indice del lugar libre
 *
 */
int buscarLibre(eNotebook lista[],int tam);
/** \brief recibe un id y carga una descripcion
 *
 * \param id int id de la notebok
 * \param lista[] eNotebook array de notebooks
 * \param tam int tamanio del array de noteboks
 * \param modelo[] char array de modelos
 * \return int retorna 1 si lo encontro
 *
 */
int cargarModeloNotebook(int id, eNotebook lista[], int tam, char modelo[]);
/** \brief verifica si el id ingresdo es existente
 *
 * \param id int id a buscar
 * \param lista[] eNotebook array de notebooks
 * \param tam int tamanio del array
 * \return int devuelve 1 si ese id existe
 *
 */
int validarIDNotebook(int id, eNotebook lista[], int tam);
/** \brief agrupa las notebooks por marca y ordena por precio
 *
 * \param lista[] eNotebook array de notebooks
 * \param tam int tamanio del array de notebooks
 * \return void
 *
 */
void ordenarNotebook(eNotebook lista[], int tam);



int  mostrarNotebookTipo(eNotebook lista[],int tam,eMarca marcas[], int tamm, eTipo tipos[], int tamt, eCliente clients[], int tamc);
int  mostrarNotebookMarca(eNotebook lista[],int tam,eMarca marcas[], int tamm, eTipo tipos[], int tamt, eCliente clients[], int tamc);
