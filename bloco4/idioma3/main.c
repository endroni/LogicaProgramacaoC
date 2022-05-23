#include <stdio.h>
#include <math.h> // biblioteca para usar função POW - potenciação


#define LIMITE 30 //Limite do IMC - Se o IMC for maior que 30 é considerado obeso


int main(){

  float altura, peso, imc;


  printf("Qual %c sua altura? \n", 130);
  scanf("%f%*c", &altura);

  printf ("\nQual %c seu peso? \n", 130);
  scanf("%f%*c", &peso);



  //Acentos em ASCII: letra 'E' agudo (é):130  letra 'E' com circumflexo(ê):136  letra 'A' com til (ã):198

  imc=peso/pow(altura,2);

  printf("\nSeu IMC %c:\n%2.2f \n" , 130, imc);

    if (imc <= LIMITE){
      printf("\nVoc%c n%co %c obeso. \n", 136, 198 , 130 );
    }
     else printf("\nVoc%c precisa emagrecer!\n" , 136);


getchar();
return 0;
}