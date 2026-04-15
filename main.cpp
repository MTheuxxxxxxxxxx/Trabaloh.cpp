#include <iostream>

//Calculadora do Matheuzin 01

using namespace std;
int main()
{
    int num1, num2, resultado;
    char op;

    cout <<"Digita um número: "<< endl;
    cin >> num1;

    cout <<"Escolhe a operação [+,-,*,/]"<< endl;
    cin >> op;

    cout <<"Digita o outro número: "<< endl;
    cin >> num2;
    
    switch (op)
    {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
             break;
        case '/':
            resultado = num1 / num2;
            break;

    }


    cout << num1 << op << num2 << " = " << resultado << endl;
    return 0;

}
