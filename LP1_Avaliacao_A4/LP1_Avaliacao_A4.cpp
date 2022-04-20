/*
    STI 21 LP1 AENPE 2021 M2 A4 ARRAYS e ORDENAÇÃO em CPP (equipe)
*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void initArray(char[], int);
void printArray(char[], int);
void sortArray(char[], int);

int main()
{
    const int tamanhodoarray = 10;
    char a[tamanhodoarray];

    initArray(a, tamanhodoarray);

    printArray(a, tamanhodoarray);

    sortArray(a, tamanhodoarray);

    printArray(a, tamanhodoarray);

    cout << endl;

    return 0;
}

void initArray(char a[], int b) {

    srand(time(0));
    int i;

    for (i = 0; i < b; i++)
        a[i] = 'A' + rand() % 26;
}

void printArray(char a[], int arraysize) {

    cout << "Itens de dados do array\n";
    int i;
    for (i = 0; i < arraysize; i++)
        cout << setw(4) << a[i];

    cout << endl;
}

void sortArray(char m[], int arraysize) {

    int pass, i, guarda;
    for (int pass = 0; pass < arraysize - 1; pass++) // passagens

        for (i = 0; i < arraysize - 1; i++) // passagem

            if (m[i] > m[i + 1]) {
                guarda = m[i];
                m[i] = m[i + 1];
                m[i + 1] = guarda;
            }
}


// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar:
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
