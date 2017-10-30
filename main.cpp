#include <stdlib.h>

#include <iostream>
using std::cout;
using std::cin;

int main(int argc, char **argv)
{
    int option;

    cout << "Entre com o valor da opção: ";
    cin >> option;
    

    switch(option)
    {
	case 1:
		cout << "EXC";
		break;
	case 2:
		cout << "BOM";
		break;
	case 3:
		cout << "REG";
		break;
	default:
		cout << "Aluno reprovado.";
		break;
    }
    
    cout << '\n';
    
    //O incremento ocorre de forma automática
    //Um comando, não precisa usar chaves
    for(int i = 0; i < 10; i++)
        cout << "O valor apos o incremento eh: " << i << '\n';
        
    cout << "\n\nIncrementando de dois em dois.\n";
    
    //Incrementando de dois em dois
    for(int i = 0; i < 10; i+=2)
        cout << "O valor apos o incremento eh: " << i << '\n';
        
    cout << "\n\nDecrementando a partir de 10.\n";
    
    //Decrementando
    for(int i = 10; i > 10; i--)
        cout << "O valor apos o incremento eh: " << i << '\n';
        
    system ("pause");  
    return 0;

}
