//acao inimiga
#include <time.h>
#include <stdlib.h>
#include <allegro.h>
#include "fusao.h"
//funcoes
void sair();
//Variaveis Globais
BITMAP *buffer;
FONT *f32;


int * inimigo_acao(short int inimigo, short int vida_heroi, short int vida_inimigo,short int vida_total_inimigo, short int ataque_inimigo){
	short int escolha_inimigo = 0;
	short int vida = 0;
    //selecao qual e o inimigo 
	switch(inimigo){
		//inimigo 1
		case 1:
			//qual a opcao o inimigo vai escolher 
			srand(time(NULL));
    		escolha_inimigo = rand() % 2;
    		switch(escolha_inimigo){
                //inimigo atacar
                case 0:
					vida = vida_heroi - ataque_inimigo;
                    break;
				//inimigo usa skill
                case 1:
						vida = vida_heroi - 30;
					break;
			}
			break;
		//inimigo 2
		case 2:
			srand(time(NULL));
    		escolha_inimigo = rand() % 2;
    		switch(escolha_inimigo){
                //inimigo atacar
                case 0:
					vida = vida_heroi - ataque_inimigo;
                    break;
				//inimigo usa skill
                case 1:
					vida = vida_heroi - 18;
					break;
			}
			break;
		//inimigo 3
		case 3:
			srand(time(NULL));
    		escolha_inimigo = rand() % 2;
    		switch(escolha_inimigo){
                //inimigo atacar
                case 0:
					vida = vida_heroi - ataque_inimigo;
                    break;
				//inimigo usa skill
                case 1:
					vida = vida_heroi - 27;
					break; 
            }
			break;
		//inimigo 4
		case 4:
			srand(time(NULL));
    		escolha_inimigo = rand() % 2;
    		switch(escolha_inimigo){
                //inimigo atacar
                case 0:
					vida = vida_heroi - ataque_inimigo;
                    break;
				//inimigo usa skill
                case 1:
					vida = vida_heroi - 15;
					break; 
            }
			break;
		//inimigo 5
		case 5:
			srand(time(NULL));
    		escolha_inimigo = rand() % 2;
    		switch(escolha_inimigo){
                //inimigo atacar
                case 0:
					vida = vida_heroi - ataque_inimigo;
                    break;
				//inimigo usa skill
                case 1:
					vida = vida_heroi - 12;
                    break; 
            }
			break;
		//inimigo 6
		case 6:
			srand(time(NULL));
    		escolha_inimigo = rand() % 2;
    		switch(escolha_inimigo){
                //inimigo atacar
                case 0:
					vida = vida_heroi - ataque_inimigo;
                    break;
				//inimigo usa skill
                case 1:
						vida = vida_heroi - 15;
                    break; 
            }
			break;
		//inimigo 7
		case 7:	
			srand(time(NULL));
    		escolha_inimigo = rand() % 2;
    		switch(escolha_inimigo){
                //inimigo atacar
                case 0:
					vida = vida_heroi - ataque_inimigo;
                    break;
				//inimigo usa skill
                case 1:
					vida = vida_heroi - 127;
					break; 
            }
			break;
		case 8:
			srand(time(NULL));
    		escolha_inimigo = rand() % 2;
    		switch(escolha_inimigo){
                //inimigo atacar
                case 0:
					vida = vida_heroi - ataque_inimigo;
                    break;
				//inimigo usa skill
                case 1:
					vida = vida_heroi - 20;
					break; 
            }
			break;
		case 9:
			srand(time(NULL));
    		escolha_inimigo = rand() % 2;
    		switch(escolha_inimigo){
                //inimigo atacar
                case 0:
					vida = vida_heroi - ataque_inimigo;
                    break;
				//inimigo usa skill
                case 1:
					vida = vida_heroi - 15;
					break; 
            }
			break;
		case 10:
			srand(time(NULL));
    		escolha_inimigo = rand() % 2;
    		switch(escolha_inimigo){
                //inimigo atacar
                case 0:
					vida = vida_heroi - ataque_inimigo;
                    break;
				//inimigo usa skill
                case 1:
					vida = vida_heroi - 42;
					break; 
            }
			break;
		case 11:
			srand(time(NULL));
    		escolha_inimigo = rand() % 2;
    		switch(escolha_inimigo){
                //inimigo atacar
                case 0:
					vida = vida_heroi - ataque_inimigo;
                    break;
				//inimigo usa skill
                case 1:
					vida = vida_heroi - 17;
					break; 
            }
			break;
		case 12:
			srand(time(NULL));
    		escolha_inimigo = rand() % 2;
    		switch(escolha_inimigo){
                //inimigo atacar
                case 0:
					vida = vida_heroi - ataque_inimigo;
                    break;
				//inimigo usa skill
                case 1:
					vida = vida_heroi - 22;
					break; 
            }
			break;
		case 13:
			srand(time(NULL));
    		escolha_inimigo = rand() % 2;
    		switch(escolha_inimigo){
                //inimigo atacar
                case 0:
					vida = vida_heroi - ataque_inimigo;
                    break;
				//inimigo usa skill
                case 1:
					vida = vida_heroi - 20;
					break; 
            }
			break;
		case 14: 
			srand(time(NULL));
    		escolha_inimigo = rand() % 2;
    		switch(escolha_inimigo){
                //inimigo atacar
                case 0:
					vida = vida_heroi - ataque_inimigo;
                    break;
				//inimigo usa skill
                case 1:
					vida = vida_heroi - 50;
					break; 
            }
			break;
	}	
int acao[2] = {escolha_inimigo, vida};
	return  acao;
}
/*
int * f (int b, int c);

int main(){
	int * a = (int *) malloc ( 2 * sizeof (int));
	a = f(2,5);
	printf("%d\n", a[0]);
	system("pause");
}

int * f (int b, int c){
	int a = 500 /b;
	int v = 2 * c;
	int sad[2] = {a,v};
return sad; 
}
*/
