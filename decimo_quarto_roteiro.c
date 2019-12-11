#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int quatorze_roteiro(){
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {400, 450};
BITMAP *p2;
p2 = load_bitmap("imgs/3.bmp", NULL);


    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 4){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        draw_sprite(buffer ,p2 , 16, 18);
        
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Iruchel: Eu nunca fui tao humilhada.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron:Aproveite essa humilhacao em outra vida.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"(Sou teletransportado novamente)");
			break;
        case 2:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"???: Voce finalmente chegou ate mim e antes que ");
            textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"me pergunte qualquer coisa nao possuo algo como");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"um nome e apenas trago a sua destruicao assim como previ.");
		    break;
        case 3:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Aaron:entao voce pode prever o futuro?");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Senhor obscuro sem nome: Voce nunca entenderia entao apenas aceite o seu destino.");
			break;

	//come�a a batalha 12
		}

        if(key[KEY_SPACE]){if(passar_historia < 4){passar_historia += 1;}}
        draw_sprite(screen, buffer, 0, 0);
		rest(130);
		clear(buffer);

    }
    if(menu == 0){escolha = 1;}
    if(menu == 1){escolha = 2;}
       
    return escolha; 
}
