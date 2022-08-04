s#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1,n2,res;
    char OP;
    printf("entrer votre premier nombre: ");
    scanf(" %f",&n1);
    printf("entrer la desieme nombre: ");
    scanf(" %f",&n2);
    printf("donner un OP: ");
    scanf(" %C",&OP);

    switch (OP){
           case '+': res = n1+n2;
           break;
           case '-': res = n1-n2;
           break;
           case '*': res = n1*n2;
           break;
           case '/': res = n1/n2;
           break;
           case 'q':
                printf("le programme est quiter");
                break;
          default: printf("cette operation n'exist pas");
          break;

           }
    printf(" le resultat = %f",res);
     return 0;

}
