#include  <stdio.h>
#include "AM_Graph.h"

int main(void) {

	int size;
	printf("Enter size of graph: ");
	scanf("%d" , &size);
	Graph my_graph = CreateGraph(size);
	DisplayGraph(my_graph);

	char ch;
	while((ch = getchar()) != 'E') {
		if (ch == 'I') {
			InsertEdge(my_graph);
		} else if (ch == 'S') {
			DisplayGraph(my_graph);
		} else if (ch == 'D') {
			RemoveEdge(my_graph);
		} else if (ch == 'H') {
			printf("\nWelcome to the graph interface\n");
			printf("------------------------------\n");
			printf("I = Insert an edge into the graph\n");
			printf("D = Delete an edge from the graph\n");
			printf("S = Display the entire graph\n");
			printf("H = Help interface\n");
			printf("------------------------------\n");
		}
	}
	FreeGraph(my_graph);
	
}
