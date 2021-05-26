#ifndef TIPO_H_INCLUDED
#define TIPO_H_INCLUDED

typedef struct{
int id; // comienza en 5000
char descripcion[20];
}eTipo;

#endif // TIPO_H_INCLUDED

/** \brief recorre el array de tipos llamando en cada iteracion a mostrar tipo
 *
 * \param tips[] eTipo array de tipos
 * \param tamt int tamanio del array de tipos
 * \return void
 *
 */
void mostrarTipos(eTipo tips[], int tamt);
/** \brief recibe una posicion del array de topos y   la muestra
 *
 * \param tipo eTipo indice i del array de tipos
 * \return void
 *
 */
void mostrarTipo(eTipo tipo);

/** \brief recibe un id de tpo y devuelve la descripcion de ese tipo
 *
 * \param id int id del tpo a buscar
 * \param tipos[] eTipo array de tipso
 * \param tam int tamanio del array de tipos
 * \param desc[] char cadena donde carga la descricion dep tipo
 * \return int devuelve 1 si ese tipo existe y lo pudo cargar
 *
 */
int cargarDescripcionTipo(int id, eTipo tipos[], int tam, char desc[]);
