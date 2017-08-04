/* Importa el módulo standard de Input / Output */
#include <stdio.h>
/* Importa la librería estándar de C */
#include <stdlib.h>
/* Importa nuestro hermoso módulo de listas */
#include "list/list.h"

/* Función que se llama al ejecutar el programa, esta vez recibe parámetros */
/* argc = Argument Count */
/* argv = Argument Value */
int main(int argc, char* argv[])
{
	/* El primer argumento siempre es el nombre del programa */
  if(argc == 1)
  {
    /* No recibió argumentos, lo cual es un error */
    fprintf(stderr, "Modo de uso:\n");
    fprintf(stderr, "%s <list length>\n", argv[0]);

    /* El programa terminó con un error, al que se le asignará el código 1 */
    return 1;
  }

	/* Creamos una lista de largo especificado por el primer parametro del programa */
	/* ATOI: STRING TO INTEGER. Los parametros vienen como texto, hay que convertirlos */
	int length = atoi(argv[1]);

	/* Inicializamos la lista */
	List* list = list_init();

	/* La llenamos con cuadrados */
	for(int i = 0; i < length; i++)
	{
		list_insert(list, i*i);
	}

	/* Imprimimos el contenido de la lista */
	list_print(list);

	/* Liberamos la memoria de la lista */
	list_destroy(list);

	return 0;
}
