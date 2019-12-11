#ifndef FUSAO_H   
#define FUSAO_H
//Roteiros





//1
int primeiro_roteiro();
//2 nao aceita
int veneno_roteiro();

//2 aceita
int segundo_roteiro();
//3 classe
int classe_roteiro();
//4
int antes_tres_roteiro();
//batalha
//5
int terceiro_roteiro();
//batalha
//6
int quarto_roteiro();
//batalha
//7
int quinto_roteiro();
//batalha
//8
int sexto_roteiro();
//batalha?
//9
int setimo_roteiro();
//10
int oitavo_roteiro();
//batalha
//11
int nono_roteiro();
//batalha harpy
//12
int decimo_roteiro();
//batalha goblin
//13
int onze_roteiro();
//batalha vacanta
//14
int doze_roteiro();
//batalha 1°senhor
//15
int treze_roteiro();
//batalha iru
//16
int quatorze_roteiro();
//batalha sem nome
//17
int quinze_roteiro();
//batalha rei datrak
//18
int dezesseis_roteiro();
//escolha
//matar carlos
//19
int sem_carlos_roteiro();
//batalha
//escolha com anel
int sem_carlos_ou_anel_roteiro();
//escolha sem anel
int sem_anel_roteiro();


//escolha nao mata carlos
//19
int com_carlos_roteiro();
//batalha
//com anel
int com_carlos_anel_roteiro();
//sem anel
//repete sem_anel_roteiro();




//aparti do oitavo

//funcoes da batalha
int batalha(short int inimigo, short int vida_total_heroi, short int ataque_heroi, short int classe);
int * inimigo_acao(short int inimigo, short int vida_heroi, short int vida_inimigo,short int vida_total_inimigo, short int ataque_inimigo);
int * inimigo_status(short int inimigo);

#endif
