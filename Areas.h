#ifndef AREAS_H
#define AREAS_H 

#include <stdio.h>
#include <string.h> 

struct Item{
  char nome[50];
  int quantidade;
  int def, atk, vida;
}; 

struct Mob{
  char nome[50], itemDrop[100]; 
  int def, atk, vida;
}; 

struct Area{
  char nome[50];
  struct Mob mob;  
  char descricao[100]; 
};
 
struct Area area1 = {"Castle Town", {"Gárgula", "Assas de Gárgula"},"Descrição de Castle Town"};
struct Area area2 = {"Forest", {"Dragão", "Escama de Dragão"},"Descrição de Florest"};
struct Area area3 = {"Aetheria", {"Manticore", "Veneno"},"Descrição de Aetheria"};
struct Area area4 = {"Aztlan", {"Gigante de pedra", "Cristais"},"Descrição de Aztlan"};
struct Area area5 = {"Tenebris", {"Peixe", "Escama"},"Descrição de Tenebris"};
 
struct Area* definirAreaNascimento(const char* classedef); 
 
#endif