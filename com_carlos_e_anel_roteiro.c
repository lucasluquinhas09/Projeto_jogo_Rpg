#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int com_carlos_anel_roteiro(){
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {400, 450};
BITMAP *p2;
p2 = load_bitmap("imgs/castelo.bmp", NULL);
    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 7){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        draw_sprite(buffer ,p2 , 16, 18);
        
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"De repente o do anel do imperador em meu dedo que");
            textprintf_centre_ex(buffer, f33, 400, 375, 0, -1,"foi me dado ha muito tempo comeca a brilhar.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"e fortes raios de luz atingem todo o reino de Midland purificando");
			textprintf_centre_ex(buffer, f33, 400, 425, 0, -1,"todo o exercito sombrio juntamente");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"de seu rei que grita incessantemente enquanto suas almas eram purificadas.");
			textprintf_centre_ex(buffer, f33, 400, 475, 0, -1,"Fico pensando no que");
			break;
        case 2:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"esta acontecendo ate lembrar-me do que aquela");
            textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"senhora tinha me dito este e o anel do imperador");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"boa fortuna ele lhe trara, mas se voce possuir odio o mal ele lhe trara.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Assim percebo que ao libertar-me de todo odio a condicao de sorte do anel foi saciada ao perder o");
		    break;
        case 3:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"equilibrio entre odio e redencao propria para o caminho de so redencao a");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"boa sorte me foi chegada, consequentemente, livrando-me de todo mal e protegendo este reino. ");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Agora um novo dia nasce em Midland, onde eu vivo em paz como lider do exercito do rei,");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Ajudando-o e fazendo cada vez");
			break;
		case 4:
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Mais com que esse reino seja prospero.");
			break;
		case 5:
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Superando todo o mal que me causaram e lutando para que a paz seja assim mantida. ");
			break;
		case 6:
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Fim. ");
			break;
	
	//terceira batalha
		}

        if(key[KEY_SPACE]){if(passar_historia < 7){passar_historia += 1;}}
        draw_sprite(screen, buffer, 0, 0);
		rest(130);
		clear(buffer);

    }
    if(menu == 0){escolha = 1;}
    if(menu == 1){escolha = 2;}
       
    return escolha; 
}
