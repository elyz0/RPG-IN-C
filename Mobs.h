#ifndef MOBS_H
#define MOBS_H 
  
typedef struct{
  char nome[50];
  int quantidade;
  int def, atk, vida;
} Item; 

typedef struct{
  char nome[50], itemDrop[100]; 
  int baseVida, baseDef, baseAtk;
} Mob;  
 
typedef struct{
  int vida;
  int atk;
  int def;
} MobStats; 
 
#endif