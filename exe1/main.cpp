    #include <iostream>
    #include "arvore.hpp"

    //main
    int main(){

        std::cout << "Lista 1 - Exercicio 1 [ Gabriel Sansigolo ]" << "\n \n";

        //testando o contrutor da arvore para diferentes tipos de dados
        std::cout << "Teste Construtores" << "\n";
        Arvore<std::string> arvString;
        Arvore<int> arvInt;
        Arvore<double> arvDouble;

        return 0;
    }
