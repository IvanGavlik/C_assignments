#include <stdio.h>
#include <stdlib.h>

/* 
Deklarirajte niz od 16 brojeva s pomi�nim zarezom jednostruke to�nosti, te prvih 8 inicijalizirajte unosom od korisnika,
 a drugih 8 postavite na njihove duple iznose (deveti �lan duplo ve�i od prvog, deseti duplo ve�i od drugog itd.). 
Ispi�ite cijeli ovako inicijalizirani niz po�ev�i od posljednjeg �lana prema prvom.
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
