#include <stdio.h>

int FAK(long int x){
    return x>1?x*FAK(x-1):1;
}
int Binkoeff1(long int n, long int k){
    if(n>=k && n>0 && k>0){
        return FAK(n)/((FAK(k)*FAK(n-k)));
    }if(n==k || k==0){
        printf("\nBildung des Binominialkoeffizienten nicht moeglich!");
        return -1;
    }else{
        printf("\nSie haben einen falschen Wert fuer n oder k eingegeben!\nBinominialkoeffizient konnte nicht berechnet werden und\ndas Programm wird beendet...");
        return -2;
    }
}

int Binkoeff2(long int n,long int k){
    if(n==k || k==0){
        return 1;
    }else{
        return Binkoeff2(n-1, k-1)+Binkoeff2(n-1, k);
    }
}

int main(void){
	unsigned long int n, k;

	//Werte Einlesen
	printf("Bitte geben sie n ein...\n");
	scanf("%d", &n);
	printf("Bitte geben sie k ein...\n");
	scanf("%d", &k);

    //Binominalkoeffizient ausgeben
	//printf("\n(%d) \n(%d)\t = %d", n, k, Binkoeff2(n, k));
	printf("\n(%d) \n(%d)\t = %d", n, k, Binkoeff1(n, k));

	return 0;
}

