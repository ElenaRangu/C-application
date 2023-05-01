#include <stdio.h>

#define inmultire_macro(x,y) (x*y)

int main()


{

int n, m,rezultat_functie= 0;


int functie_inmultie(int a, int b);


printf("Dati primul numar:\n");
scanf("%d", &n);

printf("Dati al doilea numar:\n");
scanf("%d", &m);


rezultat_functie = functie_inmultire(n,m);

printf("Cele doua numere inmultite (folosind functie) fac: %d\n", rezultat_functie);
printf("Cele doua numere inmultite (folosind macro) fac: %d\n", inmultire_macro(n,m));


return 0;
}


int functie_inmultire(int a, int b){
int rez = 0;
rez = a*b;
return rez;

}

