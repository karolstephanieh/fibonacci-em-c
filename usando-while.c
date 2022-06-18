#include <stdio.h>
	int main(){
    int n,qtd,f,f2;
    
    n = 0;
    f = 0;
    f2 = 1;
    
    printf ("Insira a quantidade de número da série que deseja ver: ");
    scanf("%d", &qtd);
    
	while (n < qtd) {
        f = f + f2;
        f2 = f - f2;
        
        printf("%d\n", f);
        n++;
    }
    return 0;
    }
