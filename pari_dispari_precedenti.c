/* Dato un numero da tastiera da 0 e 30 (quindi stampa "errore, inserisci un altro numero" per i non compresi)
stampa a video i numeri pari e i numeri dispari precedenti a quel numero

esempio: utente inserisce 10
programma stampa:
"I numeri pari precedenti sono: 
2, 
4, 
6, 
8
I numeri dispari precedenti sono: 
1, 
3, 
5, 
7, 
9"*/

#include <stdio.h>
int n, i, y;

int main(void){ 
    do {
        printf("Inserisci numero compreso tra 0 e 30 ");
        scanf("%d", &n);
    } while ((n<0) || (n>30));

    printf("I numeri pari precedenti sono: ");
    for(i=n-1; i>=0; i--) {
        if(i%2==0){
            printf("%d ", i);
        }
    }

    printf("\nI numeri dispari precendeti sono: ");
    for (y=n-1; y>=0; y--){
        if(y%2!=0){
            printf("%d ", y);
        }
    }
    return 0;
}
