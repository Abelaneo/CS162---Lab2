#include <stdio.h>
#include <stdlib.h> //malloc()  
#include <string.h>

/*  ADD  
*      YOUR NAME:       
*      YOUR RECITATION TIME:
*/
       
/* Create a Car structure that contains the folowing
*   make (*char), year (int) and price (float)
*/
struct Car{
	
/*  COMPLETE (1)  */

};

/* A function to print the member fields of a Car struct */

void print_car (struct Car c) {
	printf("make: %s\n", c.make);
/*  COMPLETE (2)  */
	

}

void bubbleSort(void** arr, int n, int (*cmp) (void *a, void *b)){
	for( int i=(n-1); i>0; i--) {
		for( int j=0; j<i; j++) {
			if (cmp(arr[j], arr[j+1]) == 1) {
			//do the swap
				void* temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}	
	return;
}


/*  A function to compare two cars by price. 
*   It return's a value of 1 if the first car's price is greater 
*   otherwise return's a 0
*/
int compare_cars_price(void* a, void* b){	
	struct Car* ai = a, /*  COMPLETE (3)  */;
	if ( /*  COMPLETE (4)  */ ) 
		return 1;
	return 0;
}

int main(int argc, char const *argv[])
{
   /* This program store information about cars as records in a
      car array.  The cars can be sorted by price in increasing order   
   */

	int num_cars = 4;  // size of the car array	
	struct Car** car_arr = malloc(sizeof(struct Car*) * /*  COMPLETE (5)  */ );
	
	car_arr[0] = malloc(sizeof(struct Car));
	car_arr[0] -> make  = "Subaru Outback";
	car_arr[0] -> year  = 2020;
	car_arr[0] -> price  = 25999.99;
	
	car_arr[1] = malloc(sizeof(struct Car));
	car_arr[1] -> make  = "Ford Escape";
	car_arr[1] -> year  = 2017;
	car_arr[1] -> price  = 9500.0;
	
	car_arr[2] = malloc(sizeof(struct Car));
	car_arr[2] -> make  = "BMW";
	car_arr[2] -> year  = 2014;
	car_arr[2] -> price  = 18750.4;
	
	// Add one more car: Toyota Rav4, 2021, $28750.4 //
	
	car_arr[3] = /*  COMPLETE (6)  */
	
	

//before sorting
	printf("\nBefore Sorting \n");
	for (int i = 0; i < num_cars; ++i) {
		print_car(*(car_arr[i]));
	}
	// sort by price 
	bubbleSort((void**)car_arr, num_cars, /*  COMPLETE (7)  */ );
	
	//after sorting
	printf("\nAfter Sorting By Price\n");
	for (int i = 0; i < num_cars; ++i){
		/*  COMPLETE (8)  */
	}

    // free the memory for the car structs
	for (int i = 0; i < num_cars; ++i){
		free(car_arr[i]);
		car_arr[i] = NULL;
	}
	
	// free the memory for the array
	free(/*  COMPLETE (9)  */);
	car_arr = /*  COMPLETE (10)  */;

	return 0;
}
