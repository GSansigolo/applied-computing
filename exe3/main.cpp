    #include <iostream>
    #include "arvore.hpp"

    //main
    int main(){

        std::cout << "Lista 1 - Exercicio 3 [ Gabriel Sansigolo ]" << "\n";

        //declaração das diferentes arvores
        Arvore<std::string> arvString;
        Arvore<int> arvInt;
        Arvore<double> arvDouble;

        //inserção
        arvInt.inserir(1);
        arvInt.inserir(2);
        arvInt.inserir(3);
        arvDouble.inserir(1.44);
        arvDouble.inserir(2.33);
        arvDouble.inserir(3.22);
        arvString.inserir("João");
        arvString.inserir("Maria");
        arvString.inserir("Jose");

        //teste dos metodos de busca
        std::cout << "\preOrder" << "\n";
        std::cout << "\ninOrder" << "\n";
        std::cout << "\nposOrder" << "\n";

        return 0;
    }
