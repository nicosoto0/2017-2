/*
Este es un archivo .h (HEADER FILE). En estos archivos va la declaración de
los distintos tipos y funciones que quieres que sean visibles para el resto
del programa (algo asi como las cosas "públicas"). Aquí no hay codigo que
pueda ser ejecutado, pero es importante para que el resto del programa conozca
a que tiene acceso. Como estándar, nunca se importa un archivo .c, solo deben
importarse los archivos .h entre ellos o desde un archivo .c. La Makefile	se
encarga de que todo funcione correctamente siempre y cuando sigas ese estándar.
*/

/****************************************************************************/
/*                            Lista Ligada                                  */
/*                                                                          */
/* Una lista simplemente ligada para almacenar numeros enteros              */
/****************************************************************************/

// Indica que las cosas de este archivo deben declararse una sola vez
#pragma once


/****************************************************************************/
/*                                Tipos                                     */
/****************************************************************************/
/** Representa un nodo de una lista */
struct list_node;
/** Representa un nodo de una lista */
typedef struct list_node Node;

struct list_node
{
	/** Valor insertado en el nodo */
	int val;
	/** Siguiente nodo en la lista */
	Node* next;
};


/** Lista simplemente ligada para almacenar numeros enteros */
struct linked_list;
/** Lista simplemente ligada para almacenar numeros enteros */
typedef struct linked_list List;

struct linked_list
{
	/** Primer elemento de la lista */
	Node* head;
	/** Último elemento de la lista */
	Node* tail;
	/** Cantidad de elementos en la lista */
	int count;
};

/****************************************************************************/
/*                               Funciones                                  */
/****************************************************************************/

// Aquí van solo las funciones de la lista ya que son esas las que se usan afuera

/** Inicializa una lista vacía */
List* list_init();
/** Inserta un número a la lista */
void  list_insert(List* list, int value);
/** Imprime los elementos de la lista */
void  list_print(List* list);
/** Libera todos los recursos asociados a esta lista */
void  list_destroy(List* list);
