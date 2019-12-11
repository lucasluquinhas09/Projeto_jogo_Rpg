#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int decimo_roteiro(){
    BITMAP *p1;
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {400, 450};
    p1 = load_bitmap("imgs/labirinto.bmp", NULL);
    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 3){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        draw_sprite(buffer ,p1 , 16, 18);
        
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Finalmente, era realmente uma criatura fofa,");
            textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"continuo com meus olhos voltados aos ceus");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"esperando apenas esperando que tudo isso chegue ao fim, mas antes que eu pudesse pensar");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"em mais alguma coisa acabo caindo em um buraco profundo por nao estar olhando por onde ando.");
			break;
        case 2:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Levanto-me e vejo que estou cercado de goblins.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron: Espero que estejam prontos para perderem suas vidas ");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"porque nao estou pronto para abrir mao da minha (sorriso ironico).");
		    break;

	//come�a a batalha 8
		}

        if(key[KEY_SPACE]){if(passar_historia < 3){passar_historia += 1;}}
        draw_sprite(screen, buffer, 0, 0);
		rest(130);
		clear(buffer);

    }
    if(menu == 0){escolha = 1;}
    if(menu == 1){escolha = 2;}
       
    return escolha; 
}
