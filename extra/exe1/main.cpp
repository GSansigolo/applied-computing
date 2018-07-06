    #include <iostream>
    #include <vector>
    #include <string>
    #include "arvore.hpp"

    //main
    int main(){

        std::cout << "Lista Complementar - Exercicio 1 [ Gabriel Sansigolo ]" << "\n\n";

        //-------------------------
        //Criação Arvore
        //-------------------------
        struct ArvoreTrie *ArvoreTrie = criaArvore();

        //-------------------------
        //Testa Inserção
        //-------------------------
        std::cout << "Teste Inserção" << "\n";
        std::string palavras[9] = {"ABACATE", "ABACAXI", "AMORA", "EMANUEL", "EMANUELE", "GILBERTO", "GILSON", "MANU", "MANUELA"};
        for (int i = 0; i < 9; i++){
            escreve(ArvoreTrie, palavras[i]);
            std::cout << "concluida\n";
        }

        //-------------------------
        //Testa Busca
        //-------------------------
        std::cout << "\nTeste Busca" << "\n";
        busca(ArvoreTrie, "ABACATE")? std::cout << "sim\n" :
                             std::cout << "não\n";
        busca(ArvoreTrie, "GILBERTO")? std::cout << "sim\n" :
                               std::cout << "não\n";

        return 0;
    }
