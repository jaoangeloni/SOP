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
		printf("\nOlá %s, você é criança \n", nome);
	}else if (idade < 19){
	printf("\nOlá %s, você é adolescente \n", nome);
	}else if (idade < 24){
	printf("\nOlá %s, você é jovem \n", nome);
	}else if (idade < 45){
	printf("\nOlá %s, você é adulto \n", nome);
	}else if (idade<60){
	printf("\nOlá %s, você é de meia idade \n", nome);
	}else{
	printf("\nOlá %s, você é idoso \n", nome);
	}
	}
	

