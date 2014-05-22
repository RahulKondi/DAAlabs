/*
01. DECALRE timespec VARIABLES
02. GET NUMBER OF ELEMENTS (&n)
03. CALL SRAND FUNCTION WITH ((unsigned)time(NULL)
04. RANDOMISE ARRAY (a[i] = rand()%20) AND PRINT EACH ELEMENT GENERATED, IMMEDIATELY

05. START TIMER

06. CALL sorting PROCEDURE WITH (0, n-1); n -> number of elements

07. STOP TIMER
08. CALCULATE DIFFERENCE ( (time_STOP.tv_sec * 1000000000 + time_STOP.tv_nsec)  -  (time_START.tv_sec * 1000000000 + time_START.tv_nsec) ) 

09. PRINT SORTED ARRAY
10. PRINT duration USING %e 
*/


#include <stdio.h>
#include <time.h>
#include <omp.h>

int main () {
	int n,
	struct timespec time_START, time_STOP;
	double duration;
	
	printf("\nEnter the number of elements : ");
	 scanf("%d", &n);

