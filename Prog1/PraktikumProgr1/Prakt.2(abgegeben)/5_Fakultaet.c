#include <stdio.h>


int main(void){
	unsigned int Eingabe;
	int Erg;

	//Fakultät berechnen bed. Anweisung
	/*
	int fak(int x){
		if(x>1){
			return x*fak(x-1);
		}
		else{
			return 1;
		}
		return 0;
	}
	*/

	//Fakultät berechnen bed Ausdruck
	int FAK(int x){
		return x>1?x*FAK(x-1):1;
	}

	//Eingabe einlesen
	printf("Bitte einen positiven Integer eingeben...\n");
	scanf("%d", &Eingabe);
	//Fakult
	Erg = FAK(Eingabe);
	printf("%d! = %d", Eingabe, Erg);



	return 0;
}

