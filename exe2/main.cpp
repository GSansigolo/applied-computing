    #include <iostream>
    #include "arvore.hpp"

    //main
    int main(){

        std::cout << "Lista 1 - Exercicio 2 [ Gabriel Sansigolo ]" << "\n \n";

        //testando o contrutor da arvore para diferentes tipos de dados
        std::cout << "Teste Construtores" << "\n";
        Arvore<std::string> arvString;
        Arvore<int> arvInt;
        Arvore<double> arvDouble;

        //testando busca de uma string na arvString
        std::cout << "Teste Busca" << "\n";
        busca();

        //tstando inserção de um int na arvInt
        std::cout << "Teste Inserção" << "\n";
        insercao();

        //testando remoção de um double na arvDouble
        std::cout << "Teste Remoção" << "\n";
        remocao();

        std::cout << "\n";

        return 0;
    }
