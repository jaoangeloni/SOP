#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	char nome[20];
	int idade;
	
	//entrada
	printf("Digite seu nome:\n");
	scanf("%s",&nome);
	
	printf("Digite sua idade:\n");
	scanf("%d",&idade);
	
	//processamento
	if(idade < 10){
		printf("\nOl� %s, voc� � crian�a \n", nome);
	}else if (idade < 19){
	printf("\nOl� %s, voc� � adolescente \n", nome);
	}else if (idade < 24){
	printf("\nOl� %s, voc� � jovem \n", nome);
	}else if (idade < 45){
	printf("\nOl� %s, voc� � adulto \n", nome);
	}else if (idade<60){
	printf("\nOl� %s, voc� � de meia idade \n", nome);
	}else{
	printf("\nOl� %s, voc� � idoso \n", nome);
	}
	}
	

