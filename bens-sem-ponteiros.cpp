#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Defini��o da estrutura de um bem m�vel que será adicionado ao arquivo
struct Movels {
    string nome;
    string categoria;
    string dataAquisicao;
    double peso;
};

// Defini��o da estrutura de um bem im�vel
struct Imovels {
    string nome;
    string categoria;
    string dataAquisicao;
    string endereco;
};

// Fun��o para adicionar um bem m�vel ao arquivo pretendido
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

// Fun��o para adicionar um bem im�vel ao arquivo que está gravado com "imoveis.txt"
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

// Fun��o principal
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
