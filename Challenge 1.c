#include <stdio.h>
#include <stdlib.h>
 int main()
 {
    char nom [127], prenom[127], sexe [127];
     int age , number ;
     char prenom1;
     printf(" enter your name : \n");
     scanf("%s", &nom);
     printf("enter your last name : \n");
     scanf("%c",&prenom1);
     scanf("%[^\n]" ,prenom);

     printf("enter your sexe : \n");
     scanf("%s", &sexe);
     printf("enter your age : \n");
     scanf("%d", &age);
     printf("enter your number : \n");
     scanf("%d" , &number);
     printf(" nom : %s", nom);
     printf("prenom : %s" ,prenom);


    printf("sexe : %s" , &sexe);
    printf("age : %d" ,age);
    printf("number : %d" ,number);
    return 0;
 }
