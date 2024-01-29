#include <iostream>
#include <string>

using namespace std;

class Pessoa {
    protected:
        string nome;
        int idade;
    public:
        Pessoa(string _nome, int _idade);
        ~Pessoa();
        virtual void mostra();
};

Pessoa::Pessoa(string _nome, int _idade) {
    nome = _nome;
    idade = _idade;
}
Pessoa::~Pessoa() {
   cout << "Classe Pessoa Destruida";
}

void Pessoa::mostra() {
    cout << "Mostra Pessoa" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
}


class Cliente : public Pessoa {
    private:
        int salario;
    public:
        Cliente( string _nome, int _idade, int _salario);
        void mostra();
};

Cliente::Cliente( string _nome, int _idade, int _salario) : Pessoa(_nome, _idade) {
    salario = _salario;
}

void Cliente::mostra() {

    Pessoa::mostra();

    cout << "Mostra Cliente" << endl;
    //cout << "Nome: " << nome << endl;
    //cout << "Idade: " << idade << endl;
    cout << "Salario: " << salario << endl;
}

class Conta : public Cliente {
    private:
        int agencia;
        int conta;
    public:
        Conta(string _nome, int _idade, int _salario, int _agencia, int _conta);
        void mostra();
};

Conta::Conta(string _nome, int _idade, int _salario, int _agencia, int _conta) : Cliente(_nome, _idade,_salario) {
    agencia = _agencia;
    conta = _conta;
}


void Conta::mostra() {

    Cliente::mostra();

    cout << "Mostra Conta" << endl;
    cout << "Agencia: " << agencia << endl;
    cout << "Conta: " << conta << endl;
    //cout << "Salario: " << salario << endl;
}

int main ()
{
    Conta conta = Conta("Marcelo", 33, 100, 01, 12);
    conta.mostra();
    //getch();
    return 0;
}