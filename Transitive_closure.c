#include <stdio.h>

int Warshall (int c[10][10], int n) {

	int k, i, j;

	for (k = 0; k < n; k++)
	 for (i = 0; i < n; i++)
		if (c[i][k] == 1)
		 for (j = 0; j < n; j++)
		 	c[i][j] = c[i][j] || c[k][j];
}

int main () {
	int n, i, j, c[10][10];
	printf("\nEnter the number of vertices : ");
	 scanf("%d", &n);

	printf ("\nEnter the matrix : \n");
	 for (i = 0; i < n; i++)
	  for (j = 0; j < n; j++)
	   scanf("%d", &c[i][j]);

	Warshall (c , n);

	printf("\nThe transitive closure is : ");
	 for (i = 0; i < n; i++)
	  printf("\t%d", c[i][j]);
 return 0;
}



