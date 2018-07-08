#ifndef __maxheap_hpp__
#define __maxheap_hpp__

//-------------------------
//Estrutura No
//-------------------------
struct no {
   char valor;
   no *prox;
};

//-------------------------
//Estrutura Grafo
//-------------------------
struct grafo {
   struct no *v[7];
};

//-------------------------
//Função Criar Novo Grafo
//-------------------------
static grafo *novoGrafo() {
   grafo *ponteiroGrafo = new grafo;
   for (int i = 0; i < 7; i++){
       ponteiroGrafo->v[i] = nullptr;
   }
   return ponteiroGrafo;
}

//-------------------------
//Função Criar Novo Nó
//-------------------------
static no *criaNo(char valor) {
   no *ponteiroNo = new no;
   ponteiroNo->valor = valor;
   ponteiroNo->prox = nullptr;
   return ponteiroNo;
}

//-------------------------
//Salva Nó
//-------------------------
static void salvaNo(grafo *g, int pos, char valor) {
    no *ponteiroNoRaiz = g->v[pos];
    no *ponteiroNo = g->v[pos];
    if(ponteiroNoRaiz == nullptr){
        g->v[pos] = criaNo(valor);
    } else {
        while(ponteiroNo != nullptr){
           ponteiroNo = ponteiroNo->prox;
        }
        ponteiroNo = criaNo(valor);
        while(ponteiroNoRaiz != nullptr){
            if(ponteiroNoRaiz->prox == nullptr){
              ponteiroNoRaiz->prox = ponteiroNo;
              return;
            }
           ponteiroNoRaiz = ponteiroNoRaiz->prox;
        }
    }
}

#endif // __maxheap_hpp
