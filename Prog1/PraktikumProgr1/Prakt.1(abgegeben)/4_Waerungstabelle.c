/*Preitenwieser Lukas _ Währungstabelle der Werte 1,2,5,10,20,50,100*/

#include <stdio.h>

#define KURS_EURO_USD 1.06
#define KURS_USD_EURO 0.94

int main(void){
	double Werte[7] = {1.0, 2.0, 5.0, 10.0, 20.0, 50.0, 100.0};

	/*Euro in USD*/
	printf("Euro\t\tUSD\n");
	for(int i=0; i<7; i++){
		double Euro = Werte[i];
		double USD = Werte[i]*KURS_EURO_USD;
		printf("%.2f\t\t%.2f \n", Euro, USD);
	}

	printf("\n\nUSD\t\tEuro\n");
	for(int i=0; i<7; i++){
		double USD = Werte[i];
		double Euro = Werte[i]*KURS_USD_EURO;
		printf("%.2f\t\t%.2f \n", Euro, USD);
	}
	return 0;
}

