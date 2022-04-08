#include "graphs.h"

/**
 * graph_create - allocates memory to store a graph_t structure, and
 * initializes its content
 * Return:  pointer to struct
 */
graph_t *graph_create(void)
{
	graph_t *graph;

	graph = malloc(sizeof(graph_t));
	if (graph == NULL)
		return (NULL);
	graph->nb_vertices = 0;
	graph->vertices = NULL;
	return (graph);
}
