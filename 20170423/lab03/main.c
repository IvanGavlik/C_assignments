#include <stdio.h>
#include <stdlib.h>

/* 
Napisati program za izvlaèenje 7 sluèajnih brojeva u intervalu od 1 do 39.
Brojevi se ne smiju ponavljati.
*/

void input7NumbersForLoto(int *niz,int numOfEl);
void generateLoto(int *niz,int numOfEl);
int isInRange1To39(int number);
int isNotInNiz(int *niz,int numOfEl,int number);
void checkHowManyGuessYouHave(int *user,int *loto,int numOfEl);
void print(int *niz, int numOfEl);

int main() {

	printf("######## Loto #########\n"); 
	int unos = 0;
	do {
		game();	
		
		printf("\n Unseite 1 za novu igru, bilo koji drugi broj za kraj !");
		scanf("%d", &unos);	
	} while(unos == 1); 

	printf("######### kraj #########");

	return 0;
}

void game() {
	
	int loto[7] = {0,0,0,0,0,0,0,0}, userInput[7] = {0,0,0,0,0,0,0,0};	
	
	input7NumbersForLoto(userInput,7);		
	generateLoto(loto,7);
	checkHowManyGuessYouHave(userInput,loto,7);
	
	
	printf("\n Loto 7/39 \n");
	print(loto,7);	

}

void input7NumbersForLoto(int *niz,int numOfEl)  {
	int index = 0, unos = 0; 	

	do {
		printf("Unesite %d. broj za loto 7/39 ", (index+1));
		scanf("%d", &unos);
		
		unos = isInRange1To39(unos);
			
		if(isNotInNiz(niz,7,unos)) {
			niz[index] = unos;
			index++;	
		}
		else {
			printf("\nPogresan unos (broj nije u rasponu od 1 do 39 ili ste vec unjeli ovaj broj) ! \n");
		}
		
	} while (index < 7);
	
}

void generateLoto(int *niz,int numOfEl) {
	int random = 0, i = 0;
	do {
		random = isInRange1To39((rand() % 40));
			
		if(isNotInNiz(niz,7,random)) {
			niz[i] = random;
			i++;	
		}
		
	} while (i < 7);
}

int isInRange1To39(int number) {
	if(number > 0 && number < 40) {
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
void checkHowManyGuessYouHave(int *user,int *loto,int numOfEl) {
	int guess = 0,i = 0, tempNumber = 0, j = 0;
	
	for(; i < numOfEl; i++) {	
		tempNumber = user[i];	
		
		for(j = 0; j < numOfEl; j++ ) {
			if(user[i] == loto[j]) {
				guess +=1; 	
			} 	
		}		
	}
	
	if(guess > 0) {
		printf("Cestitamo imate %d pogodaka", guess);	
	} else {
		printf("Nazalost niste ništa pogodili .Vise srece drugi put \n");
	}
}



void print(int *niz, int numOfEl) {

	int index; 	
	for(index = 0 ; index < numOfEl; index++) {
		printf("%d ", niz[index]);
	}
	
}
