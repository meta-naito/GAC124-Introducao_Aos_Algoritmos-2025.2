//semana 13, questão prática 3
#include <iostream>
using namespace std;

void colocaNumerosIniciais(int *&vetor, const int *vetorInicial, const int tamInicial) {
	for (int i = 0; i < tamInicial; i++) {
		vetor[i] = vetorInicial[i];
	}
	
	return;
}

int main() {
	const int tamVetor = 20, tamInicial = 8;
	const int vetorInicial[tamInicial] = {1, 3, 6, 7, 8, 22, 25, 41};
	
	int *vetor = new int[tamVetor];
	colocaNumerosIniciais(vetor, vetorInicial, tamInicial);
	
	int num, qNum = 8; //qNum é igual a oito por conta dos primeiros 8 numeros já colocados anteriormente no vetor!
	cin >> num;

	while (num != -1 and qNum < tamVetor) { //se qNum for igual ao tamVetor, ele já tá preenchido e sai do while pra impressão
		qNum++;

		int posNum = qNum - 2;

		while (num < vetor[posNum] and posNum >= 0) {
			vetor[posNum + 1] = vetor[posNum];
			posNum--;
		}
		vetor[posNum + 1] = num;
	
		cin >> num;
	}
	
	for (int i = 0; i < qNum; i++) {
		cout << vetor[i] << " ";
	}
	
	cout << endl;

	delete [] vetor;

	return 0;
}
