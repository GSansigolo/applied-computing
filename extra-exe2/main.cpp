#include <iostream>
#include <vector>
#include <string>
#include "hash.hpp"

int main(){

    std::cout << "Lista Complementar - Exercicio 2 [ Gabriel Sansigolo ]" << "\n\n";

    //---------------------------
    //Cria o Hash
    //---------------------------
    hash hashArray[30];

    //---------------------------
    //Cria a Coluna Palavras
    //---------------------------
    std::string palavras[9] = {"ABACATE", "ABACAXI", "AMORA", "EMANUEL", "EMANUELE", "GILBERTO", "GILSON", "MANU", "MANUELA"};
    int indice;

    //---------------------------
    //Cria a Coluna indice
    //---------------------------
    for (int i = 0; i<9; i++){
        indice = geraIndice(palavras[i]);
        hashArray[indice].texto = palavras[i];
    }

    //---------------------------
    //Imprime a Tabela
    //---------------------------
    for (int i = 0; i<9; i++)
        std::cout << "" << geraIndice(palavras[i]) << " | " << palavras[i] << "" << "\n";

    return 0;
}
