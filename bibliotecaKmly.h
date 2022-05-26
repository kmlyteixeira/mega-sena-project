/*
MINHA BIBLIOTECA FOFA

Biblioteca de fun��es C++
By: Kemily (2022)

Para utilizar: #include "bibliotecaKmly.h"

*/

using namespace std;

//Fun��o para imprimir Tabuada ==============================================================
void imprimirTabuada (int number){
	int i = 0;
	do{
		cout<< "\n\t\t" <<number<< " X " <<i<< " = " <<number*i<<"\n";
		i++;
	} while (i<=10);		
}

//Fun��o maior entre 2 numeros ==============================================================
void imprimirMaiorNumero(int firstNumber, int secondNumber){
	if(firstNumber>secondNumber){
		cout<< "\n\n\n\t " <<firstNumber<< " � o maior valor!";
	} else {
		cout<< "\n\n\n\t " <<secondNumber<< " � o maior valor!";
	}
}

//Fun��o Verifica se letra � vogal ==========================================================
void verificaVogal (char letra){
	if ((letra == 'A') ||
       (letra == 'E') || 
       (letra == 'I') || 
       (letra == 'O') || 
       (letra == 'U'))
   {
      cout << "\n\n\t Seu caracter � uma VOGAL!";
   } else 
   {
   		cout << "\n\n\t Seu caracter n�o � uma VOGAL!";
   }
}

//Fun��o Bubble Sort - crescente ===========================================================
void bubble_sort_cresc(int vetor[], int tam)
{
    int aux;

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (vetor[i] < vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

//Fun��o Bubble Sort - decrescente ========================================================
void bubble_sort_desc(int vetor[], int tam)
{
    int aux;

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

//Fun��o verifica se � Par ou Impar ======================================================
int parOuImpar (int num)
{
    if (num %2==0)
    	return 1; // Retorna 1 para os pares
    else
    	return 0; //Retorna 0 para os �mpares
}

//Fun��o para Calcular conforme o sinal ==================================================
float calcular (float num1, float num2, char sinal)
{
	if (sinal =='+')
		return (num1 + num2);
	if (sinal == '-')
		return (num1 - num2);
	if (sinal == '*')
		return (num1 * num2);
	if (sinal == '/')
		return (num1 / num2);
}

//Fun��o verifica se a data � v�lida =================================================
int verificaData (int ano,int mes,int dia){
	if((ano>=1)&&(ano<=9999)){
		if ((mes>=1)&&(mes<=12)){
			if ((mes=2)&&(ano%4==0)&&(dia<=29)){
				return 1;
			} else if ((mes=2)&&(ano%4!=0)&&(dia<=28)){
				return 1;
			} else if (((mes=4)||(mes=6)||(mes=9)||(mes=11))&&(dia<30)){
				return 1;
			} else if (dia<31){
				return 1;
			} else {
				return 0;
			}	
		} else {
			return 0;
		}
	} else {
		return 0;
	}
}

//Fun��o valida��o do CPF ===========================================================

void validaCpf (char codCpf[10]){
	
	int  div, verificador1, verificador2, aux[10], aux2[10], mult, soma;
	//Transformando valor recebido em int
    for(int i=0; i<11;i++){
        aux[i] = codCpf[i] - '0';
        cout << " " << aux[i];
    }
    
    //DEFININDO 1� DIG VERIFICADOR
    /*Primeiro passo: multiplica-se cada um dos numeros, da direita para a esquerda por numeros crescentes a partir de 2
    e armazena os resultador em uma soma */
	int j=10;
    for(int i=0; i<9; i++){
    	mult = aux[i]*j;
    	j--;
    	soma = soma + mult;
	}
    /*Segundo passo: pega o modulo da soma por 11*/
        div = soma%11;
        
    /*Verifica��o para deterinar 1� dig verificador, se menor que 2 --> 0, se n�o ---> 11 - resultado anterior*/
        if(div<2){
            verificador1 = 0;
        } else if (div>=2){
            verificador1 = 11-div;
        }
        
    /*penultima posi��o do vetor recebe o 1� digito verificador*/
    for(int i=0; i<11;i++){
    	if(i==9){
        	aux2[9] = verificador1;
		} else
			aux2[i] = codCpf[i] - '0';
    }

	cout << "\n" << div;
	cout << "\n" << soma;
	
	mult=0;
	soma=0;
	div = 0;
	
    //DEFININDO 2� DIG VERIFICADOR
    j=11;
    for(int i=0; i<10; i++){
    	mult = aux2[i]*j;
    	j--;
    	soma = soma + mult;
	}
	div = soma%11;
	
	if(div<2){
            verificador2 = 0;
        } else if (div>=2){
            verificador2 = 11-div;
        }
        
    aux2[10] = verificador2;
    
    cout << "\n" << verificador1;
    cout << "\n" << verificador2;
    
    cout << "\n" << aux[9] << "\n";
    cout << aux2[9] << "\n";
    cout << aux[10] << "\n";
    cout << aux2[10] << "\n";
    
if((aux[9] == aux2[9])&&(aux[10] == aux2[10]))
    cout << "\n CPF V�LIDO!";  
else if ((aux[9] != aux2[9])&&(aux[10] != aux2[10]))
    cout << "\n CPF INV�LIDO!";
}
