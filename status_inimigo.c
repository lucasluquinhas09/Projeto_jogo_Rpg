#include "fusao.h"

int * inimigo_status(short int inimigo){
	short int vida_total_inimigo = 9999;
	short int ataque_inimigo = 999;
	switch (inimigo){
	case 1:
		vida_total_inimigo = 200;
		ataque_inimigo = 25;
		break;
	case 2:
		vida_total_inimigo = 200;
		ataque_inimigo = 10;
		break;
	case 3:
		vida_total_inimigo = 150;
		ataque_inimigo = 15;
		break;
	case 4:
		vida_total_inimigo = 210;
		ataque_inimigo = 11;
		break;
	case 5:
		vida_total_inimigo = 210;
		ataque_inimigo = 9;
		break;
	case 6:
		vida_total_inimigo = 300;
		ataque_inimigo = 12;
		break;
	case 7:
		vida_total_inimigo = 2300;
		ataque_inimigo = 80;
		break;
	case 8:
		vida_total_inimigo = 204;
		ataque_inimigo = 11;
		break;
	case 9:
		vida_total_inimigo = 200;
		ataque_inimigo = 10;
		break;
	case 10:
		vida_total_inimigo = 200;
		ataque_inimigo = 8;
		break;
	case 11:
		vida_total_inimigo = 200;
		ataque_inimigo = 13;
		break;
	case 12:
		vida_total_inimigo = 270;
		ataque_inimigo = 11;
		break;
	case 13:
		vida_total_inimigo = 230;
		ataque_inimigo = 14;
		break;
	case 14:
		vida_total_inimigo = 500;
		ataque_inimigo = 25;
		break;
	}
	int status[2] = {vida_total_inimigo, ataque_inimigo};
	return  status;
}
