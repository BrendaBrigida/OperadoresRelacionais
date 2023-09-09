#include <stdio.h>

main(){

    /*. Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salario atual e o tempo de serviço de cada funcionário.
     Os funcionários com menor salario terão um aumento proporcionalmente maior do que os funcionários  com um salario maior, e conforme o tempo de serviço na empresa, 
     cada funcionário irá receber um bônus adicional de salário.*/


    float salarioAtual, salarioReajustado;
    int tempoDeServico;

    printf("digite o salarioAtual: ");
    scanf("%f", &salarioAtual); 

    printf("digite o tempoDeServico:");
    scanf("%d", &tempoDeServico); 

    printf("salarioReajustado\n");

	printf("\nDigite o Salario Atual: R$ ");
	fflush(stdout);
	scanf("%f", &salarioAtual);

	printf("\nDigite o Tempo de Empresa em Anos: ");
	fflush(stdout);
	scanf("%f", & tempoDeServico);

	if(salarioAtual > 0 && salarioAtual <= 500 &&  tempoDeServico < 1){
		salarioReajustado = salarioAtual + (salarioAtual * 0.25);
	}else{
		if(salarioAtual > 500 && salarioAtual <= 1000 &&  tempoDeServico >= 1 &&  tempoDeServico <= 3){
				salarioReajustado = salarioAtual + (salarioAtual * 0.20) + 100;
		}else{
			if(salarioAtual > 500 && salarioAtual <= 1000){
				salarioReajustado = salarioAtual + (salarioAtual * 0.20);
		}else{
			if(salarioAtual > 1000 && salarioAtual <= 1500 &&  tempoDeServico >= 4 &&  tempoDeServico <= 6){
				salarioReajustado = salarioAtual + (salarioAtual * 0.15) + 200;
			}else{
				if(salarioAtual > 1000 && salarioAtual <= 1500){
					salarioReajustado = salarioAtual + (salarioAtual * 0.15);
				}else{
					if(salarioAtual > 1500 && salarioAtual <= 2000 &&  tempoDeServico >= 7 &&  tempoDeServico <= 10){
						salarioReajustado = salarioAtual + (salarioAtual * 0.10) + 300;
					}else{
						if(salarioAtual > 1500 && salarioAtual <= 2000){
							salarioReajustado = salarioAtual + (salarioAtual * 0.10);
						}else{
							if(salarioAtual > 2000 &&  tempoDeServico >= 10){
								salarioReajustado = salarioAtual + 500;
							}else{
								if(salarioAtual > 2000 &&  tempoDeServico < 10){
									salarioReajustado = salarioAtual;
								}else{
									printf("\nDados Invalidos!!!");
								}
							}
						}
					}
				}
			}
		}
	}
}

		if(salarioReajustado > 0){
			printf("\nO Salario com Reajuste e: R$ %.2f", salarioReajustado);
		}
   



}
