#include <stdio.h>
#include <string.h>

/*
Schreiben Sie ein Programm, das eine Textdatei kopiert und dabei alle Leerzeichen
entfernt und alle Buchstaben in Groﬂbuchstaben umwandelt. ÷ffnen Sie die zu
kopierende Datei lesend mit fopen und die neue Datei schreibend mit fopen. Kopieren
Sie zeichenweise unter Verwendung der Funktionen fgetc und fputc.
*/
#define reclength 255

int main(void){
    int i;
    char recstring[reclength], string[reclength] = {};
    FILE *fr, *fw;
    fr = fopen("test.txt", "r");
    fw = fopen("newfile.txt", "w");

    //read file and write manipulated string to array
    if(fr == NULL){
        return 0;
    }else{
        //read character by character
        for(i=0; i<reclength && recstring[i] != EOF; i++){
            recstring[i] = toupper(fgetc(fr));
        }
        //remove spaces and write to file
        for(i=0; i<reclength && recstring[i] != EOF; i++){
            if(recstring[i] != ' '){
                fputc(recstring[i], fw);
            }
        }
    }
    fclose(fr);
    fclose(fw);


	return 0;
}

