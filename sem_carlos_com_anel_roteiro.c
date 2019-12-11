#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int sem_carlos_ou_anel_roteiro(){
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {400, 450};
BITMAP *p2;
p2 = load_bitmap("imgs/final.bmp", NULL);
    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 12){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        draw_sprite(buffer ,p2 , 16, 18);
        
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Rei destruido: EU? EU SOU UM DEUS! COMO POSSO ESTAR SENDO");
            textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"DERROTADO POR ALGUEM COMO VOCE, isso");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"esta errado o destino me escolheu para dominar estas terras, mas lembre-se garoto"); 
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"eu sou IMORTAL (risadas).");
			break;
        case 2:
          	textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Rei destruido: entao nao importa o quanto tente voce nunca ira...");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"De repente o do anel do imperador em meu dedo que foi");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"me dado ha muito tempo come�a a brilhar.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"O ceu escurece trovoes tomam conta de todo o reino,");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"todo o poder do Rei destruido comeca a ser ");
		    break;
        case 3:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"absorvido pelo anel juntamente de todo o seu exercito.");
			textprintf_centre_ex(buffer, f33, 400, 375, 0, -1,"Fico pensando no que esta acontecendo ate");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"lembrar-me do que aquela senhora tinha me dito "); 
			textprintf_centre_ex(buffer, f33, 400, 425, 0, -1,"este e o anel do imperador boa fortuna"); 
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"ele lhe trara, mas se voce possuir odio o mal ele lhe trara.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Assim,percebo que ao entregar-me ao");
			break;
		case 4:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"meu odio a condicao do anel foi saciada,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"eu estava em equilibrio entre o meu odio e minha redencao,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"mas ao matar o Carlos e concluir o meu odio e vingan�a o anel mal sorte trouxe-me,");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"consequentemente,");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"apos absorver todo o mal ali presente o anel foi corrompido abrindo um portal entre o mundo sombrio");
			break;
		case 5:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"e o nosso mundo fazendo com que criaturas das trevas a cada dois anos entrem em nosso mundo.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Um novo dia nasce em Midland, com a morte do Rei Raphael ");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"terceiro em batalha o seu filho seria o proximo");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"na linha de sucessao do trono, isso se eu nao o matasse antes.");
			break;
		case 6:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Apos sentir as acoes do anel eu percebi que a unica maneira de lutar contra o mal seria com ");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"o meu mal, ou seja, com aquilo que eu me tornei. Aceito minha verdadeira natureza e irei lutar");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"incansavelmente para proteger este reino destas criaturas das trevas.");
			break;
		case 7:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Outro dia nasce em Midland e eu sou o rei, ");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"onde ninguem questiona o meu poder e autoridade,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1," mas tambem em meu reino nunca ninguehm sofre.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Protejo meus cidadaos com meu poder a cada dois anos e nenhum invasor");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"humano tem coragem de erguer sua espada contra o meu reino. Outro dia nasce em Midland ?"); 
			break;
		case 8:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Sinto-me cada vez mais sozinho, onde estao os meus amigos?ha um novo dia em Midland ? ");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"ja travei tantas batalhas onde esta o sentido da minha vida? Em que dia estou em Midland?");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Eu sinto falta do passado...");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Voltaram-se dois anos em Midland e as consequencias de minhas acoes caem");
			break;
		case 9:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"na minha consciencia diariamente. O que eh Midland? Acho que estou vendo coisas seriam pessoas");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"tramando contra mim? Outro dia nasce em Midland, mas o meu sentido de vida nao.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Outro dia nasce em Midland e eu apenas aceitei o meu papel nisso tudo,");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"protegendo meu reino e salvando");
			break;
		case 10:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"vidas, eu sou o que sou e nao perderei a sanidade com isso, eu nao perderei a sanidade com isso."); 
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Eu nao perderei a sanidade com isso. Eu fiz escolhas e elas me guiaram ateh aqui e a unica coisa");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1," que posso fazer eh conviver com elas e ser forte, pois um reino necessita de minha presenca.");
			break;
		case 11:
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Fim");
			break;
	
	//fim
		}

        if(key[KEY_SPACE]){if(passar_historia < 12){passar_historia += 1;}}
        draw_sprite(screen, buffer, 0, 0);
		rest(130);
		clear(buffer);

    }
    if(menu == 0){escolha = 1;}
    if(menu == 1){escolha = 2;}
       
    return escolha; 
}
