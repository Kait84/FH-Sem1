#include <stdio.h>

int main(void){
	int eingabe;
	int counter = 0;
	double Summe = 0;

	printf("Bitte Zahlen eingeben... \n");
	while(eingabe!=0){
        scanf("%d", &eingabe);
        Summe +=eingabe;
        counter++;
	}
	printf("Summe: %.2f \n", Summe);
	printf("Mittelwert: %.2f \n", Summe/counter);

	return 0;
}

