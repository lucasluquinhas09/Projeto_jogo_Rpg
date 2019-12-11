#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int doze_roteiro(){
	BITMAP *p2,*p1;
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {400, 450};
p1 = load_bitmap("imgs/labirinto.bmp", NULL);
p2 = load_bitmap("imgs/1.bmp", NULL);
    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 6){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        draw_sprite(buffer ,p1 , 16, 18);
        
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
		draw_sprite(buffer ,p1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Vacanta: nao, eu devo estar sonhando. ");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron:entao eu sou o seu pior pesadelo.");
			break;
        case 2:
		draw_sprite(buffer ,p1 , 16, 18);
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Ela comeca a sangrar e definhar ate seu corpo desaparecer por completo em meio a sombras,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"consequentemente,fazendo com que uma luz surgisse em meio aquela escuridao...");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Surgindo a chave para adentrar os quatros caminhos, percebo");
		    break;
        case 3:
		draw_sprite(buffer ,p1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"que apenas o seu formato era como o de uma chave comum, pois todo o seus detalhes eram");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"como rubricas que so de olha-las fazia-me sentir o peso de possui-la em minhas maos.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Pego-a em minhas maos e vejo que todo o labirinto comeca a desabar e antes de pensar no");
			break;
		case 4:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"que devia fazer a chave comeca a brilhar e me teletransporta para um lugar que me fazia pensar");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"se eu estava acordado ou sonhando. Era um lugar onde tudo era um oceano escuro e o unico lugar");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"em que havia terra firme era onde eu estava juntamente de um ser que sua sede por sangue era");
			break;
		case 5:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"tamanha a ponto de sentir o cheio da morte apenas vendo a sua face, finalmente percebi que");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"aquilo nao era nada comparado ao que eu tinha enfrentado... Aquilo...  Era um senhor obscuro.");
			break;

	//come�a a batalha 10
		}

        if(key[KEY_SPACE]){if(passar_historia < 6){passar_historia += 1;}}
        draw_sprite(screen, buffer, 0, 0);
		rest(130);
		clear(buffer);

    }
    if(menu == 0){escolha = 1;}
    if(menu == 1){escolha = 2;}
       
    return escolha; 
}
