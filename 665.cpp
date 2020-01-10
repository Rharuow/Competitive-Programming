/* 665 False coin

Sample Input25 3
Universidad de Valladolid OJ:665  –  False coin2/22 1 2 3 4<1 1 4=1 2 5=6 43 1 2 3 4 5 6<1 1 2=2 1 3 4 5<2 4 5 2 6>

Sample Output
3
0

*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int M, N, K, P, moeda, i;
  vector<int> f,dir,esq;
  string bal;
  //Quantidade de casos
  cin >> M;
  //Cada caso
  while(M--) {
    //Quantidade de moedas (N) e usos da balança (K)
    cin >> N >> K;
    //tamanho do vector para moedas(f);
    f.resize(N);
    i=1;
    //Colocando em sequência as moedas no vector (f)
    generate(f.begin(),f.end(),[&i]{return i++;});
    //uso da balança
    while(K--) {
      //quantas moedas de cada lado da balança
      cin >> P;
      //limpando os vector dos lados da balança
      dir.clear();
      esq.clear();
      //guardando o valor da quantidade de moedas
      i = P;
      //colocando as moedas do lado esquerdo
      while(i--) {
        cin >> moeda;
        esq.push_back(moeda);
      }
      i = P;
      //colocando as moedas do lado direito
      while(i--) {
        cin >> moeda;
        dir.push_back(moeda);
      }
      //esprando para ver se deu pesos iguais ou não
      cin >> bal;
      //Se deu igual...
      if( bal == "=") {
        //remova do vector das moedas (f) os elementos que estão nos vectors dir e esq
        f.erase(remove_if(f.begin(),f.end(),
                          [&](int i){return find(esq.begin(),esq.end(),i)!=esq.end();}),f.end());
        f.erase(remove_if(f.begin(),f.end(),
                          [&](int i){return find(dir.begin(),dir.end(),i)!=dir.end();}),f.end());
      }
    }
    //imprimir a resposta se o tamanho do vector f seja 1 imprime o elemento restanto, caso contrário imprime 0
    cout << (f.size()==1?f[0]:0) << endl;
    if (M>0) cout << endl;
  }
  return 0;
}

