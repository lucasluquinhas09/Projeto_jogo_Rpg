#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int quarto_roteiro(){
BITMAP *pi;
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {400, 450};
    pi = load_bitmap("imgs/guerreiro.bmp", NULL);
    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 4){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        draw_sprite(buffer ,pi , 16, 18);
        
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"General Gerald: aagh.");
            textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Digno de um soldado, meus parabens - ele estica a mao para apertar a minha.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Aaron- voce foi aprovado.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Eu tive um bom general...");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"Gerald: O melhor.");
			break;
        case 2:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Eu voltei para barraca, onde fiquei esperando meus amigos por uma hora.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"E ai se sairam bem?");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Carlos: Sim, mas Eddie quase nao conseguiu.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Eddie: Vai procurar o que fazer Carlos.");
		    break;
        case 3:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Carlos: Hmm boa ideia que tal eu assistir voce duelando com o Aaron.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Eddie: Cara eu nao sei se...");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Carlos: Eita, ta com medo?");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Eddie: Nao, eh que... ah, quer saber vamos nessa Aaron. ");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"Aaron:(comeco a rir) Eu aceito!");
			break;
	
	//terceira batalha
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
