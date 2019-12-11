#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int treze_roteiro(){
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {400, 450};
BITMAP *p2;
p2 = load_bitmap("imgs/2.bmp", NULL);
    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 5){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        draw_sprite(buffer ,p2 , 16, 18);
        
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Jogador: Adeus senhor obscuro.");
            textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Nossa isso realmente foi...");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Aaron:Espera, onde estou? ");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Fui teletransportado novamente e dessa vez em uma");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"regiao com um mar de areia e o local onde eu pisava era totalmente escuro.");
			break;
        case 2:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Avistando apenas um ser com aparencia feminina e demoniaca a alguns metros de distancia"); 
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"???:(Risadas maleficas)");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"???: voce esta na minha dimensao agora, mortal.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Esta chave imunda que vejo carregar ela o teletransporta a uma dimensao desejada");
		    break;
        case 3:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"a cada vez que cumpre um desafio e como seu desejo enfrentar a nos voce nos encontra.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron: E quem e voce.");
			break;
		case 4:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Iruchel: Meu nome eh Iruchel, a senhora datrak e nao deixarei que prossiga com isso.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron:eh o que vamos ver.");
			break;
	
	//come�a a batalha 11
		}

        if(key[KEY_SPACE]){if(passar_historia < 5){passar_historia += 1;}}
        draw_sprite(screen, buffer, 0, 0);
		rest(130);
		clear(buffer);

    }
    if(menu == 0){escolha = 1;}
    if(menu == 1){escolha = 2;}
       
    return escolha; 
}
