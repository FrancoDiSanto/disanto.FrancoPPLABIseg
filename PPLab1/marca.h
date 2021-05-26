#ifndef MARCA_H_INCLUDED
#define MARCA_H_INCLUDED


typedef struct{
int id; // comienza en 1000
char descripcion[20];

}eMarca;


#endif // MARCA_H_INCLUDED
/** \brief recorre el array de marcas y llama a mostrarmarca para mostar
 *
 * \param lista[] eMarca array de marcas
 * \param tam int tamanio del array
 * \return void
 *
 */
void mostrarMarcas(eMarca lista[], int tam);
/** \brief recibe un lugar del array de marcas y lo muestra
 *
 * \param marca eMarca indice i del array de marcas
 * \return void
 *
 */
void mostrarMarca(eMarca marca);

/** \brief recibe un id de marca y devuelve la descripion de ese id
 *
 * \param id int id que recibe
 * \param marcas[] eMarca array de marcas
 * \param tam int tamanio del array de narcas
 * \param desc[] char cadena donde caarga la descripcion
 * \return int devuelve uni si lo pudo cargar
 *
 */
int cargarDescripcionMarca(int id, eMarca marcas[], int tam, char desc[]);




