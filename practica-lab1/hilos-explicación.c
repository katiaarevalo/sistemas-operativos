#include <stdio.h>
#include <pthread.h>

/* Un Hilo necesita de las siguientes cosas;

    1. Identificador del Hilo ("su nombre")
    2. Sus atributos (sino quieres especificar pon NULL)
    3. Su función ("Nombre de la función")
    4. El argumento que quieres pasar (Sino ingresa nada entonces es NULL) */ 


/*       --------     (1)  IDENTIFICO LOS HILOS      ---------       */

pthread_t miPrimer_hilo;            // AQUÍ LE DI UN IDENTIFICADOR A MI HILO (Un nombre, vaya.)



/*    ---------      (2)   CREANDO LOS HILOS         ----------        */

pthread_create(&miPrimer_hilo, NULL, miFuncion, NULL);
/*
    DONDE:          
    1.          &miPrimer_hilo      --->    Identificador del hilo.
    2.          NULL                --->    Atributos especificos, en caso de no especificar poner NULL.
    3.          miFuncion           --->    Puntero hacia la función va a ejecutar el hilo.
    4.          NULL                --->    Tipo de dato que recibe, sino recibe alguno entonces es NULL. 

*/


/*    ---------      (3)   EJECUTAR LOS HILOS         ----------     

    Basicamente lo que se realiza en este momento es decirle que espere la ejecución
    de los hilos en pthread_join termine para que continue la ejecución del hilo
    principal.                                                                           */
//

pthread_join (miprimer_hilo, NULL);
/*
    DONDE:
    1.          miprimer_hilo ---> identificador del hilo. 
    2.          NULL ---> Espacio para guardar dato recibidao en caso de ser necesario.
*/

//  ¡¡¡ RECORDATORIO  !!!
// TODO LO ANTERIOR VA DENTRO DEL int main(){}



/*      -----        (!) FUNCIÓN PARA HILOS (!)          ------  */
//                    Va antes del int main()

void *miFuncion (void *arg){
    Aqui escribo mi funcion
    codigo

    pthread_exit(NULL);
}