#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int Felix[5];
    int number;

    printf("Hello World of arrays!!\n");
    for(int i = 0; i < 5; i++){
        printf("Choose some numbers: ");
    scanf("%d", &Felix[i]);
    }


    printf("What number place number do you wonna print out?: \n");


    scanf("%d", &number);

    printf("%d" ,Felix[number]);




    getch();

    return 0;
}
