#include <iostream>
using namespace std;

// Funções para as Operações Matemáticas
double Adição(double A, double B) {
    return A + B;
}

double Subtração(double A, double B) {
    return A - B;
}

double Multiplicação(double A, double B) {
    return A * B;
}

double Divisão(double A, double B) {
    if (B != 0) {
        return A / B;
    } else {
        cout << "Nenhum número pode ser dividido por zero!" << endl;
        return 0; // Valor padrão para erro
    }
}

int main() {
    double Número_1, Número_2;
    char   Operação;
    double Resultado;
    char   Continuar;

    do {
        // Entrada de dados
        cout << "\n# Operações matemáticas básicas \n";
        cout << "Digite o primeiro número: ";
        cin >> Número_1;
        cout << "Digite um operador (+, -, *, /): ";
        cin >> Operação;
        cout << "Digite o segundo número: ";
        cin >> Número_2;

        // Estrutura condicional para selecionar a operação
        switch(Operação) {
            case '+':
                Resultado = Adição(Número_1, Número_2);
                break;
            case '-':
                Resultado = Subtração(Número_1, Número_2);
                break;
            case '*':
                Resultado = Multiplicação(Número_1, Número_2);
                break;
            case '/':
                Resultado = Divisão(Número_1, Número_2);
                break;
            default:
                cout << "Operador inválido" << endl;
                continue; // Volta ao início do loop sem sair
        }

        // Exibir o resultado com a fórmula
        cout << "Resultado: " << Número_1 << " " << Operação << " " << Número_2 << " = " << Resultado << endl;

        // Perguntar se o usuário quer continuar
        cout << "Deseja realizar outra operação? (s/n): ";
        cin >> Continuar;

    } while (Continuar == 's' || Continuar == 'S');
    

    cout << "Obrigado por usar a calculadora. Até mais!" << endl;
    return 0;
}
