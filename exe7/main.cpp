    #include <iostream>
    #include <cstdlib>
    #include <ctime>
    #include <cmath>
    #include <vector>
    #include <chrono> // C++11
    #include <algorithm>    // std::min_element, std::max_element

    //selectSort
    std::vector<int> selectSort(std::vector<int> vetor){
        int aux;
        for (int i = 0; i < vetor.size() - 1; i++){
            for (int j = i + 1; j <vetor.size(); j++){
              if (vetor[j] < vetor[i]){
                 aux = vetor[i];
                 vetor[i] = vetor[j];
                 vetor[j] = aux;
              }
            }
          }
        return vetor;
    }

    //insertSort
    std::vector<int> insertSort(std::vector<int> vetor){
        int i, chave, trocas;
        for (int j=1;j<vetor.size();j++)
              {
              chave = vetor[j];
              i = j - 1;
              while((i>=0) && (vetor[i]>chave))
                 {
                 vetor[i+1] = vetor[i];
                 i = i - 1;
                 trocas++;
                 }
              vetor[i+1] = chave;
              }
        return vetor;
    }

    //heapSort
    void Swap(std::vector<int>& vHeap, std::vector<int>::size_type i, std::vector<int>::size_type j)
    {
        if(i == j)
            return;

        int temp;
        temp = vHeap[i];
        vHeap[i] = vHeap[j];
        vHeap[j] = temp;
    }
    void Sift(std::vector<int>& vHeap, const std::vector<int>::size_type heapSize, const std::vector<int>::size_type siftNode)
    {
        std::vector<int>::size_type i, j;

        j = siftNode;
        do
        {
            i = j;
            if(((2*i + 1) < heapSize) && vHeap[j] < vHeap[2*i + 1])
                j = 2*i + 1;
            if(((2*i + 2) < heapSize) && vHeap[j] < vHeap[2*i + 2])
                j = 2*i + 2;

            Swap(vHeap, i, j);
        }
        while(i != j);
    }
    void MakeInitialHeap(std::vector<int>& vHeap)
    {
        for(int i = vHeap.size() - 1; i >= 0; --i)
        {
            Sift(vHeap, vHeap.size(), i);
        }
    }
    std::vector<int> heapSort(std::vector<int>& vHeap)
    {
        MakeInitialHeap(vHeap);
        for(std::vector<int>::size_type i = vHeap.size()-1; i > 0; --i)
        {
            Swap(vHeap, i, 0);
            Sift(vHeap, i, 0);
        }
        return vHeap;
    }

    //mergeSort
    std::vector<int> merge(std::vector<int> left, std::vector<int> right){
       std::vector<int> result;
       while ((int)left.size() > 0 || (int)right.size() > 0) {
          if ((int)left.size() > 0 && (int)right.size() > 0) {
             if ((int)left.front() <= (int)right.front()) {
                result.push_back((int)left.front());
                left.erase(left.begin());
             }
       else {
                result.push_back((int)right.front());
                right.erase(right.begin());
             }
          }  else if ((int)left.size() > 0) {
                for (int i = 0; i < (int)left.size(); i++)
                   result.push_back(left[i]);
                break;
          }  else if ((int)right.size() > 0) {
                for (int i = 0; i < (int)right.size(); i++)
                   result.push_back(right[i]);
                break;
          }
       }
       return result;
    }
    std::vector<int> mergeSort(std::vector<int> m){
       if (m.size() <= 1)
          return m;

       std::vector<int> left, right, result;
       int middle = ((int)m.size()+ 1) / 2;

       for (int i = 0; i < middle; i++) {
          left.push_back(m[i]);
       }

       for (int i = middle; i < (int)m.size(); i++) {
          right.push_back(m[i]);
       }

       left = mergeSort(left);
       right = mergeSort(right);
       result = merge(left, right);

       return result;
    }

    //quickSort
    void swap(int &a, int &b){
        int temp;
        a = b;
        b = temp;
    }
    int split_array(std::vector<int>& array, int pivot, int start_index, int end_index){
        int left_boundary = start_index;
        int right_boundary = end_index;
        while (left_boundary < right_boundary) {
            while (pivot < array[right_boundary] && right_boundary > left_boundary) {
                right_boundary--;
            }
            swap(array[left_boundary], array[right_boundary]);
            while (pivot >= array[left_boundary] && left_boundary < right_boundary) {
                left_boundary++;
            }
            swap(array[right_boundary], array[left_boundary]);
        }
        return left_boundary;
    }
    std::vector<int> quickSort(std::vector<int>& array, int start_index, int end_index){
        int pivot = array[start_index];
        int split_point;
        if (end_index > start_index) {
            split_point = split_array(array, pivot, start_index, end_index);
            array[split_point] = pivot;
            quickSort(array, start_index, split_point-1);
            quickSort(array, split_point+1, end_index);
        }
        return array;
    }

    //main
    int main(){

        srand (time(NULL));
        std::cout << "Lista 1 - Exercicio 7 [ Gabriel Sansigolo ]" << "\n \n";

        //declaração dos arrays
        std::vector<int> v1;
        std::vector<int> v2;
        std::vector<int> v3;
        std::vector<int> v4;
        std::vector<int> v5;

        //teste do contrutor para diferentes tipos de dados
        std::cout << "Teste Construtores" << "\n";
        std::cout << sizeof(v1) << std::endl;
        std::cout << sizeof(v2) << std::endl;
        std::cout << sizeof(v3) << std::endl;
        std::cout << sizeof(v4) << std::endl;
        std::cout << sizeof(v5) << std::endl;

        //teste do metodo de inserção
        std::cout << "\nTeste Inserção" << "\n";

        for (int var = 0; var < 10000; ++var) {
            v1.push_back(rand() % 10000 + 1);
            v2.push_back(rand() % 10000 + 1);
            v3.push_back(rand() % 10000 + 1);
            v4.push_back(rand() % 10000 + 1);
            v5.push_back(rand() % 10000 + 1);
        }
        for (int var = 0; var < 5; ++var)
           std::cout << "Inserção de 10000 número concluida." << "\n";

        //teste do metodo altura
        std::cout << "\nTeste Tamanho" << "\n";
        std::cout << "(v1) Tamanho: " << v1.size() << "\n" ;
        std::cout << "(v2) Tamanho: " << v2.size() << "\n" ;
        std::cout << "(v3) Tamanho: " << v3.size() << "\n" ;
        std::cout << "(v4) Tamanho: " << v4.size() << "\n" ;
        std::cout << "(v5) Tamanho: " << v5.size() << "\n";

        //selectSort
        std::cout << "\nselectSort()" << "\n";
        auto start = std::chrono::steady_clock::now() ;
        v1 = selectSort(v1);
        auto end = std::chrono::steady_clock::now() ;
        std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count()
                      << " milliseconds\n" ;
        auto start2 = std::chrono::steady_clock::now() ;
        v1 = selectSort(v1);
        auto end2 = std::chrono::steady_clock::now() ;
        std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end2-start2).count()
                      << " milliseconds\n" ;

        //insertSort
        std::cout << "\ninsertSort()" << "\n";
        auto start3 = std::chrono::steady_clock::now() ;
        v2 = insertSort(v2);
        auto end3 = std::chrono::steady_clock::now() ;
        std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end3-start3).count()
                      << " milliseconds\n" ;
        auto start4 = std::chrono::steady_clock::now() ;
        v2 = insertSort(v2);
        auto end4 = std::chrono::steady_clock::now() ;
        std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end4-start4).count()
                      << " milliseconds\n" ;

        //heapSort
        std::cout << "\nheapSort()" << "\n";
        auto start5 = std::chrono::steady_clock::now() ;
        v3 = heapSort(v3);
        auto end5 = std::chrono::steady_clock::now() ;
        std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end5-start5).count()
                      << " milliseconds\n" ;
        auto start6 = std::chrono::steady_clock::now() ;
        v3 = heapSort(v3);
        auto end6 = std::chrono::steady_clock::now() ;
        std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end6-start6).count()
                      << " milliseconds\n" ;

        //mergeSort
        std::cout << "\nmergeSort()" << "\n";
        auto start7 = std::chrono::steady_clock::now() ;
        v4 = mergeSort(v4);
        auto end7 = std::chrono::steady_clock::now() ;
        std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end7-start7).count()
                      << " milliseconds\n" ;
        auto start8 = std::chrono::steady_clock::now() ;
        v4 = mergeSort(v4);
        auto end8 = std::chrono::steady_clock::now() ;
        std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end8-start8).count()
                      << " milliseconds\n" ;

        //quickSort
        std::cout << "\nquickSort()" << "\n";
        auto start9 = std::chrono::steady_clock::now() ;
        v5 = quickSort(v5, 0, 9999);
        auto end9 = std::chrono::steady_clock::now() ;
        std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end9-start9).count()
                      << " milliseconds\n" ;
        auto start10 = std::chrono::steady_clock::now() ;
        v5 = quickSort(v5, 0, 9999);
        auto end10 = std::chrono::steady_clock::now() ;
        std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end10-start10).count()
                      << " milliseconds\n" ;

        return 0;
    }
