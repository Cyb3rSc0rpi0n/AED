#include <iostream>
#include <string>
using namespace std;
using std::string;

class cliente {
private:
	string nome;
	int telefone;
	string marca;
	int placa;
	string cor;

public:
	cliente();
	void cadastroCliente(string nomeCliente, int celular);
	void cadastroCarro(string marcaCarro, int placaCarro, string corCarro);
	void imprimeDados();
};

cliente::cliente(){
	nome = "";
	telefone = 0;
	marca = "";
	placa = 0;
	cor = "";
}

void cliente::cadastroCliente(string nomeCliente, int celular) {
	nome = nomeCliente;
	telefone = celular;
}

void cliente::cadastroCarro(string marcaCarro, int placaCarro, string corCarro) {
	marca = marcaCarro;
	placa = placaCarro;
	cor = corCarro;
}

void cliente::imprimeDados() {
	cout << "Nome cliente: ";
	cout << nome << endl;
	cout << "Telefone cliente: ";
	cout << telefone << endl;;
	cout << "Marca do carro: ";
	cout << marca << endl;;
	cout << "Placa: ";
	cout << placa << endl;;
	cout << "Cor: ";
	cout << cor << endl;;
}

int main() {
	cliente pessoa1;
	cliente pessoa2;

	pessoa1.cadastroCliente("Geraldo", 219998390);
	pessoa1.cadastroCarro("Gol", 3424, "Dourado");
	pessoa1.imprimeDados();
}