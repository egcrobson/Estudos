#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include <string.h>

main(){
       
     int esc = 0;
     int b ;
     do{
     
     printf("CRIACAO DE HD VIRTUAL\n");
     printf("--------------------------\n\n");
     printf("MENU\n");
     printf("--------------------------\n\n");
     
     printf("1 - LISTA OS HDS VIRTUAIS\n");
     printf("2 - LISTA ISOS DISPONIVEIS\n");
     printf("3 - CRIA HDS VIRTUAIS\n");
     printf("4 - INSTALAR SISTEMA OPERACIONAL\n");
     printf("5 - RODAR MAQUINA\n");
     printf("6 - SAIR\n");
     printf("ESCOLHA A OPCAO:  ");
     scanf("%d",&esc);     
     
     if (esc != 7){
              switch(esc){
              case 1 : rothd()  ;  break;
              case 2 : rotiso(); break;
              case 3 : rotcriarhd(); break;
              case 4 : rotinstalar(); break;
              case 6 : rotroda(); break;
              default: printf("nao");
              }
          }
          clrscr();
          
          printf("Voltar ao Menu Principal: 1 - para sim,  2- para  nao  ");
          scanf("%d",&b);    
           clrscr();
        }while(b != 2);       
     }


            rothd(){
            clrscr();
            printf("LISTA DE HDS VIRTUAIS\n");
            printf("--------------------------\n\n");
            system("dir *.img");
            system("pause");
            }
            
            rotiso(){
                     clrscr();
                          printf("LISTA DE ISOS\n");
                          printf("--------------------------\n\n");
                     system("dir *.iso");
                     system("pause");
                     }
                     
           rotcriarhd(){
                         clrscr();
                         printf("CRIAR HD VIRTUAL\n");
                         printf("--------------------------\n\n");
                         char nome ; 
                         char mtipo;
                         int tam;
                         char var;
                         
                       printf("Entre com o nome do HD\n");
                       scanf("%s",&nome);
                       
                    
                       printf("Entre com o tamanho\n");
                       printf("1  -  2  -  3  -  4  -  5  -  6\n");
                       scanf("%d",&tam);
                       
                       
                       printf("Entre com o tipo de tamanho\n");
                       printf("1- Mega byte (MG)  2- Giga byte(GB)\n");
                       scanf("%s",&mtipo);
                       
                       
                       sprintf(var,"qemu-img create -f qcow2 %s.img %d%s. > virtual.txt",nome,tam,mtipo);
                       system(var);
                       
                       
                       system("pause");                       
                       }
                       
                       
                   rotinstalar(){
                       clrscr();
                        printf("INSTALAR SISTEMA OPERACIONAL\n");
                        printf("--------------------------\n\n");
                       char roda, img , iso;
                                 
                       printf("Entre com o nome do HD virtual\n");
                       scanf("%s",&img);
                       
                       printf("Entre com o nome da ISO\n");
                       scanf("%s",&iso);
                       
                       sprintf(roda,"qemu -L . -m 512 -hda %s.img -soundhw all -localtime -boot d -cdrom d: %s.iso",img,iso);
                       system(roda);  
                                }
                       
                       rotroda(){
                                 clrscr();
                                 printf("RODAR A MAQUINA\n");
                                 printf("--------------------------\n\n");
                                 char img,rodar;
                                                                  
                                   printf("Entre com o nome do HD virtual\n");
                                   scanf("%s",&img);
                                   
                                   sprintf(rodar,"qemu -L . -m 900 -hda %s.img -localtime -full-screen -boot  c",img);
                                   system(rodar);
                                 }
