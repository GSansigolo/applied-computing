    #include <iostream>
    #include "arvore.hpp"

    //main
    int main(){

        std::cout << "Lista 1 - Exercicio 4 [ Gabriel Sansigolo ]" << "\n \n";

        //declaração das diferentes arvores
        Arvore<int> arvInt(5);
        Arvore<double> arvDouble(5.33);

        //teste do contrutor para diferentes tipos de dados
        std::cout << "Teste Construtores" << "\n";
        std::cout << sizeof(arvInt) << std::endl;
        std::cout << sizeof(arvDouble) << std::endl;

        //teste do metodo de inserção
        std::cout << "\nTeste Inserção" << "\n";
        arvInt.inserir(&arvInt, 1);
        arvInt.inserir(&arvInt, 10);
        arvDouble.inserir(&arvDouble, 1.44);
        arvDouble.inserir(&arvDouble, 3.55);
        arvDouble.inserir(&arvDouble, 10.55);


        //teste do metodo altura
        std::cout << "\n\nTeste Altura" << "\n";
        std::cout << arvInt.altura(&arvInt) << "\n";
        std::cout << arvDouble.altura(&arvDouble);

        //teste do destrutor
        std::cout << "\n\nTeste Destrutores" << "\n";

        return 0;
    }
