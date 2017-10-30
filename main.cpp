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
        
    //O Incremento ocorre de forma automática
    //Um comando, não precisa usar chaves
    int count = 0;
    int nValor;
    double valor;
    double soma;
    
    
    do
    {
        cout << "O valor apos o incremento eh: " << count << '\n';
        count++;
    } while(count < 10);
    
    cout << "\n\nDigite o numero de valores a serem somados:\n";
    cin >> nValor;
    
    count = 0;
    soma = 0;
    while(count < nValor)
    {
        cout << "Digite um valor: " << '\n';
        cin >> valor;
        if(valor < 0)
            continue;
            
        soma += valor;
        count++;
    }
    if (count > 0)
        cout << "A media eh: " << soma/count << '\n';
        
        
    cout << "\n\nDigite valores positivos a serem somados ou qualquer valor negativo para parar:\n";
    
    while (true)
    {
        cout << "Digite o valor: " << '\n';
        cin >> valor;
        
        if (valor < 0)
            break;
    }
        
    system ("pause");  
    return 0;

}
