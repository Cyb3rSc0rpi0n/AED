#include <iostream>
#include <string>
#include <stack>

using namespace std;

string removerEspacosEPontos(string str) {
    string novaString = "";
    for (char c : str) {
        if (c != ' ' && c != '.') {
            novaString += c;
        }
    }
    return novaString;
}

string inverterTexto(string str) {
    stack<char> pilha;
    for (char c : str) {
        pilha.push(c);
    }
    string textoInvertido = "";
    while (!pilha.empty()) {
        textoInvertido += pilha.top();
        pilha.pop();
    }
    return textoInvertido;
}

bool verificarPalindromo(string str) {
    string strSemEspacosEPontos = removerEspacosEPontos(str);
    string strInvertida = inverterTexto(strSemEspacosEPontos);
    return strSemEspacosEPontos == strInvertida;
}

int main() {
    string texto;
    cout << "Digite uma sequência de caracteres quiasquer: ";
    getline(cin, texto);

    string textoInvertido = inverterTexto(texto);
    cout << "Texto na ordem inversa: " << textoInvertido << endl;

    bool ehPalindromo = verificarPalindromo(texto);
    if (ehPalindromo) {
        cout << "O texto e um palindromo." << endl;
    }
    else {
        cout << "O texto nao e um palindromo." << endl;
    }

    return 0;
}
