    #include <iostream>
    #include <cstdlib>
    #include <ctime>
    #include <cmath>

    //main
    int main(){

        srand (time(NULL));
        std::cout << "Lista 1 - Exercicio 7 [ Gabriel Sansigolo ]" << "\n \n";

        //declaração das diferentes arvores
        Arvore<double> arvInt6(rand() % 1000000 + 1);

        //teste do contrutor para diferentes tipos de dados
        std::cout << "Teste Construtores" << "\n";
        std::cout << sizeof(arvInt1) << std::endl;


        //teste do metodo de inserção
        std::cout << "\nTeste Inserção" << "\n";

        std::cout << "Inserção de 1000000 número concluida." << "\n";
        for (int var = 0; var < 999999; ++var) {
            arvInt6.inserir(&arvInt6, rand() % 1000000 + 1);
        }

        //teste do metodo altura

        //teste do destrutor
        std::cout << "\nTeste Destrutores" << "\n";

        return 0;
    }
