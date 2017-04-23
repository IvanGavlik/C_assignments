#include <stdio.h>
#include <stdlib.h>

/* 
*/

unsigned sum(unsigned *niz, int n) {
	unsigned s = 0, *q = niz;
	
	while(q != niz + n) {
	
		s = s + *(++q);
	}
	
	
	return s;
}

int main(void) {
	unsigned a[10] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	
	printf("%u \n", sum(a,10));
	
	return 0;
}


