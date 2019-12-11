#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int classe_roteiro(){
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[3]= {400, 450, 500};

    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 8){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        draw_sprite(buffer ,teste , 16, 18);
        
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Apos falar com a senhora no meio do caminho, o guarda real me levou ate o salao real,"); 
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"e falou algo que nao escutei com o rei, mas eu sei que era sobre o meu caso,"); 
			break;
        case 2:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"pois o rei Raphael ficou claramente comovido e ordenou que meus pais fossem presos."); 
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Alguns dias depois executados.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Mesmo depois de tudo que eles fizeram comigo, eu sei que no fundo ele me amavam,");
		    break;
        case 3:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"eu sinto uma profunda prostracao pelas suas mortes. Mas as piores duvidas,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"as piores decisoes, os piores momentos da minha vida, ainda estavam por vim.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"O rei ordenou que eu fosse enviado para o campo de treinamento de guerreiros apos ter o cuidado");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"treinamento de guerreiros apos ter o cuidado");
			break;
		case 4:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"medico necessario. La eu seria treinado para ser um soldado ");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"e lutar contra a causa do rei destruido.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Apos algumas semanas de cuidado medico intenso, finalmente sou liberado."); 
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Doi-me o coracao pensar que deixarei minha bela cidade, mas o destino me aguarda.");
			break;
		case 5:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Chegando ao local de treinamento encontro o General, Gerald, responsavel pelo exercito.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Ele e um homem que aparenta estar na casa dos quarenta,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"ele tinha uma barba volumosa e grisalha,");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"que dava um toque suave ao seu cabelo, que em maior parte ainda era ruivo.");
			break;
		case 6:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Ele me pergunta com um sorriso no rosto o que quero ser:");
			break;
		case 7:
			draw_sprite(buffer, seta, posicao_seta_x,posicao_seta_y[posicao_menu]);
            if(key[KEY_UP]){if(posicao_menu == 0){}else{posicao_menu -= 1;}}
		    if(key[KEY_DOWN]){if(posicao_menu == 2){}else{posicao_menu += 1;}}
            if(key[KEY_A]){menu = posicao_menu; passar_historia +=1;}
            textprintf_centre_ex(buffer, font, 400, 350, 0, -1,"O que voce quer ser?");
            textprintf_centre_ex(buffer, font, 400, 400, 0, -1,"Guerreiro.");
            textprintf_centre_ex(buffer, font, 400, 450, 0, -1,"Arqueiro.");
            textprintf_centre_ex(buffer, font, 400, 500, 0, -1,"Mago.");
            textprintf_centre_ex(buffer, font, 400, 520, 0, -1,"Pressione A para selecionar.");
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
    if(menu == 2){escolha = 3;}
       
    return escolha; 
}
