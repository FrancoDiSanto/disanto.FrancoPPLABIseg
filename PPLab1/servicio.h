#ifndef SERVICIO_H_INCLUDED
#define SERVICIO_H_INCLUDED

typedef struct{
int id; //comienza en 20000)
char descripcion[25]; // (máximo 25 caracteres)
float precio;

}eServicio;

#endif // SERVICIO_H_INCLUDED

/** \brief recorre el array de servicios y llama a mostrarservicio
 *
 * \param lista[] eServicio array de servicios
 * \param tams int tamanio del array de servucios
 * \return void
 *
 */
void mostrarServicios(eServicio lista[], int tams);
/** \brief recibe una posicion del array de servicios y la muestra
 *
 * \param servicio eServicio indice i del array de servicios
 * \return void
 *
 */
void mostrarServicio(eServicio servicio);
/** \brief recibe un id de servicio y carga en una cadena la descripcion de ese servicio
 *
 * \param id int id del servicio a buscar
 * \param servicios[] eServicio aray de servicios
 * \param tam int tamanio del array de servicios
 * \param desc[] char cadena donde cragar la descripcion del servicio a byuscar
 * \return int devuelve 1 si lo pudo carfar
 *
 */
int cargarDescripcionServicio(int id, eServicio servicios[], int tam, char desc[]);
/** \brief valida que el id del servicio ingresado exista
 *
 * \param id int id ingresado
 * \param lista[] eServicio array de servicios
 * \param tam int tamanio del array de servicios
 * \return int devuelve 1 si ese servicio existe
 *
 */
int validarIDServicio(int id, eServicio lista[], int tam);
