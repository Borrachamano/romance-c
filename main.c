#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    // Especificando o idioma
    setlocale(LC_ALL, "Portuguese");
    
    // Atualizando os valores sorteados
    srand(time(NULL));
    
    // Declarando variáveis
    int amorboy = rand() % 100;
    int amorgirl = rand() % 100;
    int amor;
    char menino[20];
    char menina[20];
    
    // Mostrando o cabeçalho
    printf("=====================\n");
    printf("    Romance né pae   \n");
    printf("=====================\n");
    
    // Lendo valores
    printf("Nome do Garoto: ");
    scanf("%s", &menino);
    
    printf("Nome da Garota: ");
    scanf("%s", &menina);
    
    // Mostrando o resultado
    amor = (amorboy + amorgirl) - 20;
    
    printf("%s: %d%%\n", menino, amorboy);
    printf("%s: %d%%\n", menina, amorgirl);
    printf("Amor entre os dois: %d\n", amor);
    
    // Tirando onda kkkkk
    if(amor == 100){
        printf("Casalzão da porra hein\n");
    }
    else if(amor >= 70 && amor < 100){
        printf("Da pra melhora, mas tá bom\n");
    }
    else if(amor >= 40 && amor < 70){
        printf("Não se iludam cedo.\n");
    }
    else{
        printf("Desistir É pros fracos. ideal é nem tentar.\n");
    }
    
    // Finalizando a execução
    return 0;
    
}
