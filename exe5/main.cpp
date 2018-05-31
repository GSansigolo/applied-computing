    #include <iostream>
    #include <cstdlib>
    #include <ctime>
    #include <cmath>
    #include "arvore.hpp"

    //main
    int main(){

        srand (time(NULL));
        std::cout << "Lista 1 - Exercicio 5 [ Gabriel Sansigolo ]" << "\n \n";

        //declaração das diferentes arvores
        Arvore<int> arvInt1(rand() % 10 + 1);
        Arvore<double> arvInt2(rand() % 100 + 1);
        Arvore<int> arvInt3(rand() % 1000 + 1);
        Arvore<double> arvInt4(rand() % 10000 + 1);
        Arvore<int> arvInt5(rand() % 100000 + 1);
        Arvore<double> arvInt6(rand() % 1000000 + 1);

        //teste do contrutor para diferentes tipos de dados
        std::cout << "Teste Construtores" << "\n";
        std::cout << sizeof(arvInt1) << std::endl;
        std::cout << sizeof(arvInt2) << std::endl;
        std::cout << sizeof(arvInt3) << std::endl;
        std::cout << sizeof(arvInt4) << std::endl;
        std::cout << sizeof(arvInt5) << std::endl;
        std::cout << sizeof(arvInt6) << std::endl;

        //teste do metodo de inserção
        std::cout << "\nTeste Inserção" << "\n";

        std::cout << "Inserção de 10 número concluida." << "\n";
        for (int var = 0; var < 9; ++var) {
            arvInt1.inserir(&arvInt1, rand() % 10 + 1);
        }
        std::cout << "Inserção de 100 número concluida." << "\n";
        for (int var = 0; var < 99; ++var) {
            arvInt2.inserir(&arvInt2, rand() % 100 + 1);
        }
        std::cout << "Inserção de 1000 número concluida." << "\n";
        for (int var = 0; var < 999; ++var) {
            arvInt3.inserir(&arvInt3, rand() % 1000 + 1);
        }
        std::cout << "Inserção de 10000 número concluida." << "\n";
        for (int var = 0; var < 9999; ++var) {
            arvInt4.inserir(&arvInt4, rand() % 10000 + 1);
        }
        std::cout << "Inserção de 100000 número concluida." << "\n";
        for (int var = 0; var < 99999; ++var) {
            arvInt5.inserir(&arvInt5, rand() % 100000 + 1);
        }
        std::cout << "Inserção de 1000000 número concluida." << "\n";
        for (int var = 0; var < 999999; ++var) {
            arvInt6.inserir(&arvInt6, rand() % 1000000 + 1);
        }

        //teste do metodo altura
        std::cout << "\nTeste Altura" << "\n";
        std::cout << "" <<arvInt1.altura(&arvInt1) << "/" << (log2(10)) << "=" << arvInt1.altura(&arvInt1)/(log2(10)) << "\n";
        std::cout << "" <<arvInt2.altura(&arvInt2) << "/" << (log2(100)) << "=" << arvInt2.altura(&arvInt2)/(log2(100)) << "\n";
        std::cout << "" <<arvInt3.altura(&arvInt3) << "/" << (log2(1000)) << "=" << arvInt3.altura(&arvInt3)/(log2(1000)) << "\n";
        std::cout << "" <<arvInt4.altura(&arvInt4) << "/" << (log2(10000)) << "=" << arvInt4.altura(&arvInt4)/(log2(10000)) << "\n";
        std::cout << "" <<arvInt5.altura(&arvInt5) << "/" << (log2(100000))  << "=" << arvInt5.altura(&arvInt5)/(log2(100000)) << "\n";
        std::cout << "" <<arvInt6.altura(&arvInt6) << "/" << (log2(1000000)) << "=" << arvInt6.altura(&arvInt6)/(log2(1000000)) << "\n";

        //teste do destrutor
        std::cout << "\nTeste Destrutores" << "\n";

        return 0;
    }
