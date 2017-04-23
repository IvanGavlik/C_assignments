#include <stdio.h>
#include <stdlib.h>

/* 
Napisati program za izvlaèenje 7 sluèajnih brojeva u intervalu od 1 do 39.
Brojevi se ne smiju ponavljati.
*/

int isInRange1To39(int number);
int isNotInNiz(int *niz,int numOfEl,int number);
void print(int *niz, int numOfEl);

int main() {
	int niz[7];	
	int random = 0, i = 0;
	
	printf("generiranje 7 nasumicnih brojeva: \n");
	do {
	
		random = isInRange1To39((rand() % 40));
			
		if(isNotInNiz(niz,7,random)) {
			niz[i] = random;
			printf(" \t .... genneriran %d. broj \n", (i+1));
			i++;	
		}
		
	} while (i < 7);

	print(niz,7);
	return 0;
}

int isInRange1To39(int number) {
	if(number >= 1 && number <= 39) {
		return number; 
	}
	return 0;
}

int isNotInNiz(int *niz,int numOfEl,int number) {
	int index; 	
	for(index = 0 ; index < numOfEl; index++) {
		if(number == niz[index]) {
			return 0;
		}
	}
	return 1;	
}

void print(int *niz, int numOfEl) {

	int index; 	
	for(index = 0 ; index < numOfEl; index++) {
		printf("%d ", niz[index]);
	}
	
}
