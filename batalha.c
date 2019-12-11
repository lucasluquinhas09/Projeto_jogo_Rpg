#include <allegro.h>
#include "fusao.h"
//funcoes
void sair();
//Variaveis Globais

BITMAP *buffer, *imagem, *seta, *carlos_imagem, *cavaleiro_imagem, *arqueiro_imagem, *mago_imagem, *eddie_imagem, *general_imagem, *ccq_imagem, *mvp_imagem, *troll_imagem, *harpy_imagem, *gg_imagem, *vacanta_imagem, *pso_imagem, *isd_imagem, *sosn_imagem, *rei_datrak_imagem, *rei_destruidor_imagem;
FONT *f32;
SAMPLE *battle_theme, *select, *battle_senhor, *battle_final, *battle_theme_x, *battle_theme_xx;

int batalha(short int inimigo, short int vida_total_heroi, short int ataque_heroi, short int classe){
	int sai = 0, width  = 800, height = 600;
	// menu_seleciona diz qual menu sera mostrado
	// posicao_menu_batalha diz em qual pocicao esta a seta no menu 
	//flash ainda sem uso
	//time diz quantas vezes o menu ja repetiu
	//soom faz um pi cada vez que um botao mapeado e apertado
	short int time = 0,flash = 0, menu_seleciona = 3, soom = 0, posicao_menu_batalha = 0;
	//aqui e definido onde a seta preta aparece no menu
	short int posicao_seta_x = 470 , posicao_seta_y[3]= {400, 450, 500};
	int * inimigo_retorno = (int *) malloc ( 2 * sizeof (int));
//definir atributo inimigo inimigo
	int * inimigo_atributo = (int *) malloc ( 2 * sizeof (int));
	char carlos_nome[] = "Carlos";
	char eddie_nome[] = "Eddie";
	char gerald_nome[] = "General Gerald";
	char criatura_nome[] = "Criatura Chifruda";
	char morto_nome[] = "Morto Vivo Peconhento";
	char troll_nome[] = "Troll";
	char harpy_nome[] = "Harpy";
	char goblins_nome[] = "Grupo de Goblins";
	char vacanta_nome[] = "Vacanta";
	char obscuro_nome[] = "Senhor Obscuro";
	char iruchel_nome[] = "Iruchel Senhora Datrak";
	char nome_nome[] = "Senhor Obscuro Sem Nome";
	char rei_nome[] = "Rei Datrak";
	char destruido_nome[] = "Rei Destruido";


	inimigo_atributo = inimigo_status(inimigo);
	//variaveel turno faz com que nao repita acao no menu e alterne entre heroi e inimigo
	short int turno = 1;
	short int cont = 1;
	//Atributos inimigo
	short int vida_total_inimigo = inimigo_atributo[0];
	short int vida_inimigo = vida_total_inimigo;
	short int ataque_inimigo = inimigo_atributo[1];
	short int acao_retorno = 0;
	//atributo heroi
	short int ativa_habilidade = 0;

	short int vida_heroi =  vida_total_heroi;

	//Bgm das batalhas
	switch (inimigo){
		case 1:
			play_sample(battle_theme_xx, 255, 128, 1000, 1);
			break;
		case 2:
			play_sample(battle_theme_xx, 255, 128, 1000, 1);
			break;
		case 7:
			play_sample(battle_theme_x, 255, 128, 1000, 1);
			break;
		case 10:
			play_sample(battle_senhor, 255, 128, 1000, 1);
			break;
		case 11:
			play_sample(battle_senhor, 255, 128, 1000, 1);
			break;
		case 12:
			play_sample(battle_senhor, 255, 128, 1000, 1);
			break;
		case 13:
			play_sample(battle_senhor, 255, 128, 1000, 1);
			break;
		case 14:
			play_sample(battle_final, 255, 128, 1000, 1);
			break;
		default:
			play_sample(battle_theme, 255, 128, 1000, 1);
			break;
	} 
	
	
	while(!(sai || key[KEY_ESC]) && vida_inimigo > 0 && vida_heroi > 0){
		
		//imagem inimigo
		draw_sprite(buffer ,imagem , 0, 0);
		switch(inimigo){
			case 1:
				draw_sprite(buffer , carlos_imagem, 4, 150);
				break;
			case 2:
				draw_sprite(buffer , eddie_imagem, 4, 150);
				break;
			case 3:
				draw_sprite(buffer , general_imagem, 4, 150);
				break;
			case 4:
				draw_sprite(buffer , ccq_imagem, 4, 150);
				break;
			case 5:
				draw_sprite(buffer , mvp_imagem, 4, 150);
				break;
			case 6:
				draw_sprite(buffer , troll_imagem, 4, 150);
				break;
			case 7:
				draw_sprite(buffer , harpy_imagem, 4, 150);
				break;
			case 8:
				draw_sprite(buffer , gg_imagem, 4, 150);
				break;
			case 9:
				draw_sprite(buffer , vacanta_imagem, 4, 150);
				break;
			case 10:
				draw_sprite(buffer , pso_imagem, 4, 150);
				break;
			case 11:
				draw_sprite(buffer , isd_imagem, 4, 150);
				break;
			case 12:
				draw_sprite(buffer , sosn_imagem, 4, 150);
				break;
			case 13:
				draw_sprite(buffer , rei_datrak_imagem, 4, 150);
				break;
			case 14:
				draw_sprite(buffer , rei_destruidor_imagem, 4, 150);
				break;
			
		}
		//imagem heroi
		switch(classe){
			case 1:
				draw_sprite(buffer , cavaleiro_imagem, 490, 150);
				break;
			case 2:
				draw_sprite(buffer , arqueiro_imagem, 490, 150);
				break;
			case 3:
				draw_sprite(buffer , mago_imagem, 490, 150);
				break;
		}
		//imagem seta
		


		//seta para cima    enquanto pocicao 0 ele nao diminui evitando existir um menu -1
		if(key[KEY_UP]){if(posicao_menu_batalha == 0){}else{posicao_menu_batalha -= 1;} soom = 1;}
		//seta para baico   enquanto pocicao 2 ele nao aumenta mais evitando assim existir um menu 3(usando a seta)
		if(key[KEY_DOWN]){if(posicao_menu_batalha == 2){}else{posicao_menu_batalha += 1;}soom = 1;}
		//essa tecla entra dentro do menu ele entra no menu onde a atual pocicao se encontra
		if(key[KEY_SPACE]){
    		if(menu_seleciona == 3){menu_seleciona = posicao_menu_batalha;}
			//heroi ataca
    		if(menu_seleciona == 0){
				if(turno == 1){
					vida_inimigo -= ataque_heroi;
					turno = 2;
				}
				else if (turno == 2){
					inimigo_retorno = inimigo_acao(inimigo, vida_heroi, vida_inimigo, vida_total_inimigo, ataque_inimigo);
					vida_heroi = inimigo_retorno[1];
					acao_retorno = inimigo_retorno[0];
					turno = 3;
				}
				else if(turno == 3){
					menu_seleciona = 3; turno = 1;
				}
				
			}
			//skill
    		if(menu_seleciona == 1){	
			}
			//item
    		if(menu_seleciona == 2){
			}
    		soom = 1;
    	}
		if(key[KEY_A]){
			if(menu_seleciona == 1){
				if(turno == 1){
					turno = 2;
			}else if(turno == 2){
				//escolha 1s
				if(posicao_menu_batalha == 0){
					if(classe == 1){
						vida_inimigo -= 18;
						turno = 3; 
					}
					if(classe == 2){
						vida_inimigo -= 26;
						turno = 3; 
					}
					if(classe == 3){
						vida_inimigo -= 17 + ataque_heroi;
							turno = 3; 
					}
				}
				//escolha 2
				if(posicao_menu_batalha == 1){
					if(classe == 1){
						vida_inimigo -= 21;
						turno = 3; 
					}
					if(classe == 2){
						vida_inimigo -= 22;
						turno = 3;
					}
					if(classe == 3){
						vida_inimigo -= 21;
						turno = 3; 
					}
				}
				//escolha 3
				if(posicao_menu_batalha == 2){
					if(classe == 1){
						vida_heroi += 80 + 3 * ataque_heroi;
						turno = 3; 
					}
					if(classe == 2){
						if(vida_total_heroi / 2 >= vida_heroi){
							vida_heroi += 80 + 3 * ataque_heroi;
							turno = 3; 
						}	
					}
					if(classe == 3){
						vida_heroi += 80 + 3 * ataque_heroi;
						turno = 3; 
					}
				}
			}else if(turno == 3){
				inimigo_retorno = inimigo_acao(1, vida_heroi, vida_inimigo, vida_total_inimigo, ataque_inimigo);
				vida_heroi = inimigo_retorno[1];
				turno = 1;
				menu_seleciona = 3;
			}/*else if(turno == 4){
				turno = 1;
				menu_seleciona = 3;
			}*/
				


			}
		}

		if(key[KEY_X]){if(menu_seleciona != 0){menu_seleciona = 3; soom = 1;}}
		//inimigo
		//if(time < 40){
		switch(inimigo){
			case 1:
				textprintf_centre_ex(buffer, f32, 320, 20, 0, -1,"%s ", carlos_nome);
				break;
			case 2:
				textprintf_centre_ex(buffer, f32, 320, 20, 0, -1,"%s ", eddie_nome);
				break;
			case 3:
				textprintf_centre_ex(buffer, f32, 320, 20, 0, -1,"%s ", gerald_nome);
				break;
			case 4:
				textprintf_centre_ex(buffer, f32, 300, 20, 0, -1,"%s ", criatura_nome);
				break;
			case 5:
				textprintf_centre_ex(buffer, f32, 280, 20, 0, -1,"%s ", morto_nome);
				break;
			case 6:
				textprintf_centre_ex(buffer, f32, 320, 20, 0, -1,"%s ", troll_nome);
				break;
			case 7:
				textprintf_centre_ex(buffer, f32, 320, 20, 0, -1,"%s ", harpy_nome);
				break;
			case 8:
				textprintf_centre_ex(buffer, f32, 300, 20, 0, -1,"%s ", goblins_nome);
				break;
			case 9:
				textprintf_centre_ex(buffer, f32, 320, 20, 0, -1,"%s ", vacanta_nome);
				break;
			case 10:
				textprintf_centre_ex(buffer, f32, 300, 20, 0, -1,"%s ", obscuro_nome);
				break;
			case 11:
				textprintf_centre_ex(buffer, f32, 270, 20, 0, -1,"%s ", iruchel_nome);
				break;
			case 12:
				textprintf_centre_ex(buffer, f32, 260, 20, 0, -1,"%s ", nome_nome);
				break;
			case 13:
				textprintf_centre_ex(buffer, f32, 320, 20, 0, -1,"%s ", rei_nome);
				break;
			case 14:
				textprintf_centre_ex(buffer, f32, 320, 20, 0, -1,"%s ", destruido_nome);
				break;
		}
		
		textprintf_centre_ex(buffer, f32, 200, 70, 0, -1,"%d ", vida_inimigo);
		//heroi
		textprintf_centre_ex(buffer, f32, 750, 20, 0, -1,"Aaron ");
		textprintf_centre_ex(buffer, f32, 600, 70, 0, -1,"%d ",vida_heroi);
		//menu
	//}
		//debug
		//textprintf_centre_ex(buffer, f32, width/2, height/2, 0, -1,"posicao %i menu-sele %i Turno %i cont %i",posicao_menu_batalha, menu_seleciona, turno, cont);
		if(menu_seleciona == 3){
			draw_sprite(buffer, seta, posicao_seta_x,posicao_seta_y[posicao_menu_batalha]);
			//time e outro debug
		textprintf_centre_ex(buffer, f32, 600, 400, 0, -1,"Atacar %i");//, time
		textprintf_centre_ex(buffer, f32, 600, 450, 0, -1,"Habilidade %i");//, time
		textprintf_centre_ex(buffer, f32, 600, 500, 0, -1,"Itens %i");//, time
		}else{
			switch(menu_seleciona){
				//ATACAR
				case 0:
					//atacar e chamar funcao inimiga
					if(turno == 2){
						textprintf_centre_ex(buffer, f32, 220, 455, 0, -1,"Aaron  ataca e causa %d de dano", ataque_heroi);
						
					}
					//funcao inimiga e sai
					if (turno == 3){
						if(acao_retorno == 0){
							textprintf_centre_ex(buffer, f32, 220, 455, 0, -1,"iNIMIGO ataca e causa %d de dano ", ataque_inimigo);
						}else{
							switch(inimigo){
								case 1:
									textprintf_centre_ex(buffer, f32, 350, 455, 0, -1,"Carlos brande sua espada ferozmente e causa %d de dano ", 30);
									break;
								case 2:
									textprintf_centre_ex(buffer, f32, 300, 455, 0, -1,"Eddie Mira precisamente, Atira e causa %d de dano ", 18);
									break;
								case 3:
									textprintf_centre_ex(buffer, f32, 300, 455, 0, -1,"Gerald se joga contra AARON e causa %d de dano ", 27);
									break;
								case 4:
									textprintf_centre_ex(buffer, f32, 350, 455, 0, -1,"a Criatura cospe uma bola de Fogo e causa %d de dano ", 15);
									break;
								case 5:
									textprintf_centre_ex(buffer, f32, 280, 455, 0, -1,"Morto vivo Morde aaron e causa %d de dano ", 12);
									break;
								case 6:
									textprintf_centre_ex(buffer, f32, 280, 455, 0, -1,"Troll Brande sua Clava e causa %d de dano ", 15);
									break;
								case 7:
									textprintf_centre_ex(buffer, f32, 280, 455, 0, -1,"Harpy usa ataque kawaii e causa %d de dano ", 127);
									break;
								case 8:
									textprintf_centre_ex(buffer, f32, 280, 455, 0, -1,"Goblis Arremecas pedras e causa %d de dano ", 20);
									break;
								case 9:
									textprintf_centre_ex(buffer, f32, 350, 455, 0, -1,"Vacanta Conjura uma magia desconhecida e causa %d de dano ", 15);
									break;
								case 10:
									textprintf_centre_ex(buffer, f32, 350, 455, 0, -1,"Senhor Obscuro Convoga uma maldicao causando %d de dano ", 42);
									break;
								case 11:
									textprintf_centre_ex(buffer, f32, 390, 455, 0, -1,"Iruchel comeca a cantar, por algum motivo aaron recebe %d de dano ", 17);
									break;
								case 12:
									textprintf_centre_ex(buffer, f32, 405, 455, 0, -1,"aaron tenta olhar nos olhos do Senhor Obscuro, aaron recebe %d de dano ", 22);
									break;
								case 13:
									textprintf_centre_ex(buffer, f32, 380, 455, 0, -1,"Rei Datrak move-se, sem saber o que ouve aaron recebe %d de dano ", 20);
									break;
								case 14:
									textprintf_centre_ex(buffer, f32, 300, 455, 0, -1,"Rei Destruidor Saca a espada e causa ??? de dano ");
									break;
							} 
						}
						
						

					
					}
					break;
				//HABILIDADES
				case 1:
				//Guerreiro
					if(turno == 1){
						if(classe == 1){
							draw_sprite(buffer, seta, posicao_seta_x,posicao_seta_y[posicao_menu_batalha]);
							textprintf_centre_ex(buffer, f32, 600, 400, 0, -1,"Ultimo suspiro");
							textprintf_centre_ex(buffer, f32, 600, 450, 0, -1,"golpe fulminante");
							textprintf_centre_ex(buffer, f32, 600, 500, 0, -1,"Provisoes de emegencia");
					}
				//Arqueiro
						if (classe == 2){
							draw_sprite(buffer, seta, posicao_seta_x,posicao_seta_y[posicao_menu_batalha]);
							textprintf_centre_ex(buffer, f32, 600, 400, 0, -1,"flexa venenosa");
							textprintf_centre_ex(buffer, f32, 600, 450, 0, -1,"Tiro concentrado 200");
							textprintf_centre_ex(buffer, f32, 600, 500, 0, -1,"Esparadrapos");
					}
				//Mago
						if (classe == 3){
							draw_sprite(buffer, seta, posicao_seta_x,posicao_seta_y[posicao_menu_batalha]);
							textprintf_centre_ex(buffer, f32, 600, 400, 0, -1,"Seta congelante");
							textprintf_centre_ex(buffer, f32, 600, 450, 0, -1,"Marcas de fogo");
							textprintf_centre_ex(buffer, f32, 600, 500, 0, -1,"Seventh Cure");
						}	
					}
					if(turno == 2){
						//heroi acao
							if(classe == 1){ 
								textprintf_centre_ex(buffer, f32, 280, 455, 0, -1,"Aaron usar uma habilidade de poder descomunal");
								}
							if(classe == 2){ 
								textprintf_centre_ex(buffer, f32, 280, 455, 0, -1,"Aaron usar uma habilidade de poder descomunal");
								}
							if(classe == 3){ 
								textprintf_centre_ex(buffer, f32, 280, 455, 0, -1,"Aaron usar uma habilidade de poder descomunal");
							}
						//inimigo acao
					
							
						
					}if(turno == 3){
						if(acao_retorno == 0){
							textprintf_centre_ex(buffer, f32, 220, 455, 0, -1,"iNIMIGO ataca e causa %d de dano ", ataque_inimigo);
						}else{
							switch(inimigo){
								case 1:
									textprintf_centre_ex(buffer, f32, 350, 455, 0, -1,"Carlos brande sua espada ferozmente e causa %d de dano ", 30);
									break;
								case 2:
									textprintf_centre_ex(buffer, f32, 300, 455, 0, -1,"Eddie Mira precisamente, Atira e causa %d de dano ", 18);
									break;
								case 3:
									textprintf_centre_ex(buffer, f32, 300, 455, 0, -1,"Gerald se joga contra AARON e causa %d de dano ", 27);
									break;
								case 4:
									textprintf_centre_ex(buffer, f32, 350, 455, 0, -1,"a Criatura cospe uma bola de Fogo e causa %d de dano ", 15);
									break;
								case 5:
									textprintf_centre_ex(buffer, f32, 280, 455, 0, -1,"Morto vivo Morde aaron e causa %d de dano ", 12);
									break;
								case 6:
									textprintf_centre_ex(buffer, f32, 280, 455, 0, -1,"Troll Brande sua Clava e causa %d de dano ", 15);
									break;
								case 7:
									textprintf_centre_ex(buffer, f32, 280, 455, 0, -1,"Harpy usa ataque kawaii e causa %d de dano ", 127);
									break;
								case 8:
									textprintf_centre_ex(buffer, f32, 280, 455, 0, -1,"Goblis Arremecas pedras e causa %d de dano ", 20);
									break;
								case 9:
									textprintf_centre_ex(buffer, f32, 350, 455, 0, -1,"Vacanta Conjura uma magia desconhecida e causa %d de dano ", 15);
									break;
								case 10:
									textprintf_centre_ex(buffer, f32, 350, 455, 0, -1,"Senhor Obscuro Convoga uma maldicao causando %d de dano ", 42);
									break;
								case 11:
									textprintf_centre_ex(buffer, f32, 390, 455, 0, -1,"Iruchel comeca a cantar, por algum motivo aaron recebe %d de dano ", 17);
									break;
								case 12:
									textprintf_centre_ex(buffer, f32, 405, 455, 0, -1,"aaron tenta olhar nos olhos do Senhor Obscuro, aaron recebe %d de dano ", 22);
									break;
								case 13:
									textprintf_centre_ex(buffer, f32, 380, 455, 0, -1,"Rei Datrak move-se, sem saber o que ouve aaron recebe %d de dano ", 20);
									break;
								case 14:
									textprintf_centre_ex(buffer, f32, 300, 455, 0, -1,"Rei Destruidor Saca a espada e causa ??? de dano ");
									break;
							} 
						}
					}					
					//usar skill e chamar funcao inimiga ou voltar
					textprintf_centre_ex(buffer, f32, 600, 525, 0, -1,"Pressione A para Selecionar");
					textprintf_centre_ex(buffer, f32, 600, 550, 0, -1,"Pressione X para Voltar");
					break;
				//ITEMS
				case 2:
					//usar item e chamar funcao inimiga ou voltar
					textprintf_centre_ex(buffer, f32, 400, 400, 0, -1,"Para obter os itens ");
					textprintf_centre_ex(buffer, f32, 400, 450, 0, -1,"E necessario a compra dos conteudos Adicionais");
					textprintf_centre_ex(buffer, f32, 400, 500, 0, -1,"vulgarmente Chamado de DLC");
					textprintf_centre_ex(buffer, f32, 400, 550, 0, -1,"Pressione X para Voltar");
					//menu_seleciona = 3;
					break;
				}
			
			}
		if(soom){play_sample(select, 255, 128, 1000, 0); soom = 0;}
		draw_sprite(screen, buffer, 0, 0);
		
		rest(130);
		clear(buffer);
		time++;
	}
	switch (inimigo){
		case 1:
			stop_sample(battle_theme_xx);
			break;
		case 2:
			stop_sample(battle_theme_xx);
			break;
		case 7:
			stop_sample(battle_theme_x);
			break;
		case 10:
			stop_sample(battle_senhor);
			break;
		case 11:
			stop_sample(battle_senhor);
			break;
		case 12:
			stop_sample(battle_senhor);
			break;
		case 13:
			stop_sample(battle_senhor);

			break;
		case 14:
			stop_sample(battle_final);
			break;
		default:
			stop_sample(battle_theme);
			break;
	}
	return vida_heroi;	
}
