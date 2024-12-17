int pow(int n1, int n2)
{
    int i, risultato;
    if (i > 1)
    {
        for(i=0; i < n2; i++)
        {
            n1 *=n1;
        }
        risultato = n1;
        return risultato;
    }
    else if (i = 0)
    {
        risultato = 1;
        return risultato;
    } 
    else if (i < 0)
    {
        printf("l'esponente non può essere negativo\n");
    }
}