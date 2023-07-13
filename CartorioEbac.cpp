#include <stdio.h>//biblioteca de comunica�ao com o usuario
#include <stdlib.h>//biblioteca de aloca�ao de espaco e memoria
#include <locale.h>//biblioteca de aloca�ao de texto por regi�o
#include <string.h>//biblioteca respons�vel por cuidar das strings
int registrar()

{
 char arquivo[40];
 char cpf [40];
 char nome[40];
 char sobrenome[40];
 char cargo[40];
 
 printf("Digite o CPF a ser cadastrado : ");
 scanf("%s", cpf);
 
 
 strcpy(arquivo,cpf);//Responsavel por copiar os valores das string
 
 FILE *file;//cria o arquivo
 file=fopen(arquivo,"w");//cria o arquivo
 fprintf(file,cpf);//salva o valor da variavel
 fclose(file);//fecha o arquivo
 
 file = fopen(arquivo,"a");
 fprintf(file,",");
 fclose(file);
 
 printf("Digite o nome a ser cadastrado : ");
 scanf("%s",nome);
 
 file = fopen(arquivo,"a");
 fprintf(file,nome);
 fclose(file);
 
 
 file = fopen(arquivo,"a");
 fprintf(file,",");
 fclose(file);
 
 printf("Digite o sobrenome a ser cadastrado : ");
 scanf("%s",sobrenome);
 
 file = fopen(arquivo,"a");
 fprintf(file,sobrenome);
 fclose(file);
 
 
 file = fopen(arquivo,"a");
 fprintf(file,",");
 fclose(file);
 
 printf("Digite o cargo a ser cadastrado : ");
 scanf("%s",cargo);
 
 file = fopen(arquivo,"a");
 fprintf(file,cargo);
 fclose(file);
 
  system("pause");
 
}



int consultar()

{
setlocale(LC_ALL,"Portuguese");//definindo linguagem
 
  char cpf[40];
  char conteudo[200];
  printf("Digite o CPF a ser consultado : ");
  scanf("%s",cpf);
  
  
  FILE *file;
  file = fopen(cpf,"r");

  if(file == NULL)
  {
    printf("N�o foi possiv�l abrir o arquivo, n�o localizado!.\n");
  }
  
  while(fgets(conteudo, 200, file) != NULL)
{
	
  printf("\nEssas s�o as informa��es do usu�rio:\n nome ");
  printf("%s", conteudo);
  printf("\n\n");
  
}

  system("pause");
  
}




int deletar()

{	
  char cpf[40];
  
  printf("Qual o CPF do usuario a ser deletado:  ");
  scanf("%s", cpf);
  
  remove(cpf);
  
  FILE *file;
  file =fopen(cpf,"r");
  
  if(file== NULL)
  {
  	
  	printf(" O usuario n�o se encontra no sistema. \n");
  	system("pause");
  }
 
 
}

 int main()//fun��o

{	int opcao=0;//definindo variaveis
	int laco=1;
	
	for(laco=1;laco=1;)
{
	system("cls");//para dizer ao sistema apagar as opcoes abaixo quando for digitado uma das opcoes abaixo
	
	 setlocale(LC_ALL,"Portuguese");//definindo linguagem
	
	 printf("### Cartorio Esperimental ###\n\n");//inicio do menu
	 printf("Escolher op��o desejada do menu:\n\n");
	 printf("\t1 - Registrar nomes\n ");
	 printf("\t2 - Consultar nomes\n");
	 printf("\t3 - Excluir nomes\n\n");
	 printf("Op��o:");//fim do menu
	
	 scanf("%d", &opcao);//armazenando a escolha do usuario
	 
	 system("cls");//para dizer ao sistema apagar as opcoes acima quando for digitado uma das opcoes acima
	 
	 switch(opcao){
	 	
		  case 1:
		  registrar();
		  break;
		  
		  case 2:
		  	consultar();
		  	break;
		  	
		  	case 3:
		  	deletar();
		  	break;
   	       
   	    default: 
		   printf("Essa opc�o n�o est� disponivel!\n");//fim da sele�ao
   	       system("pause");
   	       break;
   	    	
   	       
   	    	
	 }
}
	 
} 
	
	
	
	
	
	 
	

