#include <stdio.h>
#include <stdlib.h>

/* 
Deklarirajte niz za pohranu 7 slova i inicijalizirajte ga unosom od korisnika. 
Nakon unosa prona�ite u nizu svako ponavljanje nekog slova, te ga ispi�ite na zaslon. 
Ukoliko se niti jedno slovo ne ponavlja, ispi�ite znak *.

Npr.
Niz 	Ispis
abandon 	n
rupture 	ru
consult 	*

Opaska: nije rije� o stringovima, ve� "obi�nim" nizovima od 7 �lanova tipa char.
 */

// deklaracija i inicializacija niz 
void intNiz(char *niz,int el);
// ponavljanje slova u nizu 
void ponSlovaUNizu(char *niz, int el);

int main(void) {	
	char niz[7];

	intNiz(niz,14);	
	
	printf("\n ispis niza \n");
	int i;	
	for(i = 0; i < 7; i++) {	
		printf("%c ",niz[i]);
			
	}	
	
	return 0;
}

void intNiz(char *niz, int el) {
	char  a = 'a';
	int i = 0;
	for (; i< el; i++ ) {
	   printf("Enter character: ");
   		niz[i] = getchar();			
   		
   }
	
}
