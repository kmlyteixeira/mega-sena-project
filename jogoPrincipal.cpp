#include <iostream>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "bibliotecaKmly.h"
using namespace std;

main()
{
    int x = 0, spins, aux, result;
    int sort[6], cont = 0;
    char choice, list;

    cout << "\n\n\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
    cout << "\n\t$$$$$$$$$$$$$$$ MEGA SENA $$$$$$$$$$$$$$$$$$";
    cout << "\n\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
    cout << "\n\tPREMIO ACUMULADO  >>> R$ 105.695.165,13 <<<";

    cout << "\n\n\tTABELA DE PRECOS por APOSTAS";
    cout << "\n\tJogadas: 6  | Valor da Aposta: R$4,50";
    cout << "\n\tJogadas: 7  | Valor da Aposta: R$31,50";
    cout << "\n\tJogadas: 8  | Valor da Aposta: R$126,00";
    cout << "\n\tJogadas: 9  | Valor da Aposta: R$378,00";
    cout << "\n\tJogadas: 10 | Valor da Aposta: R$945,00";
    cout << "\n\tJogadas: 11 | Valor da Aposta: R$2.079,00";
    cout << "\n\tJogadas: 12 | Valor da Aposta: R$4.158,00";
    cout << "\n\tJogadas: 13 | Valor da Aposta: R$7.722,00";
    cout << "\n\tJogadas: 14 | Valor da Aposta: R$13.513,50";
    cout << "\n\tJogadas: 15 | Valor da Aposta: R$22.522.50";

    cout << "\n\n\tEscolha a quantidade de jogadas >>> ";
    do{
    cin >> spins;
    if((spins < 6) || (spins > 15)){
        x = 0;
        spins = 0;
        cout << "\n\n\tOpcao invalida! Escolha um numero de 6 a 15 >>> ";
    } else {
        x = 1; 
		if(spins == 6)
			cout << "\n\n\tVoce vai pagar R$4,50!";	
		if(spins == 7)
			cout << "\n\n\tVoce vai pagar R$31,50!";	
		if(spins == 8)
			cout << "\n\n\tVoce vai pagar R$126,00!";	
		if(spins == 9)
			cout << "\n\n\tVoce vai pagar R$378,00!";	
		if(spins == 10)
			cout << "\n\n\tVoce vai pagar R$945,00!";	
		if(spins == 11)
			cout << "\n\n\tVoce vai pagar R$2.079,00!";	
		if(spins == 12)
			cout << "\n\n\tVoce vai pagar R$4.158,00!";	
		if(spins == 13)
			cout << "\n\n\tVoce vai pagar R$7.722,00!";	
		if(spins == 14)
			cout << "\n\n\tVoce vai pagar R$13.513,50!";	
		if(spins == 15)
			cout << "\n\n\tVoce vai pagar R$22.522,50!";	 
    }
    } while (x == 0);
	
	sleep(1);
    cout << "\n\n\tGostaria de informar seus numeros da sorte ou deseja rodar aleatoriamente?";
    cout << "\n\t[S] NUMERO DA SORTE | [A] ALEATORIZAR JOGADAS \n\t";
    do{
    cin >> choice;
    choice = toupper(choice);

	aux = spins;
    int number[aux], auxiliar[aux];

    if (choice == 'S'){
        x = 1;
        cout << "\n\n\tVamos la! Voce devera informar "<<aux<<" numeros entre 1 - 60";      
        for(int i=0; i<aux; i++){
            cout << "\n\n\tNumero "<<i+1<<" da aposta >>>";
			x=0;
			do{
				cin >> number[i];
				auxiliar[i] = number[i];
				if(i>=1){
					for(int j=0; j<=(i-1); j++){
						if ((auxiliar[j] == number[i])||((number[i]>60)||(number[i]<1))){
							cout << "\n\n\tNumero invalido. Tente novamente >>>";	
							i = i-1;
						} else {
							x=1;
						}
					}	
				}
			} while(x=0);	
        }
        
        cout << "\n\tSEUS NUMEROS ESCOLHIDOS >>> ";
        bubble_sort_cresc(number,aux);
        cout << "\n\n\t";
        for(int i=0; i<aux; i++){
            cout << number[i] << " | ";
        }
        
    } else if (choice == 'A'){
        x = 1;
        cout << "\n\n\tOK! Estamos gerando "<<aux<<" numeros aleatorios incriveis para voce!";
        cout << "\n\t";
        cout << "\xDB\xDB";
        sleep(1);
        cout << "\xDB\xDB";
        sleep(1);
        cout << "\xDB\xDB";
        sleep(1);
        cout << "\xDB\xDB";
        sleep(1);
        cout << "\xDB\xDB";
        sleep(1);
        cout << "\xDB\xDB";
        sleep(1);
        cout << "\xDB\xDB";
        sleep(1);
        cout << "\xDB\xDB";
        sleep(1);
        cout << "\xDB\xDB";
        sleep(1);
        cout << "\xDB\xDB";
        sleep(1);
        cout << "\xDB\xDB";
        sleep(1);
        cout << "\xDB\xDB";
        sleep(1);
        cout << "100%";

        cout << "\n\tSeus numeros da sorte >>> ";
        srand(time(NULL));
        for (int i = 0; i < aux; i++)
        {   
            number[i] = (rand()%58)+1;
            
            auxiliar[i] = number[i];
            
            while((auxiliar[i]==number[i])&&(i!=0)){
            	number[i] = number[i]+2;
			}
        }

        bubble_sort_cresc(number,aux);
        
        for (int i = 0; i < aux; i++)
        {   
            cout << number[i] << " | ";
        }
        
    } else {
        x=0;
        cout << "\n\n\tOpcao invalida! Tente novamente [S] NUMERO DA SORTE | [A] ALEATORIZAR JOGADAS";
    }
    
    srand((unsigned)time(NULL));
	for (int i = 0 ; i < 6; i++){
	    sort[i] = ((rand()%58)+2)-3;
	}
	
	sleep(1);
	cout << "\n\n\tO RESULTADO DA MEGA SENA SAI EM... ";
	sleep(1);
	cout << "3... ";
	sleep(1);
	cout << "2... ";
	sleep(1);
	cout << "1... ";
	sleep(1);
	
	cout << "\n\n\tNUMEROS SORTEADOS >>> ";
	for (int i = 0 ; i < 6; i++){
	    cout << " | " << sort[i];
	}
	
	for (int i = 0; i < 6; i++){
		for	(int j = 0; j < aux; j++){
			if (number[j]==sort[i]){
				cont++;
			}	
		}	
	}
	
	sleep(2);
    if (cont<4){
    	cout << "\n\n\tMa noticia. Nao foi desta vez, mas continue tentando! Quantidade de acertos >>> " << cont;
	} else if (cont==4){
		cout << "\n\n\tVOCÊ GANHOU um PEQUENO valor! Quantidade de acertos >>> " << cont << " | SEU lindo PREMIO: R$923,68";
	} else if (cont==5){
		cout << "\n\n\tVOCÊ GANHOU um valor CONSIDERÁVEL! Quantidade de acertos >>> " << cont << " | SEU lindo PREMIO: R$46.388,86";
	} else if (cont==6){
		cout << "\n\n\tVOCÊ FOI O GRANDE VENCEDOR! ! ! Acertou a SENA!";
	}
	
    } while (x == 0);
}
