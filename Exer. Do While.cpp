
//Programa de multiplicacao, divisao, subtracao, adicao e tabuada que utiliza estrutura de repeticao while 
//A estrutura de repeticao while esta instrução é usada quando não sabemos quantas vezes um determinado 
//bloco de instruções precisa ser repetido. Com ele, a execução das instruções vai continuar até que uma 
//condição seja verdadeira. 

#include<stdio.h>
#include <stdlib.h>
#include <strings.h>



int main(void){


    int opcao, tabuada, variavel_contadora = 1, num,  contador ;
   	float soma, num1, num2 ;
    

	while (1){

 		printf("\n\n:---------------------------------------------------------------:\n");
        printf(": Escolha um opcao do menu: ");
       	printf(": Escolha um opcao do menu: \n\n 1.TABUADA COMPLETA  2.MULTIPLICACAO 3.DIVISAO 4.SUBTRACAO 5.ADICAO 0.ENCERRAR :\n");
        printf("\n\n----->Digite a opcao desejada: ");
        scanf("%d",&opcao ); // escolha da opção do menu
        fflush(stdin);    // limpar o "buffer" do teclado
  	

 switch (opcao)
 {
 	
 	case 1:
  
			printf("Qual tabuada voce gostaria de visualizar ?  : ");
  			scanf("%d",& num);
  			while(variavel_contadora <= 10)
    	{
        	tabuada = num *variavel_contadora;
        	printf("%d x %d = %d\n",num, variavel_contadora,tabuada);
        	variavel_contadora++;
        	
      }
  	
  			printf("\n\n Pressione uma tecla para voltar ao menu principal e execultar novas consultas!\n\n");
            system("pause"); // Pausa no sistema, espera usuario pressionar alguma tecla
            system("cls");   // limpa a telas
            break;   // fim usuario escolheu a opção 1 ( CADASTRO )
  		
		  return (0);
		

		  
  		case 2:
  		
			printf("\n\n:---> Digite o PRIMEITO  a ser multiplicado :   ");  		
  			scanf("%f",&num1);
		  	
			printf("\n\n: Digite o SEGUNDO  valor a ser somado :  ");		
  			scanf("%f",&num2);
  			
  			soma = num1 * num2;
  			printf("\n  O resultado da multiplicacao e : %f \n \n ", soma);
  				
    	
    		printf("\n\n Pressione uma tecla para voltar ao menu principal e execultar novas consultas\n\n");
            system("pause"); // Pausa no sistema, espera usuario pressionar alguma tecla
            system("cls");   // limpa a telas
            	break;  
            	
        case 3: 
        	printf("\n\n:---> Digite o PRIMEIRO valor a ser dividido :   ");  		
  			scanf("%f",&num1);
		  	
			printf("\n\n: Digite o SEGUNDO a ser somado  :  ");		
  			scanf("%f",&num2);
  			
  			soma = num1 / num2;
  			printf("\n  O resultado da divisao e : %f \n \n ", soma);
  				
    	
    		printf("\n\n Pressione uma tecla para voltar ao menu principal e execultar novas consultas\n\n");
            system("pause"); // Pausa no sistema, espera usuario pressionar alguma tecla
            system("cls");   // limpa a telas
            	break;  
        
        case 4: 
        		printf("\n\n:---> Digite o PRIMEIRO valor a ser subtraido :   ");  		
  			scanf("%f",&num1);
		  	
			printf("\n\n: Digite o  SEGUNDO a ser somado  :  ");		
  			scanf("%f",&num2);
  			
  			soma = num1 - num2;
  			printf("\n  O resultado da subtracao e : %f \n \n ", soma);
  				
    	
    		printf("\n\n Pressione uma tecla para voltar ao menu principal e execultar novas consultas\n\n");
            system("pause"); // Pausa no sistema, espera usuario pressionar alguma tecla
            system("cls");   // limpa a telas
            	break;  
            	
        case 5:
         	printf("\n\n:---> Digite o PRIMEIRO valor a ser somado :   "); 		
  			scanf("%f",&num1);
		  	
			printf("\n\n: Digite o SEGUNDO valor a ser somado  :  ");		
  			scanf("%f",&num2);
  			
  			soma = num1 + num2;
  			printf("\n  O resultado da adicao e : %f \n \n ", soma);
  				
    	
    		printf("\n\n Pressione uma tecla para voltar ao menu principal e execultar novas consultas\n\n");
            system("pause"); // Pausa no sistema, espera usuario pressionar alguma tecla
            system("cls");   // limpa a telas
            	break; 
        	
  		
  		case 0:
  		  printf("\n\n\n:---------------------------------------------------------------:\n");
            printf(":---------: Programa finalizado... Tenha uma boa tarde :D  ---------:\n");
            printf(":---------------------------------------------------------------:\n\n\n");
         	
  			return (0);
  		
  		default:
            printf("\n\n--------: OPCAO INVALIDA :--------\n\n");
            system("pause"); // Pausa no sistema, espera usuario pressionar alguma tecla
            system("cls");   // limpa a tela
            
        }
			    
        
	}
}
