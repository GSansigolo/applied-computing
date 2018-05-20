    #include <iostream>
    #include "arvore.hpp"

    //main
    int main(){

        std::cout << "Lista 1 - Exercicio 3 [ Gabriel Sansigolo ]" << "\n \n";

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

        //teste do metodo print preorder
        std::cout << "\npreOrder" << "\n";
        arvInt.printPreOrder(&arvInt);

        //teste do metodo print inorder
        std::cout << "\n\ninOrder" << "\n";
        arvDouble.printInOrder(&arvDouble);

        //teste do metodo print posorder
        std::cout << "\n\nposOrder" << "\n";
        arvString.printPosOrder(&arvString);

        //teste do destrutor
        std::cout << "\n\nTeste Destrutores" << "\n";

        return 0;
    }
