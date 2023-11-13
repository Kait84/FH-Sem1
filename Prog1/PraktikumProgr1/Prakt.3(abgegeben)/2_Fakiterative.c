#include <stdio.h>

int fak(int x){
    int erg = 1;
    while(x>1){
        erg *= x;
        x--;
    }
    return erg;
}


int main(void){
    unsigned int eingabe;

	printf("Geben Sie eine Zahl ein: ");
	scanf("%d", &eingabe);

    printf("\n!%d = %d", eingabe, fak(eingabe));

	return 0;
}

