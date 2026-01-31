#include <stdio.h>
#include <string.h>   
#include <math.h> 
#include "Mobs.h" 
 
//Função para evoluir o mob de acordo com o level do jogador  
//Retorna o struct MobStats
MobStats evoluirMob (const Mob* mobEvoluido, int levelJogador){ //const faz com que não modifique o valor original do mob
      
    MobStats novoStats; 

    /* 
    if (levelJogador <= 1){ 
        return
    }
    */ 
     
    //Faz com que no level 1 o mob continue com o valor base dos stats
    float fatorEscala = 1.0f + (levelJogador - 1) * 0.15f;
     
    novoStats.vida = fatorEscala * mobEvoluido -> baseVida;
    novoStats.atk = fatorEscala * mobEvoluido -> baseAtk;
    novoStats.def = fatorEscala * mobEvoluido -> baseDef;  
     
    return novoStats;
}  
 

 
