#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20
int main(){
    char stringa[MAX], carattere;
    int cont, i, lettere;
    cont = 0;
    printf("Inserisci una stringa qui: ");
    gets(stringa);
    printf("La stringa e' la seguente: ");
    puts(stringa);
    printf("Quale lettera vuoi trovare?: ");
    scanf("%c", &carattere);
    lettere = strlen(stringa);
    for(i = 0; i < lettere; i++){
        if(carattere == stringa[i]){
            cont++;
        }
    }
    printf("La lettera è stata trovata %d volte\n", cont);
    system("pause");
    return 0;
}
