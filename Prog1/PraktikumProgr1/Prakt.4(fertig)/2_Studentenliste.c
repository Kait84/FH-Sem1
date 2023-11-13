#include <stdio.h>
#include <string.h>

#define MAXV 10
#define MAXN 30
#define MAXL 5

#define bool int
#define true 1
#define false 0

typedef struct{
	unsigned int 	matrikelnummer;
	unsigned char 	fachsemester;
	char 			vorname[MAXV];
	char 			nachmane[MAXN];
}student;

void init(student sl[MAXL]){
    int i;
    for(i=0; i<MAXL; i++){
        sl[i].matrikelnummer = 0;
        sl[i].fachsemester = '0';
        strcpy(sl[i].vorname, "n.n.");
        strcpy(sl[i].nachmane, "n.n.");
    }
    return;
}

void print(student sl[MAXL]){
    int i;
    for(i=0; i<MAXL; i++){
        printf("Student: %d \n", i);
        printf(" Matrikelnummer:\t\t%d \n Fachsemester:\t\t\t%c \n Vorname:\t\t\t%s \n Nachname:\t\t\t%s \n\n", sl[i].matrikelnummer, sl[i].fachsemester, sl[i].vorname, sl[i].nachmane);
    }
    return;
}

void eingeben(student sl[MAXL]){
    int i;
    for(i=0; i<MAXL; i++){
        if(sl[i].matrikelnummer == 0){
            printf("\nBitte Matrikelnummer eingeben...\n");
            scanf("%d", &sl[i].matrikelnummer);
            printf("\nBitte Fachsemester eingeben...\n");
            scanf(" %c", &sl[i].fachsemester);
            printf("\nBitte Vorname eingeben...\n");
            scanf("%99s", &sl[i].vorname);
            printf("\nBitte Nachname eingeben...\n");
            scanf("%99s", &sl[i].nachmane);
            return;
        }
    }
    printf("Es konnte kein freier Platz erkannt werden!\nEs konnten keine weiteren Studenten in die Liste aufgenommen werden\n");
    return;
}

void suchen(student sl[MAXL]){
    int i;
    char nachname[MAXN];
    printf("\nBitte Nachnamen eingeben...\n");
    scanf("%s", &nachname);
    for(i=0; i<MAXL; i++){
        if(strcmp(sl[i].nachmane, nachname)==0){
            printf("Student ist in der Liste enthalten\n");
            return;
        }
    }
    printf("Student ist nicht in der Liste enthalten\n");
    return;
}


void loeschen(student sl[MAXL]){
    int i;
    char nachname[MAXN];
    printf("\nBitte Nachnamen eingeben...\n");
    scanf("%s", &nachname);
    for(i=0; i<MAXL; i++){
        if(strcmp(sl[i].nachmane, nachname)==0){
            sl[i].matrikelnummer = 0;
            sl[i].fachsemester = 0;
            strcpy(sl[i].vorname, "n.n.");
            strcpy(sl[i].nachmane, "n.n.");
            return;
        }
    }
    printf("Student ist nicht in der Liste enthalten\n");
    return;
}

int main(void){
    student sl[MAXL];
    //Werte einlesen
    unsigned int eingabe;

    while(eingabe!=9){
        printf("Bitte waehlen Sie: \n \
            1\t\t\tStudent eingeben  \n \
            2\t\t\tStudent suchen  \n \
            3\t\t\tStudent loeschen \n \
            4\t\t\tListe drucken \n \
            5\t\t\tListe initialisieren \n \
            9\t\t\tProgramm beenden \n");

        scanf("%d", &eingabe);

        switch(eingabe){
            case 1:
                eingeben(sl);
                break;
            case 2:
                suchen(sl);
                break;
            case 3:
                loeschen(sl);
                break;
            case 4:
                print(sl);
                break;
            case 5:
                init(sl);
                break;
            case 9:
                return 0;
        }
    }

	return 0;
}
