#include <allegro.h>
#include "fusao.h"
#include <stdio.h>
#include <conio.h>
void sair();
void title_screen();
int sai = 0, width  = 800, height = 600;
BITMAP *imagem, *carlos_imagem, *cavaleiro_imagem, *arqueiro_imagem, *mago_imagem, *eddie_imagem, *general_imagem, *ccq_imagem, *mvp_imagem, *troll_imagem, *harpy_imagem, *gg_imagem, *vacanta_imagem, *pso_imagem, *isd_imagem, *sosn_imagem, *rei_datrak_imagem, *rei_destruidor_imagem;
BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f32, *f33;
SAMPLE *battle_theme, *select, *battle_senhor, *battle_final, *battle_theme_x, *battle_theme_xx;
FILE *ranking;
int main() {
	
    //Iniciacao
	allegro_init();
    install_keyboard();
	set_color_depth(32);
	set_window_title("Title Four Ways");
	set_close_button_callback(sair);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, width, height, 0, 0);
	install_sound(DIGI_AUTODETECT, MIDI_AUTODETECT, NULL);
	//Variaveis Locais
	buffer = create_bitmap(width, height);
	main_menu_imagem = load_bitmap("imagem_menu__.bmp", NULL);
	dialogos_imagem = load_bitmap("tela_de_dialogo.bmp", NULL);
	teste =load_bitmap("pessoas.bmp", NULL);
	seta = load_bitmap("seta.bmp", NULL);
	f33 = load_font("8x16.pcx", NULL, NULL);


	//imagem batalha
	imagem = load_bitmap("imagem/TELA-DE-BATALHA.bmp", NULL);
	seta = load_bitmap("imagem/seta.bmp", NULL);
	
	cavaleiro_imagem = load_bitmap("imagem/knight.bmp", NULL);
	arqueiro_imagem = load_bitmap("imagem/acher.bmp", NULL);
	mago_imagem = load_bitmap("imagem/wizard.bmp", NULL);
	carlos_imagem = load_bitmap("imagem/1.bmp", NULL);
	eddie_imagem = load_bitmap("imagem/2.bmp", NULL);
	general_imagem = load_bitmap("imagem/3.bmp", NULL);
	ccq_imagem = load_bitmap("imagem/4.bmp", NULL);
	mvp_imagem = load_bitmap("imagem/5.bmp", NULL);
	troll_imagem = load_bitmap("imagem/6.bmp", NULL);
	harpy_imagem = load_bitmap("imagem/7.bmp", NULL);
	gg_imagem = load_bitmap("imagem/8.bmp", NULL);
	vacanta_imagem =  load_bitmap("imagem/9.bmp", NULL);
	pso_imagem = load_bitmap("imagem/10.bmp", NULL);
	isd_imagem = load_bitmap("imagem/11.bmp", NULL);
	sosn_imagem = load_bitmap("imagem/12.bmp", NULL);
	rei_datrak_imagem = load_bitmap("imagem/13.bmp", NULL);
	rei_destruidor_imagem = load_bitmap("imagem/14.bmp", NULL);
	//font batalha
	f32 = load_font("bgm/8x16.pcx", NULL, NULL);
	//bgm batalha
	battle_theme = load_sample("bgm/battle.wav");
	battle_theme_xx = load_sample("bgm/first_battle.wav");
	battle_theme_x = load_sample("bgm/best_battle.wav");
	battle_senhor = load_sample("bgm/senhores_b.wav");
	battle_final = load_sample("bgm/final_battle.wav");
	select = load_sample("bgm/select.wav");
	short int escolha = 0;
	short int escolha_dois = 0;
	short int escolha_tres = 0;
	short int classe = 0;
	int ranking = 0;
	while (!(sai || key[KEY_ESC]))
	{		
		title_screen();
		//veneno_roteiro();
		//classe_roteiro();/*
		escolha = primeiro_roteiro();
		if(escolha == 1){
			escolha_dois = segundo_roteiro();
			classe = classe_roteiro();
			antes_tres_roteiro();
			ranking += batalha(1, 200, 50, classe);
			terceiro_roteiro();
			ranking += batalha(3, 200, 50, classe);
			quarto_roteiro();
			ranking += batalha(2, 200, 50, classe);
			quinto_roteiro();
			ranking += batalha(4, 200, 50, classe);
			sexto_roteiro();
			ranking += batalha(5, 200, 50, classe);
			setimo_roteiro();
			oitavo_roteiro();
			ranking += batalha(6, 200, 50, classe);
			nono_roteiro();
			ranking += batalha(7, 200, 50, classe);
			decimo_roteiro();
			ranking += batalha(8, 200, 50, classe);
			onze_roteiro();
			ranking += batalha(9, 200, 50, classe);
			doze_roteiro();
			ranking += batalha(10, 200, 50, classe);
			treze_roteiro();
			ranking += batalha(11, 200, 50, classe);
			quatorze_roteiro();
			ranking += batalha(12, 200, 50, classe);
			quinze_roteiro();
			ranking += batalha(13, 200, 50, classe);
			escolha_tres = dezesseis_roteiro();
			if(escolha_tres == 1){
				sem_carlos_roteiro();
				ranking += batalha(14, 200, 50, classe);
				if(escolha_dois == 1){
					sem_carlos_ou_anel_roteiro();
				}else{
					sem_anel_roteiro();
				}
			}else if(escolha_tres == 2){
				com_carlos_roteiro();
				ranking += batalha(14, 200, 50, classe);
				if(escolha_dois == 1){
					com_carlos_anel_roteiro();
				}else{
					sem_anel_roteiro();
				}
				
			}

		}else if(escolha == 2){
			veneno_roteiro();
		}
		
		primeiro_roteiro();
		segundo_roteiro();
		terceiro_roteiro();
	    quarto_roteiro();
	    quinto_roteiro();
		sexto_roteiro();
		setimo_roteiro();
		oitavo_roteiro();
		nono_roteiro();
		decimo_roteiro();
		onze_roteiro();
		doze_roteiro();
		treze_roteiro();
		quatorze_roteiro();
		quinze_roteiro();
		dezesseis_roteiro();
		sem_carlos_roteiro();
		com_carlos_roteiro();
		com_carlos_anel_roteiro();
		sem_carlos_ou_anel_roteiro();
		sem_anel_roteiro();
		veneno_roteiro();
		batalha(7, 200, 50, classe);
	}
	
	//Finalizacao  
	destroy_bitmap(main_menu_imagem);
	destroy_bitmap(buffer);
	return 0;
}
END_OF_MAIN();

void title_screen(){
	short int posicao_menu = 0,menu = 3;
	short int posicao_seta_x = 300 , posicao_seta_y[3]= {300, 350, 400};
	while (!(sai || key[KEY_ESC]) && menu > 0){
		draw_sprite(buffer ,main_menu_imagem , 0, 0);
		draw_sprite(buffer, seta, posicao_seta_x,posicao_seta_y[posicao_menu]);
		if(menu == 3){
			textprintf_centre_ex(buffer, f32, width /2, 300, 0xffffff, -1,"Comeca");
			textprintf_centre_ex(buffer, f32, width /2, 350, 0xffffff, -1,"Ranking");
			textprintf_centre_ex(buffer, f32, width /2, 400, 0xffffff, -1,"Sair");
		}else if(menu == 1){
			clear(buffer);
			draw_sprite(buffer ,main_menu_imagem , 0, 0);
			
			char *result;
			ranking = fopen("ranking.txt", "r");
			char Linha[100];
			// Lê uma linha (inclusive com o '\n')
			result = fgets(Linha, 100, ranking);  // o 'fgets' lê até 99 caracteres ou até o '\n'
			fclose(ranking);
			textprintf_centre_ex(buffer, f32, width /2, 200, 0xffffff, -1,"Ranking atual %s", Linha);
			textprintf_centre_ex(buffer, f32, width /2, 250, 0xffffff, -1,"Pressione X para Voltar");
		}
		
		

		if(key[KEY_UP]){if(posicao_menu == 0){}else{posicao_menu -= 1;}}
		if(key[KEY_DOWN]){if(posicao_menu == 2){}else{posicao_menu += 1;}}
		if(key[KEY_SPACE]){if(menu == 3){menu = posicao_menu;}}
		if(key[KEY_X]){if(menu == 1){menu = 3;}}


		draw_sprite(screen, buffer, 0, 0);
		rest(130);
		clear(buffer);
	}
}


void sair(){sai= 1;}
END_OF_FUNCTION(sair);
