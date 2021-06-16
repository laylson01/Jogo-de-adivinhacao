#include <iostream>
using namespace std;

int main()
{
    cout << "********************" << endl;
    cout << "BEM VINDO AO JOGO" << endl;
    cout << "********************" << endl;

    const int n_secret = 42;
    bool n_acertou = true;  //ENQUANTO NÃO ACERTAR ++
    int tentativas = 0;     //TENTATIVAS
    double pontos = 1000.0; /// SISTEMA DE PONTUAÇÃO

    while (n_acertou)
    {
        //tentativas = tentativas +1;
        tentativas++;
        int chute;
        cout << "Tentativas = " << tentativas << endl;
        cout << "Chute um número: ";
        cin >> chute;
        cout << "o número que vc chutou é: " << chute << endl;

        bool acertou = chute == n_secret;
        bool maior = chute > n_secret;

        double pontos_perdidos = abs(chute - n_secret) / 2.0; // CALCULO DE SISTEMA DE PONTUAÇÃO
        pontos = pontos - pontos_perdidos;

        if (acertou)
        {
            cout << "PARABÉN, VOCÊ ACERTOU!!" << endl;
            n_acertou = false;
        }
        else if (maior)
        {
            cout << "SEU CHUTE É MAIOR QUE O NUMERO SECRETO" << endl;
        }
        else
        {
            cout << "SEU CHUTE É MENOR QUE O NÚMERO SECRETO" << endl;
        }
    }

    cout << "FIM DE JOGO" << endl;
    cout << "VOCÊ ACERTOU O NÚMERO SECRETO EM " << tentativas << " TENTATIVAS" << endl;
    cout.precision(2);
    cout << fixed;
    cout << "SUA PONTUAÇÃO = " << pontos << endl;
}
