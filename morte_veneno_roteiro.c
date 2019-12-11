#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int veneno_roteiro(){
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {400, 450};
BITMAP *p2;
p2 = load_bitmap("imgs/pobreza.bmp", NULL);
    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 5){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        draw_sprite(buffer ,p2 , 16, 18);
        
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Aaron:nao, apesar de tudo eu sei que no fundo eles me amam,entao apenas me deixe em paz...");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Sigo com minha vida e sinto muita dor pelo meu corpo, o medico da vila diz que tenho serios");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"problemas fisicos gracas ao esforco sobre-humano que realizei e que se em hipotese eu tivesse");
			break;
        case 2:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"parado de fazer tais atividades alem do meu limite ha 10 anos eu nao estaria dessa forma e me");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"receita um remedio.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Apos isso vou para casa com muita dor e penso se devo mesmo tomar esse remedio,");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"ja que a morte para mim ja eh algo certeiro.");
		    break;
        case 3:
			draw_sprite(buffer, seta, posicao_seta_x,posicao_seta_y[posicao_menu]);
            if(key[KEY_UP]){if(posicao_menu == 0){}else{posicao_menu -= 1;}}
		    if(key[KEY_DOWN]){if(posicao_menu == 1){}else{posicao_menu += 1;}}
            if(key[KEY_A]){menu = posicao_menu; passar_historia +=1;}
            textprintf_centre_ex(buffer, font, 400, 350, 0, -1,"Voce vai tomar o remedio?");
            textprintf_centre_ex(buffer, font, 400, 400, 0, -1,"Sim, nao morrerei sem lutar.");
            textprintf_centre_ex(buffer, font, 400, 450, 0, -1,"Nao, minha morte ja eh algo certo.");
            textprintf_centre_ex(buffer, font, 400, 500, 0, -1,"Precione A para continuar");
			break;
		case 4:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Comeco a sentir dor e deito-me no chao da minha casa com meus pais sem dar importancia,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Sinto a minha respiracao cada vez mais fraca...");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"VOCE MORREU");
			break;
	
	//terceira batalha
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

