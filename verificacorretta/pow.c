int pow(int n1, int n2)
{
    int i, risultato;
    if (n2 > 1)
    {
        int n3 = n1;
        for(i=0; i < n2-1; i++)
        {
            n3 *=n1;
        }
        risultato = n3;
        return risultato;
    }
    else if (n2 = 0)
    {
        risultato = 1;
        return risultato;
    } 
    else if (n2 < 0)
    {
        printf("l'esponente non può essere negativo\n");
    }
}