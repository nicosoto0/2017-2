/*
Esto es un archivo .c, aquí va el código en sí, la definición de las funciones
del .h, y quizas incluso funciones internas de este módulo (funciones privadas)
*/

// Importamos la librería estándar de C
#include <stdlib.h>
// Importamos el módulo estándar de I/O
#include <stdio.h>
// Importamos las definiciones de la lista
#include "list.h"

// STATIC quiere decir que solo puede ser usado dentro de este archivo (privado)

/** Inicializa un nodo */
static Node* node_init(int val)
{
	Node* node = malloc(sizeof(Node));
	node -> val = val;
	node -> next = NULL;
	return node;
}

/** Inicializa una lista vacía */
List* list_init()
{
	List* list = malloc(sizeof(List));
	list -> count = 0;
	list -> head = NULL;
	list -> tail = NULL;
	return list;
}

/** Inserta un número a la lista */
void  list_insert(List* list, int value)
{
	Node* new = node_init(value);
	if(list -> count == 0)
	{
		list -> tail = new;
		list -> head = new;
	}
	else
	{
		list -> tail -> next = new;
		list -> tail = new;
	}
	list -> count++;
}

/** Imprime los elementos de la lista */
void  list_print(List* list)
{
	// Hay muchas formas de recorrer una lista, y esta es una:
	// Recuerda que el for tiene 3 partes:
	// for(inicial; condición; final), lo cual es equivalente a
	// inicial;
	// while(condición)
	// {
	// 	/*
	//  Codigo
	//  */
	// 	final;
	// }
	// Por otro lado, la condicion es un valor numérico:
	// 0 o NULL es falso, cualquier otra cosa es verdadera
	for(Node* current = list -> head; current; current = current -> next)
	{
		printf("%d\n", current -> val);
	}
}

/** Destruye todos los nodos recursivamente a partir de este */
static void node_destroy_all(Node* node)
{
	if(node -> next)
	{
		node_destroy_all(node -> next);
	}
	free(node);
}

/** Libera todos los recursos asociados a esta lista */
void  list_destroy(List* list)
{
	node_destroy_all(list -> head);
	// Tail no hay por que destruirlo ya que fue destruido por head
	free(list);
}
