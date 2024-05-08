#include <iostream>
#include <string>
using namespace std;
using std::string;

class turmaAED {
private:
	string aluno;
	int matricula;
	string curso;

public:
	turmaAED();
	void cadastro(string nome, int numero, string nomeCurso);
	void mostraCadastrado();
};

turmaAED::turmaAED() {
	aluno = "";
	matricula = 0;
	curso = "";
}

void turmaAED::cadastro(string nome, int numero, string nomeCurso) {
	aluno = nome;
	matricula = numero;
	curso = nomeCurso;
}

void turmaAED::mostraCadastrado() {
	cout << "Aluno: " << aluno << endl;
	cout << "Matricula: " << matricula << endl;
	cout << "Curso: " << curso << endl;
}

int main() {
	turmaAED aluno1;

	aluno1.cadastro("Joao", 3333, "Engenharia");
	aluno1.mostraCadastrado();
}