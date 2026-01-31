#ifndef CLASSES_H
#define CLASSES_H 

// Definição da estrutura Personagem
typedef struct{
  int vida;
  int forca;
  int defesa;
  int level; 
  int progresso;
} Personagem;

// Declaração das funções (protótipos)
Personagem criarGuerreiro(void);
Personagem criarAssassino(void);
Personagem criarBarbaro(void);
Personagem criarLadino(void);
Personagem criarClerigo(void);
Personagem criarRange(void);
Personagem criarPaladino(void);
Personagem criarMago(void);
Personagem criarBruxo(void);
Personagem criarAtirador(void);
Personagem criarNecromante(void);
Personagem criarCavaleiro(void);
Personagem criarDruida(void);
 
// Função principal para criar personagem por nome da classe
Personagem criarPersonagem(const char* classedef);
#endif 