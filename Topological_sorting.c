#include <stdio.h>

int temp[10], k = 0;

void Topo_sort (int n, int indegree[10], int a[10][10]) {

	int i, j;

	for (i = 0; i < n; i++) {
		if (indegree[i] == 0) {
			indegree[i] = 1;
			temp[k++] = i;
		for (j = 0; j < n; j++) {
			if (a[i][j] == 1 && indegree[j] != -1)
				indegree[j]--;
			}
			i = 0;
			}
		}
}

int main () {

	int i, j, n, indegree[10], a[10][10];

	printf("\nEnter the number of vertices : ");
	 scanf("%d", &n);
	for (i = 0; i < n; i++)
		indegree[i] = 0;

	printf("\nEnter matrix : ");
	 for (i = 0; i < n; i++)
	  for (j = 0; j < n; j++) {
	  	scanf("%d", &a[i][j]);
	   	if (a[i][j] == 1)
	    	 indegree[j]++;
	  	}

	Topo_sort (n, indegree, a);

	if (k != n)
	 printf("\nTopological sorting not possible.");
		else {
			printf("\nThe topological order is ... \n");
			for (i = 0; i <= n; i++)
				printf("\t%d", temp[i]);
			}
 return 0;
}

