    #include <iostream>
    #include "arvore.hpp"

    //main
    int main(){

        std::cout << "Lista 1 - Exercicio 1 [ Gabriel Sansigolo ]" << "\n \n";

        //declaração das diferentes arvores
        Arvore<std::string> arvString;
        Arvore<int> arvInt;
        Arvore<double> arvDouble;

        //teste do contrutor para diferentes tipos de dados
        std::cout << "Teste Construtores" << "\n";
        std::cout << sizeof(arvString) << std::endl;
        std::cout << sizeof(arvInt) << std::endl;
        std::cout << sizeof(arvDouble) << std::endl;

        //teste do metodo de inserção
        std::cout << "\nTeste Inserção" << "\n";
        std::cout << sizeof(arvString.inserir("João")) << std::endl;
        std::cout << sizeof(arvInt.inserir(1)) << std::endl;
        std::cout << sizeof(arvDouble.inserir(3.14)) << std::endl;
        //teste do destrutor
        std::cout << "\nTeste Destrutores" << "\n";


        return 0;
    }
