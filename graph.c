#include <stdio.h>

#define V 3

int main() {
    int graph[V][V] = {
        {0, 1, 1},
        {1, 0, 0},
        {1, 0, 0}
    };

    int i, j;

    printf("Graph (Adjacency Matrix):\n");
    for(i = 0; i < V; i++) {
        for(j = 0; j < V; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    return 0;
}
