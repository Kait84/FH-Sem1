#include <stdio.h>

#define bool int
#define true 1
#define false 0

int Implication(bool Wert1, bool Wert2){
	if(Wert1==0){
		return 1;
	}
	else{
	   return Wert2==0 ? 0 : 1;
	}
	return 0;
}

int Equivalence(bool Wert1, bool Wert2){
	if(Implication(Wert1, Wert2) == Implication(Wert2, Wert1)){
        return 1;
	}
	else{
        return 0;
	}
	return 0;
}

int main(void){
	bool Wahrhwert1, Wahrhwert2;

	//Wahrheitswerte einlesen
	printf("Geben sie den ersten Wahrheitswert ein...\n");
	scanf("%d", &Wahrhwert1);
	printf("Geben sie den zweiten Wahrheitswert ein...\n");
	scanf("%d", &Wahrhwert2);
	if((Wahrhwert1 != 0 && Wahrhwert1 !=1)||(Wahrhwert2!=0 && Wahrhwert2 != 1)){
        printf("Sie haben einen falchen Wert eingegeben\n");
        return -1;
	}


	//Implikation auf Wahrheitswerte anwenden
	printf("\n%d  => %d = \%d \n", Wahrhwert1, Wahrhwert2, Implication(Wahrhwert1, Wahrhwert2));

	//Aquivalenz auf Wahrheitswerte anwenden
	printf("%d <=> %d = \%d \n", Wahrhwert1, Wahrhwert2, Equivalence(Wahrhwert1, Wahrhwert2));


	//Implikationstabelle ausgeben
	printf("\n\nImplikationstabelle\nA    B   A=>B\n");
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			printf("%d => %d = \%d \n", i, j, Implication(i, j));
		}
	}

	//Äquivalenztabelle ausgeben
	printf("\n\nAequivalentztabelle\nA    B   A<=>B\n");
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			printf("%d => %d = \%d \n", i, j, Equivalence(i, j));
		}
	}

	return 0;
}

