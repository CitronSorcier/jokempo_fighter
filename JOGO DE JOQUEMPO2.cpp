#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>

using namespace std;
int main() {  
    
    int jogada_comp, jogo1, jogo2, pontos1, pontos2, op;
    char jogador1[10],jogador2[10];
    //system("color 03");
    
    
    //exibição do nome do jogo!
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout << "@                                 @\n";
    cout << "@  JOGO - PEDRA, PAPEL E TESOURA  @\n";
    cout << "@                                 @\n";
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout << "\n\n   (PEDRA, PAPEL E TESOURA) ";
     
    
    //Menu do primeiro jogador.
    pontos1 = 0; //contador do primeiro jogador.
    pontos2 = 0; //contador do segundo jogador.
    
    fflush(stdin);
    cout << "\n\nJOGADOR1: ";
    gets(jogador1);
    cout << "\nJOGADOR2: ";
    gets(jogador2);
    //strupr (jogador1);//função para deixar tudo maiúsculo
    //strupr (jogador2);
    //system("cls"); // windows apenas
    
    //enquanto for verdadeiro o menu será exibido.
    while(true){
                 cout << "\n" <<"Digite o numero da opcao: " << jogador1; 
                 cout << "\n\n   1 - Pedra";
                 cout << "\n   2 - Papel";
                 cout << "\n   3 - Tesoura";
                 cout << "\n   0 - sair";
                 cout << "\n\nDIGITE A SUA OPCAO: ";
                 cin >> jogo1;
//jogo1[0] = getch;
//putch('*');
                 isdigit(jogo1) == true; // era < 2
                 if(jogo2 == 0)
                 exit(true);
                 if(jogo1 < 0 || jogo1 > 3)
                 cout << "\nOpcao invalida! ";
                          
                                  
                 //Menu do segundo jogador.  
                 cout << "\n" << "Digite o numero da opcao: " << jogador2;
                 cout << "\n\n     1 - Pedra";
                 cout << "\n     2 - Papel";
                 cout << "\n     3 - Tesoura";
                 cout << "\n     0 - sair";
                 cout << "\n\nDIGITE A SUA OPCAO: ";
                 cin >> jogo2;
                 if(jogo2 == 0)
                 exit(true);
                 if(jogo2 < 0 || jogo2 > 3)
                 cout << "\nOpcao invalida! ";
                 
                     if ((jogo1 == 1 && jogo2 ==2) || (jogo1 == 2 && jogo2 ==3) || (jogo1 == 3 && jogo2 ==1))
                     {
                     cout << "\n\n\t\t" << jogador1 << " ESCOLHEU: " << jogo1 <<
                     "\n\t\t" << jogador2 <<" ESCOLHEU: " << jogo2 << "\n\n"; 
                     pontos1++;
                     }
                     else if ((jogo1 == 2 && jogo2 ==1) || (jogo1 == 3 && jogo2 ==2) || (jogo1 == 1 && jogo2 ==3))
                             {
                             cout << "\n\n\t\t" << jogador1 << " ESCOLHEU: " << jogo1 <<
                             "\n\t\t" << jogador2 <<" ESCOLHEU: " << jogo2 << "\n\n"; 
                             pontos2++; 
                             }

                             if ((jogo1 == 1 && jogo2 ==1) || (jogo1 == 2 && jogo2 ==2) || (jogo1 == 3 && jogo2 ==3))
                             {
                             cout << "\n\n\t\t" << jogador1 << " ESCOLHEU: " << jogo1 <<
                             "\n\t\t" << jogador2 <<" ESCOLHEU: " << jogo2 << "\n\n"; 
                             
                             }
   system("pause");              
   //limpa tela.
   system("cls");                      
  
   cout << "\n" << jogador1 << " - pontuacao: " << pontos1 << "\n";
   cout << jogador2 << " - pontuacao: " << pontos2 << "\n";

  // cout << "\n\n.................................FIM....................................";
}
   system ("PAUSE");
  
   return 0;
   
}
