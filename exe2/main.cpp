    #include <iostream>
    #include "arvore.hpp"

    //main
    int main(){

        std::cout << "Lista 1 - Exercicio 2 [ Gabriel Sansigolo ]" << "\n \n";

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
        arvInt.inserir(&arvInt, 1);
        arvInt.inserir(&arvInt, 2);
        arvDouble.inserir(&arvDouble, 2.44);
        arvDouble.inserir(&arvDouble, 3.55);
        arvString.inserir(&arvString, "João");
        arvString.inserir(&arvString, "Maria");

        //teste do metodo de busca
        std::cout << "\nTeste Busca" << "\n";
        arvInt.busca(&arvInt, 2);
        arvDouble.busca(&arvDouble, 3.55);
        arvString.busca(&arvString, "Maria");

        //teste do metodo de remoção
        std::cout << "\nTeste Remoção" << "\n";
        arvInt.destruir(&arvInt,2);
        arvDouble.destruir(&arvDouble,2.33);
        arvString.destruir(&arvString,"Maria");

        //teste do destrutor
        std::cout << "\nTeste Destrutores" << "\n";

        return 0;
    }
