#include <iostream>
#include <string>
using namespace std;
using std::string;

class AgendaTelefonica {
private:
	int telefone;
	string nome;

public:
	AgendaTelefonica();
	void DefinirTelefone(int numero);
	void DefinirNome(string usuario);
	void ImprimirTelefone();
	void ImprimirNome();
};

AgendaTelefonica::AgendaTelefonica() {
	telefone = 0;
	nome = "";
}

void AgendaTelefonica::DefinirTelefone(int numero) {
	telefone = numero;
}

void AgendaTelefonica::DefinirNome(string usuario) {
	nome = usuario;
}

void AgendaTelefonica::ImprimirTelefone() {
	cout << "O numero de telefone e: " << telefone << endl;
}

void AgendaTelefonica::ImprimirNome() {
	cout << "O nome do contato e: " << nome << endl;
}

int main() {
	AgendaTelefonica contato1;
	AgendaTelefonica contatoNull;

	contato1.DefinirNome("Cleber");
	contato1.DefinirTelefone(6199321456789);
	contato1.ImprimirNome();
	contato1.ImprimirTelefone();
}