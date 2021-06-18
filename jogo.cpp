#include <iostream>
#include <cstdlib> //biblioteca de funções padrões em C;
#include <ctime>   //biblitoeca com funções de tempo
using namespace std;

int main()
{
    cout << "********************" << endl;
    cout << "BEM VINDO AO JOGO" << endl;
    cout << "********************" << endl;
    cout << "Escolha o seu nível de dificuldade: " << endl;
    cout << "Fácil (F), Médio (M) ou Difícil (D)" << endl;

    char dificuldade;
    cin >> dificuldade;
    int n_de_tentativas;
    if (dificuldade == 'F'){
        n_de_tentativas = 15;
    }
    else if (dificuldade == 'M'){
        n_de_tentativas = 10;
    }
    else{
        n_de_tentativas = 5;
    }
    srand(time(NULL));                          //Seta semente dos numeros aleatorios   // função (time(0)) conta o numero de seguros desde de 1970 (SEMPREMUDANDO)
    int n_secret = rand() % 100;               // Função randomica (aleatoria) % 100 ( 0 - 99))

                                             // cout << "Número secreto: "<<n_secret << endl;
    bool n_acertou = true;
    int tentativas = 0;
    double pontos = 1000.0;                //Pontuação
    for (tentativas = 1; tentativas <= n_de_tentativas; tentativas++)
    {
                                        //tentativas = tentativas +1;
                                      //tentativas++;
        int chute;
        cout << "Tentativa = " << tentativas << endl;
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
            cout << "Seu chute foi maior que o número secreto" << endl;
        }
        else
        {
            cout << "Seu chute foi menor que o número secreto" << endl;
        }
    }
    
    cout << "FIM DE JOGO" << endl;

    if (n_acertou)
    {
        cout << "Você perdeu! Tente novamente!" << endl;
    }
    else
    {
        cout << "Você acertou o número secreto em " << tentativas << " tentativas" << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuação foi de " << pontos << " pontos." << endl;
    }
}
