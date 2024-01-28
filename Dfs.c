#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

int visited[MAX_VERTICES];  
int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES]; 
void depthFirstTraversal(int vertex, int vertices) {
    visited[vertex] = 1; 
    printf("%d ", vertex);
    for (int i = 0; i < vertices; i++) {
        if (adjacencyMatrix[vertex][i] == 1 && !visited[i]) {
            depthFirstTraversal(i, vertices);  
        }
    }
}

int main() {
    int vertices;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);
    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            scanf("%d", &adjacencyMatrix[i][j]);
        }
    }
    for (int i = 0; i < vertices; i++) {
        visited[i] = 0;
    }
    printf("Depth First Traversal starting from vertex 0: ");
    depthFirstTraversal(0, vertices);

    return 0;
}


