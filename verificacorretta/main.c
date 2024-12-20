#include<stdio.h>
#include "math.h"
#include "pow.h"

int main(void)
{
    int n1,n2,risultato,operazione;
    printf("inserisci l'operazione da eseguire:\n1.somma\n2.differenza\n3.divisione\n4.moltiplicazione\n5.potenze\n");
    scanf("%d", &operazione);
    if (operazione < 5 && operazione > 0)
    {
    printf("inserisci il primo operando: ");
    scanf("%d", &n1);
    printf("inserisci il secondo: ");
    scanf("%d", &n2);
    }
    switch(operazione)
    {
        case 1:
        risultato = somma(n1,n2);
        printf("%d + %d = %d\n", n1,n2,risultato);
        break;
        case 2:
        risultato = differenza(n1,n2);
        printf("%d - %d = %d\n", n1,n2,risultato);
        break;
        case 3:
        risultato = divisione(n1,n2);
        printf("%d / %d = %d\n", n1,n2,risultato);
        break;
        case 4:
        risultato = moltiplicazione(n1,n2);
        printf("%d * %d = %d\n", n1,n2,risultato);
        break;
        case 5:
        printf("inserisci la base: ");
        scanf("%d", &n1);
        printf("inserisci l'esponente: ");
        scanf("%d", &n2);
        risultato = pow(n1,n2);
        printf("%d ^ %d = %d\n", n1,n2,risultato);
        break;
        default: printf("operazione non riconosciuta\n");
    }
    return 0;
}