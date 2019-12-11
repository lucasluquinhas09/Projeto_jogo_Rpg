#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int sem_anel_roteiro(){
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {400, 450};
BITMAP *p2;
p2 = load_bitmap("imgs/final.bmp", NULL);
    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 6){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        draw_sprite(buffer ,p2 , 16, 18);
        
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Rei destruido: EU? EU SOU UM DEUS!");
            textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"COMO POSSO ESTAR SENDO DERROTADO POR ALGUEM COMO voce, isso");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"esta errado o destino me escolheu para dominar estas terras, mas lembre-se garoto"); 
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"eu sou IMORTAL (risadas).");
			break;
        case 2:
          	textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Rei destruido: entao nao importa o quanto tente voce nunca ira me derrotar!");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Sons de destruicao e pavor sao ouvidos alem do horizonte, a vida passa diante dos meus olhos,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"as escolhas que fiz tudo o que matei e lutei para estar aonde cheguei, minhas superacoes");
		    break;
        case 3:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"e frustracoes internas... Seria tudo isso uma grande bobagem? Seria este o sentido");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"de minha vida? Seria este o sentido do meu fim?");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"nao sei mais o que pensar e muito menos como agir.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Meu corpo chora rios vermelhos a cada golpe do Rei destruido,");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"para onde posso ir alem dos bracos da morte?");
			break;
		case 4:
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Midland desaparece e com o seu sumico vai-se tambehm a minha vida...");
			break;
		case 5:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Fim.");

			break;
	
	//fim
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
