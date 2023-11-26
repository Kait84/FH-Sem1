#include <stdio.h>

void Addierung(){
    int counter, ergebnis, eingabe;
    counter = 0;
	ergebnis = 0;
	printf("Geben Sie mindestens zwei Zahlen ein, die addiert werden sollen:\n");
    do{
        if(scanf("%d", &eingabe) == 1){
            ergebnis += eingabe;
            counter++;
        }else{
            printf("Sie haben einen falsen Wert eingegeben \n");
            break;
        }
	}while(eingabe != NULL);
	if(counter<3){
        printf("Sie haben zu wenig Zahlen eingegeben!\n");
	}else{
	    printf("Die Summe der Eingabe ist %d", ergebnis);
	}
}

int main(void){
	Addierung();
	return 0;
}

