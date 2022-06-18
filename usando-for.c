#include <stdio.h>

	int main () {
	int f1, f2, fib, n, qtd;
	
	f1 = 1;
	f2 = 0;
	fib = 0;
    
	printf ("Insira a quantidade de números da série que deseja ver: ");
	scanf ("%d", &qtd);
	
	for (n=1; n <= qtd; n++) {
		fib = f1 + f2;
		f1 = f2;
		f2 = fib;
		printf ("%d \n", fib);	
	}
	
	return 0;
	}
