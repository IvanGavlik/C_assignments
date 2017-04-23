#include <stdio.h>
#include <stdlib.h>

/* 
Deklarirajte niz od 16 brojeva s pomiènim zarezom jednostruke toènosti, te prvih 8 inicijalizirajte unosom od korisnika,
 a drugih 8 postavite na njihove duple iznose (deveti èlan duplo veæi od prvog, deseti duplo veæi od drugog itd.). 
Ispišite cijeli ovako inicijalizirani niz poèevši od posljednjeg èlana prema prvom.
 */

int main(void) {
	
	float input = 0, input2;
	float niz[16];	
	int i = 0, j = 0;
	for(; i < 16; i++) {	
		if(i <= 7) {
			scanf("%f", niz[i]);		
		} else {
			niz[i] = niz[i-8] * 2;	
		}
		
	}

	printf("ISPIOS NIZ");	
	for(; j < 16; j++ ) {		
		printf("%2.f " ,niz[j]);	
	}

	return 0;
}
