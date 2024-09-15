// OOP

#include <iostream>
#include <string>

using namespace std;

class Pessoa
{
private:
    string nome;
    int idade;

public:
    // construtor
    Pessoa(int idade, string nome)
    {
        this->idade = idade;
        this->nome = nome;
    }

    string getNome()
    {
        return nome;
    }

    int getIdade()
    {
        return idade;
    }

    void imprimeNome()
    {
        cout << "Nome: " << nome << endl;
    }

    // Método para imprimir a idade
    void imprimeIdade()
    {
        cout << "Idade: " << idade << endl;
    }
};

// herança de classe
class Aluno : public Pessoa
{
private:
    int matricula;

public:
    // construtor
    Aluno(int idade, string nome, int matricula) : Pessoa(idade, nome)
    {
        this->matricula = matricula;
    }

    int getMatricula()
    {
        return matricula;
    }

    void imprimeIdade()
    {
        cout << "A idade do aluno é: " << getIdade() << " anos" << endl;
    }

    void imprimeMatricula()
    {
        cout << "A matrícula do aluno é: " << matricula << endl;
    }
};

// herança de classe
class Professor : public Pessoa
{
public:
    // construtor
    Professor(int idade, string nome) : Pessoa(idade, nome) {}

    void imprimeIdade()
    {
        cout << "A idade do professor é: " << getIdade() << " anos" << endl;
    }
};

int main()
{
    // objetos das classes
    Pessoa pessoa(53, "Jose");

    Aluno aluno(21, "Felipe", 329);

    Professor professor(50, "NumSei");

    // atributos e metodos de cada objeto
    cout << "Pessoa:" << endl;
    pessoa.imprimeNome();
    pessoa.imprimeIdade();

    cout << "Aluno:" << endl;
    aluno.imprimeNome();
    aluno.imprimeIdade();
    aluno.imprimeMatricula();

    cout << "\nProfessor:" << endl;
    professor.imprimeNome();
    professor.imprimeIdade();

    return 0;
}