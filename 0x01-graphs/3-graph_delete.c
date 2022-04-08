#include "graphs.h"

/**
 * graph_delete - asdf
 * @graph: sadf
 * Returns: asdf
 */
void graph_delete(graph_t *graph)
{
	vertex_t *nuevo, *tmp;
	edge_t *aux, *aux_tmp;

	if (!graph)
		return;
	nuevo = graph->vertices;
	while (nuevo)
	{
		free(nuevo->content);
		aux = nuevo->edges;
		while (aux)
		{
			aux_tmp = aux;
			aux = aux->next;
			free(aux_tmp);
		}
		tmp = nuevo;
		nuevo = nuevo->next;
		free(tmp);
	}
	free(graph);
}
