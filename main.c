#include <stdio.h>
#include <stdlib.h>

int main(){

    char str1[100];
    char str2[100];

    printf("Digite um texto de ate 100 caracteres:\n");
    gets(str1);

    for(int i = 0; i < sizeof(str1) && str1[i] != '\0'; i++){
        str2[i] = str1[i];
    }

    printf("%s\n", str2);

    system("pause");
    return 0;
}
