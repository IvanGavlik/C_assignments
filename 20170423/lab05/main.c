#include <stdio.h>
#include <stdlib.h>

/* 
Napišite funkciju koja primi jedan niz 
proizvoljne dužine i invertira mu èlanove (prvi èlan postaje posljednji, drugi postaje pretposljednji itd.)
 */

void invertirajNiz(int *niz, int el);

int main(void) {
	
//	zamjenja(2,5);
	int niz[] = {1,2,3,4,5,6,7,8,9};
	invertirajNiz(niz,9);
	
	int i = 0;
	for(; i < 9; i++) {
		printf("%d", niz[i]);
	}
	return 0;
}

void zamjenja(int a, int b) {
	
	printf("a=%d  b =%d \n" ,a,b);
	printf("a=%d  b =%d" ,a,b);
}

void invertirajNiz(int *niz, int el) {
	
	/*
	a = a+b;
	b = a - b;
	a = a-b;
	*/	
	int i =0;
	for(; i < el/2 ; i ++) {				
		niz[i] = niz[i] + niz[(el-1)-i] ;
		niz[(el-1)-i] = niz[i] - niz[(el-1)-i];
		niz[i] = niz[i] -niz[(el-1)-i];
	}

}
