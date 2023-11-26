#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define bool int
#define true 1
#define false 0

bool ist_anagramm(char *s1, char *s2){
    int i, size_s1, size_s2;
    size_s1 = strlen(s1);
    size_s2 = strlen(s2);

    if(size_s1 != size_s2){
        return false;
    }
    else{
        int count1[265], count2[265];
        //alle Buchstaben zu lowercase convertieren
        for(i=0; i<size_s1; i++){
            s1[i] = tolower(s1[i]);
            s2[i] = tolower(s2[i]);
        }
        for(i=0; i<265; i++){
            count1[i] = 0;
            count2[i] = 0;
        }
        //Das Vorkommen jedes Buchstabens speichern
        for(i=0; i<size_s1; i++){
            count1[s1[i]]++;
            count2[s2[i]]++;
        }
        //überprüfen ob jedes Zeichen gleich ist
        for(i=0; i<265; i++){
            if(count1[i] == count2[i]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
}

int main(void){
	char s1[100], s2[100];

	printf("Bitte erste Zeichenkette eingeben: \n");
    scanf("%99s", &s1[0]);

	printf("\nBitte zweite Zeichenkette eingeben: \n");
	scanf("%99s", &s2[0]);

    if(ist_anagramm(s1, s2)){
        printf("\nDie Zeichenketten SIND Anagramme voneinander!");
    }else{
        printf("\nDie Zeichenketten sind KEINE Anagramme voneinander!");
    }

	return 0;
}

