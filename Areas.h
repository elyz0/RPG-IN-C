#ifndef AREAS_H
#define AREAS_H 

#include "Mobs.h"

typedef struct {
  char nome[50];
  Mob mob;  
  char descricao[100]; 
} Area;
 
Area* definirAreaNascimento(const char* classedef);  
void exibirEGravarOrigem(Area* suaArea);
 
#endif