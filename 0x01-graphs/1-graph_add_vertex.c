#include "graphs.h"

/**
 * init_vertex - sadf
 * @str: asdf
 * @index: asdf
 * Return: asdf
 **/
static vertex_t *init_vertex(const char *str, size_t index)
{
	vertex_t *nuevo = NULL;

	nuevo = malloc(sizeof(vertex_t));
	if (!nuevo)
		return (NULL);
	nuevo->content = strdup(str);
	nuevo->nb_edges = 0;
	nuevo->edges = NULL;
	nuevo->next = NULL;
	nuevo->index = index;
	return (nuevo);
}

/**
 * graph_add_vertex - sadf
 * @graph: asdf
 * @str: sadf
 * Return: asdf
 **/
vertex_t *graph_add_vertex(graph_t *graph, const char *str)
{
	vertex_t **nuevo;

	if (!graph || !str)
		return (NULL);
	nuevo = &graph->vertices;
	while (*nuevo != NULL)
	{
		if (strcmp(str, (*nuevo)->content) == 0)
			return (NULL);
		nuevo = &(*nuevo)->next;
	}
