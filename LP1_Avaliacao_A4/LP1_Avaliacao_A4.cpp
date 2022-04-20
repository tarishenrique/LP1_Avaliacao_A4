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