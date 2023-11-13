#include <stdio.h>
#include <time.h>

#define bool int
#define true 1
#define false 0


bool istSchaltjahr1(int i){
	if(i%4==0 && !(i%100==0 && !(i%400==0))){
		return 1;
	}
	else{
		return 0;
	}
}
bool istSchaltjahr2(int i){
	if((i%400==0 || !(i%100==0)) && (i%4==0)){
		return 1;
	}
	else{
		return 0;
	}
}

int main(void){
	time_t startzeit, endzeit;
	int Schaltjahre;


	//Ausführung istSchaltjahr1, best.d. Schaltjahre
	Schaltjahre = 0;
	time(&startzeit);
	for(int n=1; n<=1000000000; n++){
		if(istSchaltjahr1(n)){
			Schaltjahre++;
		}
	}
	time(&endzeit);
	printf("Anzahl Schaltjahre: %d\n", Schaltjahre);
	printf("ausfuehrungszeit istSchaltjahr1: %.2f \n", difftime(endzeit,startzeit));

	//Ausführung istSchaltjahr2, best.d. Schaltjahre
	Schaltjahre = 0;
	time(&startzeit);
	for(int n=1; n<=1000000000; n++){
		if(istSchaltjahr2(n)){
			Schaltjahre++;
		}
	}
	time(&endzeit);
	printf("Anzahl Schaltjahre: %d\n", Schaltjahre);
	printf("ausfuehrungszeit istSchaltjahr2: %.2f \n", difftime(endzeit,startzeit));

	return 0;
}

