#include <iostream>
using namespace std;

int main()
{
    cout << "********************" << endl;
    cout << "BEM VINDO AO JOGO" << endl;
    cout << "********************" << endl;
    cout << "Escolha um nível de dificuldade" << endl;
    cout << "Fácil (F), Médio (M) ou Difícil (D)" << endl;
    const int n_secret = 42;
    bool n_acertou = true;  //ENQUANTO NÃO ACERTAR ++
    int tentativas = 0;     //TENTATIVAS
    double pontos = 1000.0; /// SISTEMA DE PONTUAÇÃO

    char dificuldade;
    cin >> dificuldade;
    int n_de_tentativas;

    if (n_de_tentativas == 'F')
    {
        n_de_tentativas == 15;
    }
    else if (n_de_tentativas == 'M')
    {
        n_de_tentativas == 10;
    }
    else
    {
        n_de_tentativas = 5;
    }

    for (tentativas = 1; tentativas <= n_de_tentativas; tentativas++)
    {
        //tentativas = tentativas +1;
        //tentativas++;
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
            cout << "PARABÉNS, VOCÊ ACERTOU!!" << endl;
            n_acertou = false;
            break;
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

    if (n_acertou)
    {
        cout << "Você perdeu! Tente novamente!" << endl;
    }
    else
    {
        cout << "VOCÊ ACERTOU O NÚMERO SECRETO EM " << tentativas << " TENTATIVAS" << endl;
        cout.precision(2);
        cout << fixed;
        cout << "SUA PONTUAÇÃO FOI DE " << pontos << " pontos." << endl;
    }
}
