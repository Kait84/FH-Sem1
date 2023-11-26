#include <stdio.h>

#define bool int
#define true 1
#define false 0

#define MAX 5

bool is_in(int x, int f[], int *index){
	int i;
	for(i=0; i<MAX; i++){
		if(f[i]==x){
			index = (f+i);
			return true;
		}
	}
	return false;
}

int main(void){
	int x, *index;
	int feld[MAX] = {1,2,3,4,5};

	printf("Bitte geben sie eine Zahl ein: ");
	scanf("%d", &x);


	if(is_in(x, feld, index)){
		printf("%d ist im Feld und liegt in der Adresse: %x \n", x, &index);
	}else{
		printf("%d ist nicht im Feld", x);
	}
	return 0;
}

