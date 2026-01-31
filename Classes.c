#include <stdio.h>
#include <string.h>  
#include "Classes.h" 
 
// Funções para inicializar os stats do jogador de acordo com sua classe
Personagem criarGuerreiro(void) {
    Personagem guerreiro = {  
        .vida = 18,
        .forca = 18,
        .defesa = 14,
        .level = 1, 
        .progresso = 0 
   };
    return guerreiro;
}

Personagem criarAssassino(void) {
    Personagem assassino = {
        .vida = 14,
        .forca = 14,
        .defesa = 14,
        .level = 1,
        .progresso = 0
    };
    return assassino;
}

Personagem criarBarbaro(void) {
    Personagem barbaro = {
        .vida = 22,
        .forca = 18,
        .defesa = 16,
        .level = 1,
        .progresso = 0
    };
    return barbaro;
}

Personagem criarLadino(void) {
    Personagem ladino = {
        .vida = 16,
        .forca = 12,
        .defesa = 12,
        .level = 1,
        .progresso = 0
    };
    return ladino;
}

Personagem criarClerigo(void) {
    Personagem clerigo = {
        .vida = 16,
        .forca = 14,
        .defesa = 12,
        .level = 1,
        .progresso = 0
    };
    return clerigo;
}

Personagem criarRange(void) {
    Personagem range = {
        .vida = 16,
        .forca = 14,
        .defesa = 12,
        .level = 1,
        .progresso = 0
    };
    return range;
}

Personagem criarPaladino(void) {
    Personagem paladino = {
        .vida = 18,
        .forca = 16,
        .defesa = 14,
        .level = 1,
        .progresso = 0
    };
    return paladino;
}

Personagem criarMago(void) {
    Personagem mago = {
        .vida = 16,
        .forca = 10,
        .defesa = 8,
        .level = 1,
        .progresso = 0
    };
    return mago;
}

Personagem criarBruxo(void) {
    Personagem bruxo = {
        .vida = 16,
        .forca = 12,
        .defesa = 12,
        .level = 1,
        .progresso = 0
    };
    return bruxo;
}

Personagem criarAtirador(void) {
    Personagem atirador = {
        .vida = 16,
        .forca = 12,
        .defesa = 12,
        .level = 1,
        .progresso = 0
    };
    return atirador;
}

Personagem criarNecromante(void) {
    Personagem necromante = {
        .vida = 16,
        .forca = 10,
        .defesa = 12,
        .level = 1,
        .progresso = 0
    };
    return necromante;
}

Personagem criarCavaleiro(void) {
    Personagem cavaleiro = {
        .vida = 18,
        .forca = 16,
        .defesa = 14,
        .level = 1,
        .progresso = 0
    };
    return cavaleiro;
}

Personagem criarDruida(void) {
    Personagem druida = {
        .vida = 16,
        .forca = 14,
        .defesa = 12,
        .level = 1,
        .progresso = 0
    };
    return druida;
}

Personagem criarPersonagem(const char* classedef) {
    if (strcmp(classedef, "guerreiro") == 0) {
        return criarGuerreiro();
    } else if (strcmp(classedef, "assassino") == 0) {
        return criarAssassino();
    } else if (strcmp(classedef, "barbaro") == 0) {
        return criarBarbaro();
    } else if (strcmp(classedef, "ladino") == 0) {
        return criarLadino();
    } else if (strcmp(classedef, "clerigo") == 0) {
        return criarClerigo();
    } else if (strcmp(classedef, "range") == 0) {
        return criarRange();
    } else if (strcmp(classedef, "paladino") == 0) {
        return criarPaladino();
    } else if (strcmp(classedef, "mago") == 0) {
        return criarMago();
    } else if (strcmp(classedef, "bruxo") == 0) {
        return criarBruxo();
    } else if (strcmp(classedef, "atirador") == 0) {
        return criarAtirador();
    } else if (strcmp(classedef, "necromante") == 0) {
        return criarNecromante();
    } else if (strcmp(classedef, "cavaleiro") == 0) {
        return criarCavaleiro();
    } else if (strcmp(classedef, "druida") == 0) {
        return criarDruida();
    } 
    
    return criarGuerreiro();
}
 
