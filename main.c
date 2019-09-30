#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char str1[30] = "Aula de";
    char str2[50] = " tecnicas de desenvolvimento de algoritmos.";

    strncat(str1, str2, 80);

    printf("%s\n", str1);


    getch();
    system("pause");
    return 0;
}
