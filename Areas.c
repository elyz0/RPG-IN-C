#include <stdio.h>
#include <string.h>    
#include "Areas.h"
     
//Paramêtros de stats dos mobs variando somente entre 10 e 60 (Por enquanto)
Area area1 = {"Castle Town", {"Gárgula", "Assas de Gárgula", 30, 50, 20 },"Descrição de Castle Town"};
Area area2 = {"Forest", {"Dragão", "Escama de Dragão", 60, 40, 50 },"Descrição de Florest"};
Area area3 = {"Aetheria", {"Manticore", "Ferrão Envenenado", 40, 30, 40},"Descrição de Aetheria"};
Area area4 = {"Aztlan", {"Gigante de pedra", "Cristais do Deserto", 30, 60, 30},"Descrição de Aztlan"};
Area area5 = {"Tenebris", {"Serpente das Profundezas", "Presa Abissal", 40, 20, 60},"Descrição de Tenebris"};
 
//Função que define a área na qual o jogador iniciará com base na sua classe (Definida no questionário)
Area* definirAreaNascimento(const char* classedef){   
 
  Area* suaArea = NULL; 

  if (strcmp(classedef, "Guerreiro") == 0 || strcmp(classedef, "Paladino") == 0 ||
    strcmp(classedef, "Atirador") == 0 || strcmp(classedef, "Cavaleiro") == 0 || strcmp(classedef, "Clerigo") == 0) { 
    suaArea = &area1;
  }  
  else if (strcmp(classedef, "Assassino") == 0 || strcmp(classedef, "Bárbaro") == 0 ||
    strcmp(classedef, "Ladino") == 0) {
     suaArea = &area4;
  }  
  else if (strcmp(classedef, "Bruxo") == 0 || strcmp(classedef, "mago") == 0) {
    suaArea = &area3;
  }  
  else if (strcmp(classedef, "Necromante") == 0) {
    suaArea = &area5;
  }  
  else if (strcmp(classedef, "Druida") == 0 || strcmp(classedef, "Ranger") == 0 || strcmp(classedef, "Arqueiro") == 0) {
    suaArea = &area2;
  }   
  else {
    printf("Erro: Classe não reconhecida.\n");
    return NULL;
  }  
  
  return suaArea; 

  // Tudo depois do return não funciona 
  // return NULL; dentro do else (caso a classe não seja reconhecida). Se o código continuasse e tentasse acessar suaArea->nome sendo ela NULL, o programa travaria (o famoso Segmentation Fault).   
  // O compilador COPIA o conteúdo do .h para dentro do .c. Então se dois arquivos incluírem Areas.h, você pode ter: funções duplicadas, variáveis duplicadas, comportamento imprevisível.. . Por isso não usamos implementação em .h.
}   
  
void exibirEGravarOrigem(Area* suaArea){
      
    //Se a área for nula, não podemos tentar acessar suaArea->nome
    if (suaArea == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return; // Ou outra ação apropriada em caso de erro
    }  

    FILE *arquivo = fopen("Perfil.txt", "a+");  
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return; // Ou outra ação apropriada em caso de erro
    }  
    
    printf("\n\nO seu destino está entrelaçado com o local de onde você vem. Logo você nasceu e foi criado(a) em %s. As terras de %s moldaram você, concedendo-lhe as habilidades e conhecimentos únicos que definem sua classe.\n\n", suaArea->nome, suaArea->nome); 
    fprintf(arquivo, "\nAtenção!\nSeu destino está entrelaçado com o local de onde você vem. Logo, você nasceu e foi criado(a) em %s. As terras de %s moldaram você, concedendo-lhe as habilidades e conhecimentos únicos que definem sua classe.\n\n", suaArea->nome, suaArea->nome); 
    fclose(arquivo); 
}