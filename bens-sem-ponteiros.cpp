#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Definição da estrutura de um bem móvel
struct Movels {
    string nome;
    string categoria;
    string dataAquisicao;
    double peso;
};

// Definição da estrutura de um bem imóvel
struct Imovels {
    string nome;
    string categoria;
    string dataAquisicao;
    string endereco;
};

// Função para adicionar um bem móvel ao arquivo
void adicionarBemMovel() {
    Movels bem;
    ofstream arquivo("moveis.txt", ios::app);
    
    cout << "Nome do bem: ";
    getline(cin, bem.nome);
    cout << "Categoria: ";
    getline(cin, bem.categoria);
    cout << "Data de Aquisicao: ";
    getline(cin, bem.dataAquisicao);
    cout << "Peso: ";
    cin >> bem.peso;
    
    arquivo << bem.nome << "," << bem.categoria << "," << bem.dataAquisicao << "," << bem.peso << endl;
    
    arquivo.close();
}

// Função para adicionar um bem imóvel ao arquivo
void adicionarBemImovel() {
    Imovels bem;
    ofstream arquivo("imoveis.txt", ios::app);
    
    cout << "Nome do bem: ";
    getline(cin, bem.nome);
    cout << "Categoria: ";
    getline(cin, bem.categoria);
    cout << "Data de Aquisicao: ";
    getline(cin, bem.dataAquisicao);
    cout << "Endereco: ";
    getline(cin, bem.endereco);
    
    arquivo << bem.nome << "," << bem.categoria << "," << bem.dataAquisicao << "," << bem.endereco << endl;
    
    arquivo.close();
}

// Função principal
int main() {
    int opcao;
    
    cout << "1. Adicionar bem movel" << endl;
    cout << "2. Adicionar bem imovel" << endl;
    cout << "Escolha uma opcao: ";
    cin >> opcao;
    cin.ignore(); // Limpar o buffer de entrada
    
    switch(opcao) {
        case 1:
            adicionarBemMovel();
            break;
        case 2:
            adicionarBemImovel();
            break;
        default:
            cout << "Opcao invalida" << endl;
    }
    
    return 0;
}
