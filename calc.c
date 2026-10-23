#include <stdio.h>
#include "conio2.h"
char TECLA;
float R,A,B;

main(){
 R = A = B = 0;
 int opcao = 0;//Variável privada. 
 while( opcao != 5){
  clrscr();//Limpa tela ou system("cls").       
  printf("Menu da calculadora\n");
  printf("---------------------\n\n");
  printf("1 - Soma \n");
  printf("2 - Subtracao \n");
  printf("3 - Multiplicacao \n");
  printf("4 - Divisao \n");
  printf("5 - Sair do programa \n\n");
  printf("Escolha a opcao: ");
  scanf("%d",&opcao);
  if (opcao != 5){
    switch(opcao){
     case 1  : rotsoma ();        break;
     case 2  : rotsubtracao();   break;
     case 3  : rotmultiplica();  break;
     case 4  : rotdivisao();     break;
     default : printf("Opcao invalida - somente 1 2 3 4 ou 5");
     TECLA = getche();//system("pause").
    }//FIM DA ESCOLHA.        
  }//FIM DA DECISAO SIMPLES.        
 }//fIM DO LAÇO. 
}//Fim da rotina principal.
  //Rotina de soma - modulo procedimento não parametrizado. 
  rotsoma(){
   clrscr();//Limpa Tela.
   printf("Rotina de Soma");        
   printf("--------------\n\n");
   printf("Entre com o valor para A : ");
   scanf("%f",&A);
   printf("Entre com o valor para B : ");
   scanf("%f",&B);
   //Processamento.
   R = A + B;
   printf("\nO resultado da soma %4.2f \n", R);
   printf("\nAperte qualquer tecla\n");
   TECLA = getche();//system("pause").
  }
  //Rotina de subtração.
  rotsubtracao(){
   clrscr();//Limpa Tela.
   printf("Rotina de subtracao");        
   printf("--------------\n\n");
   printf("Entre com o valor para A : ");
   scanf("%f",&A);
   printf("Entre com o valor para B : ");    
   scanf("%f",&B);
   //Processamento.
   R = A - B;
   printf("\nO resultado da subtracao %4.2f \n", R);
   printf("\nAperte qualquer tecla\n");
   TECLA = getche();//system("pause").
  }
  //Rotina de multiplicação.
  rotmultiplica(){
   clrscr();//Limpa Tela.
   printf("Rotina de Multiplicacoa");        
   printf("------------------------\n\n");
   printf("Entre com o valor para A : ");
   scanf("%f",&A);
   printf("Entre com o valor para B : ");    
   scanf("%f",&B);
   //Processamento.
   R = A * B;
   printf("\nO resultado da multiplicacao %4.2f \n", R);
   printf("\nAperte qualquer tecla\n");
   TECLA = getche();//system("pause").
  }
  //Rotina de divisão.
  rotdivisao(){
   clrscr();//Limpa Tela.
   printf("Rotina de Divisao");        
   printf("------------------------\n\n");
   printf("Entre com o valor para A : ");
   scanf("%f",&A);
   printf("Entre com o valor para B : ");    
   scanf("%f",&B);
   //Processamento.
   R = A / B;
   printf("\nO resultado da divisao %4.2f \n", R);
   printf("\nAperte qualquer tecla\n");
   TECLA = getche();//system("pause").
  }  
  
//Fim do programa.
