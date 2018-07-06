    #include <iostream>
    #include <vector>
    #include <string>
    #include "arvore.hpp"

    //main
    int main(){

        std::cout << "Lista Complementar - Exercicio 1 [ Gabriel Sansigolo ]" << "\n \n";

        //declaração arvore
        Arvore<char> arv;

        //teste do contrutor para diferentes tipos de dados
        std::cout << "Teste Construtores" << "\n";
        std::cout << sizeof(arv) << std::endl;

        //teste do metodo de inserção
        std::cout << "\nTeste Inserção" << "\n";
        arv.escreve(&arv, "ABACATE", 7);
        arv.escreve(&arv, "ABACAXI", 7);

        //teste do metodo de busca
        //std::cout << "\nTeste Busca" << "\n";
        //arvString.busca(&arvString, "João");

        //teste do destrutor
        std::cout << "\nTeste Destrutores" << "\n";

        return 0;
    }
