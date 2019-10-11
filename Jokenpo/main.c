/* 
O objetivo é fazer um juiz de Jokenpo que dada a jogada dos dois jogadores informa o resultado da
partida.
As regras são as seguintes:
• Pedra empata com Pedra e ganha de Tesoura
• Tesoura empata com Tesoura e ganha de Papel
• Papel empata com Papel e ganha de Pedra
 */

#include <stdio.h>
#include <stdlib.h>

int verificaGanhador(int op1, int op2)
{
    //Empate
    if(op1 == op2)
        return 0;
    
    //Pedra - Papel
    else if(op1 == 1 && op2 == 2)
        return 2;
       
    //Papel - Pedra
    else if(op1 == 2 && op2 == 1)
        return 1;
         
    //Pedra - Tesoura
    else if(op1 == 1 && op2 == 3)
        return 1;
    
    //Pedra - Tesoura
    else if(op1 == 3 && op2 == 1)
        return 2;
      
    //Papel - Tesoura
    else if(op1 == 2 && op2 == 3)
        return 2;
      
    //Tesoura - Papel
    else if(op1 == 3 && op2 == 2)
        return 1;
      
}

int main(int argc, char** argv) 
{
    
   int opcaoJog1 , opcaoJog2, ganhador;
   
   do
   {
       printf("--- JOGADOR 1 ---\n");
       printf("Insira sua opção:\n");
       printf("1 - Pedra\n2 - Papel\n3 - Tesoura\n0 - Encerrar\n");
       scanf(" %d",&opcaoJog1);
       
       switch(opcaoJog1)
       {
           case 1:
               break;
               
           case 2:
               break;
               
           case 3:
               break;
               
           case 0:
               break;
               
           default:              
               printf("\nJog1: OPÇÃO INVÁLIDA!!\n");
       }
       
       system("clear");
       
       printf("\n\n--- JOGADOR 2 ---\n");
       printf("Insira sua opção:\n");
       printf("1 - Pedra\n2 - Papel\n3 - Tesoura\n0 - Encerrar\n");
       scanf(" %d",&opcaoJog2);
       
       switch(opcaoJog2)
       {
           case 1:
               break;
               
           case 2:
               break;
               
           case 3:
               break;
               
           case 0:
               break;
               
           default:
               printf("\nJog2: OPÇÃO INVÁLIDA!!\n");
           
       }
       
       setbuf(stdin, NULL);
       getchar();
       system("clear");
             
       if(opcaoJog1 != 0 && opcaoJog2 != 0)
       {
         ganhador = verificaGanhador(opcaoJog1, opcaoJog2);
         if(ganhador!=0)
            printf("Jogador %d ganhou!", ganhador);
         else
             printf("EMPATE!");
       }
       
   }while(opcaoJog1 != 0 || opcaoJog2 != 0);
     
    
   
}

