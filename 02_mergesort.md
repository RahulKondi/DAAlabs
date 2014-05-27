/*
*** main ()

* -01. DECALRE timespec VARIABLES
* -02. GET NUMBER OF ELEMENTS (&n)
* -03. CALL SRAND FUNCTION WITH ((unsigned)time(NULL)
* -04. RANDOMISE ARRAY (a[i] = rand()%20) AND PRINT EACH ELEMENT GENERATED, IMMEDIATELY

* -05. START TIMER

* -06. CALL sorting PROCEDURE WITH (0, n-1); (LOW , HIGH)

* -07. STOP TIMER
* -08. CALCULATE DIFFERENCE ( (time_STOP.tv_sec * 1000000000 + time_STOP.tv_nsec)  -  (time_START.tv_sec * 1000000000 + time_START.tv_nsec) )

* -09. PRINT SORTED ARRAY
* -10. PRINT duration USING %e
*/


#include<stdio.h>
#include<time.h>
#include<omp.h>

int data_RAW[20], data_SORTED[20];

int main () {
	void merge_sort(int LOW, int HIGH);
	int number_elements, i;
	struct timespec time_START, time_STOP;
	double DURATION;

	printf("\nEnter the number of elements to be sorted: ");
	 scanf("%d", &number_elements);
	srand ((unsigned)time(NULL));
	printf("\nElements generated:");
	for (i = 0; i < number_elements; i++) {
		data_RAW[i] = rand() % 20;
		printf("\n%d", data_RAW[i]);
		}

clock_gettime (CLOCK_REALTIME, &time_START);
	merge_sort (0, number_elements - 1);
clock_gettime (CLOCK_REALTIME, &time_STOP);

	DURATION = ( (time_STOP.tv_sec * 1000000000 + time_STOP.tv_nsec) - (time_START.tv_sec * 1000000000 + time_START.tv_nsec) );

	printf("\nThe sorted order :");
	for (i = 0; i < number_elements; i++)
		printf("\t%d", data_RAW[i]);
	printf("\nDuration : %e", DURATION);

 return 0;
}

void merge_sort (int LOW, int HIGH) {
	
