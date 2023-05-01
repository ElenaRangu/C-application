#include <stdio.h>
int main()

{
int n, i = 3, j, c, suma=2;

printf("Dati cate numere prime sa se afiseze\n");
scanf("%d", &n);

printf("Primele %d numere prime sunt:\n",n);
printf("2\n");
for (j=2; j <= n;)
    {

    for(c=2; c <= i- 1; c++)

    {
    if(i%c == 0)
        break;
    }

    if(c == i)
    {
      printf("%d\n", i);
    suma = suma + i;
    j++;
    }
    i++;
    }



printf("Suma primelor %d numere prime este %d:\n", n, suma);
 return 0;
}








