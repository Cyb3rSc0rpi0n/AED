#include <iostream>
#include <string>
using namespace std;
using std::string;

class turmaAED {
private:
	string aluno;
	int matricula;
	string curso;
	float nota;
	int faltas;

public:
	turmaAED();
	void cadastraAluno(string nome, int numero, string nomeCurso);
	void mostraCadastrado();
	void atribuirNota(float pontuacao);
	void atribuirFaltas(int aulasPerdidas);
};

turmaAED::turmaAED() {
	aluno = "";
	matricula = 0;
	curso = "";
	nota = 0;
	faltas = 0;
}

void turmaAED::cadastraAluno(string nome, int numero, string nomeCurso) {
	aluno = nome;
	matricula = numero;
	curso = nomeCurso;
}

void turmaAED::mostraCadastrado() {
	cout << "Aluno: " << aluno << endl;
	cout << "Matricula: " << matricula << endl;
	cout << "Curso: " << curso << endl;
	cout << "Nota: " << nota << endl;
	cout << "Faltas: " << faltas << endl;
}
void turmaAED::atribuirNota(float pontuacao) {
	nota = pontuacao;
}

void turmaAED::atribuirFaltas(int aulasPerdidas) {
	faltas = aulasPerdidas;
}

int main() {
	turmaAED aluno1;

	aluno1.cadastraAluno("Joao", 2333, "Engenharia");
	aluno1.atribuirNota(6.3);
	aluno1.atribuirFaltas(3);
	aluno1.mostraCadastrado();
}