#include<stdio.h>
void main() {
	int lower = 0, upper = 200, step = 20;
	float celsius, fahr;

	printf("\tCelsius to Fahrenheit Temperature conversion\n");
	printf("\t--------------------------------------------\n");
	printf("\tCelsius\tFahrenheit\n"); 
	printf("\t-------------------\n");
	celsius = 0;
	while(celsius <= upper) {
		fahr = (9.0/5.0)*celsius + 32.0;
		printf("\t|%6.1f\t|%4.0f|\n", celsius, fahr);
		celsius+= step;
	}
	printf("\t--------------------\n");


}
