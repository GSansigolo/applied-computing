    #include <iostream>
    #include <cstdlib>
    #include <ctime>
    #include "arvore.hpp"

    //main
    int main(){

        srand (time(NULL));
        std::cout << "Lista 1 - Exercicio 5 [ Gabriel Sansigolo ]" << "\n \n";

        //declaração das diferentes arvores
        Arvore<int> arvInt1(rand() % 10 + 1);
        Arvore<double> arvDouble1(rand() % 100 + 1);
        Arvore<int> arvInt2(rand() % 1000 + 1);
        Arvore<double> arvDouble2(rand() % 10000 + 1);
        Arvore<int> arvInt3(rand() % 100000 + 1);
        Arvore<double> arvDouble3(rand() % 1000000 + 1);

        //teste do contrutor para diferentes tipos de dados
        std::cout << "Teste Construtores" << "\n";
        std::cout << sizeof(arvInt1) << std::endl;
        std::cout << sizeof(arvDouble1) << std::endl;
        std::cout << sizeof(arvInt2) << std::endl;
        std::cout << sizeof(arvDouble2) << std::endl;
        std::cout << sizeof(arvInt3) << std::endl;
        std::cout << sizeof(arvDouble3) << std::endl;

        //teste do metodo de inserção
        std::cout << "\nTeste Inserção" << "\n";

        std::cout << "Inserção de 10 número concluida." << "\n";
        for (int var = 0; var < 9; ++var) {
            arvInt1.inserir(&arvInt1, rand() % 10 + 1);
        }
        std::cout << "Inserção de 100 número concluida." << "\n";
        for (int var = 0; var < 99; ++var) {
            arvDouble1.inserir(&arvDouble1, rand() % 100 + 1);
        }
        std::cout << "Inserção de 1000 número concluida." << "\n";
        for (int var = 0; var < 999; ++var) {
            arvInt2.inserir(&arvInt2, rand() % 1000 + 1);
        }
        std::cout << "Inserção de 10000 número concluida." << "\n";
        for (int var = 0; var < 9999; ++var) {
            arvDouble2.inserir(&arvDouble2, rand() % 10000 + 1);
        }
        std::cout << "Inserção de 100000 número concluida." << "\n";
        for (int var = 0; var < 99999; ++var) {
            arvInt3.inserir(&arvInt3, rand() % 100000 + 1);
        }
        std::cout << "Inserção de 1000000 número concluida." << "\n";
        for (int var = 0; var < 999999; ++var) {
            arvDouble3.inserir(&arvDouble3, rand() % 1000000 + 1);
        }

        //teste do metodo altura
        std::cout << "\nTeste Altura" << "\n";
        std::cout << arvInt1.altura(&arvInt1) << "\n";
        std::cout << arvDouble1.altura(&arvDouble1) << "\n";
        std::cout << arvInt2.altura(&arvInt2) << "\n";
        std::cout << arvDouble2.altura(&arvDouble2) << "\n";
        std::cout << arvInt3.altura(&arvInt3) << "\n";
        std::cout << arvDouble3.altura(&arvDouble3) << "\n";

        //teste do destrutor
        std::cout << "\n\nTeste Destrutores" << "\n";

        return 0;
    }
