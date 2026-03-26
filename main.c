/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main() {
 float n1, n2, n3, media;
 printf("Digite tres notas: ");
 scanf("%f %f %f", &n1, &n2, &n3);
 media = (n1 + n2 + n3) / 3;
 printf("Media: %.2f\n", media);
 if (media >= 6.0) {
        printf("Resultado: APROVADO! \n");
    } else {
        printf("Resultado: REPROVADO. \n");
    }

    
 return 0;
 
}
