#include <stdio.h>
#define CLASSROOM 2

 float calculamedia( float N1, float N2)
{
    float md;
    md = (N1 + N2)/2;
    return (md);
}


int main() {
    
    struct estruturaAluno{
             int matricula;
             float N1;
             float N2;
             float media;
    };
    struct estruturaAluno aluno[CLASSROOM];
    float salaMedia = 0;
    
    // Entrada de DADOS
        for(int i = 0;i<CLASSROOM;i++){
       printf( "||||||||||||||||||||DADOS DO ALUNO||||||||||||||||||| \n\n");
       printf( "Matrícula do aluno: ");
       scanf ("%d" ,&aluno[i].matricula);
       printf( "Nota N1: ");
       scanf ("%f", &aluno[i].N1);
       printf( "Nota N2: ");
       scanf ("%f", &aluno[i].N2);
       aluno[i].media = calculamedia(aluno[i].N1,aluno[i].N2);
       salaMedia += aluno[i].media;
       
        }
    // Processamento
    
        salaMedia = salaMedia/CLASSROOM;

    // Saída - Impressão do Boletim do Aluno
        for(int i = 0; i < CLASSROOM;i++){
        printf( "\nBOLETIM DO ALUNO %d \n",aluno[i]);
        printf( "\nNota N1: %.1f", aluno[i].N1);
        printf( "\nNota N2: %.1f", aluno[i].N2);
        printf( "\nMedia..: %.1f", aluno[i].media);
        }
        printf("\nMedia da sala: %f", salaMedia);
       return (0);
}