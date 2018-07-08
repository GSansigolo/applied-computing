#ifndef __maxheap_hpp__
#define __maxheap_hpp__

//----------------------------
//Função Corrige
//----------------------------
std::vector<int> corrige(std::vector<int> A, int n, int i){
    int j = i;
    while(2*j<=n){
        int f = 2*j;
        if(f < n && A[f] < A[f+1]){
            f = f+1;
        }
        if(A[j] >= A[f]){
            j = n;
        } else {
            int temp = A[j];
            A[j] = A[f];
            A[f] = temp;
            j=f;
        }
    }
    return A;
}

//----------------------------
//Função Novo MaxHeap
//----------------------------
std::vector<int> novoMaxHeap(std::vector<int> A, int n){
    for(int i=n; i>=0; i--){
        A = corrige(A, n, i);
    }
    return A;
}

//----------------------------
//Função Maximo
//----------------------------
int max(std::vector<int> A){
    return A[0];
}

//----------------------------
//Função Maximo
//----------------------------
int min(std::vector<int> A){
    return A[A.size()-1];
}

#endif // __maxheap_hpp
