#include <stdio.h>
#include<math.h>

main(){
  
    /*Faça um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. 
    Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou  superior a 7.0 pontos.*/

    int nota1, nota2, nota3, media, soma;

    printf("indique as notas das 3 provas:");
    scanf("%d %d %d", &nota1, &nota2, &nota3);

    soma = nota1 + nota2 + nota3;

    media = soma / 3;

    if(media <= 7.0){
            printf("aprovado");
    }else{
          printf("reprovado");
    }

 



}