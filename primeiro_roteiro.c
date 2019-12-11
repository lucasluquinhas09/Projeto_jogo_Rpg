#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int primeiro_roteiro(){
	BITMAP *pe, *pe2;
	pe = load_bitmap("imgs/final.bmp", NULL);
	pe2 = load_bitmap("imgs/pobreza.bmp", NULL);
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {391, 440};

    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 10){
			draw_sprite(buffer ,pe , 16, 18);
		
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        
        
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
			draw_sprite(buffer ,pe , 16, 18);

            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Este jogo e baseado em acoes e escolhas,para passar a historia deve-se apertar espaco");
            textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Lembre-se suas escolhas possuem consequencias e essas consequencias ditam o rumo da historia...");
			break;
        case 2:
			draw_sprite(buffer ,pe , 16, 18);

            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Em um reino distante chamado Midland no ano de 1488");
            textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"os mortos do exercito do rei destruido...");
           	textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Vivia uma pessoa onde seus sonhos eram o sinonimo de impossivel");
		    break;
        case 3:
			draw_sprite(buffer ,pe , 16, 18);

			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"ao relaciona-los com a palavra realizar e esta pessoa sou eu.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Meu nome e...");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Meu nome e Aaron e em nenhum momento eu tive uma vida estivel.");
			break;
		case 4:
			draw_sprite(buffer ,pe , 16, 18);

			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Apos o Rei Arthur, conhecido como Arthur o destruidor");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"sacrificar todo seu povo em um ritual antigo para adquirir mais poder,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"mas sim pela morte, ele tem um unico objetivo:Exterminar todos os vivos.");
			break;
		case 5:
			draw_sprite(buffer ,pe , 16, 18);

			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Seu Exercito maldito, e formado pelas pessoas (ou o que costumavam ser pessoas) que ele matou.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Segundo alguns boatos que correm pelas ruas,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"eles seriam criaturas bem parecidas com os demonios de Azuguht.");
			
			break;
		case 6:
			draw_sprite(buffer ,pe , 16, 18);

			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"As consequencias desses seus atos, comecou a assolar varios reinos,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"dentre eles estavam o que eu vivo. Caos e desespero se tornaram algo comum,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"e a fome e a unica certeza que temos.");
			
			break;
		case 7:
			draw_sprite(buffer ,pe , 16, 18);

			draw_sprite(buffer ,pe2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"E acredite em mim, eu senti na pele tudo isso,principalmente por causa dos meus pais que,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"(nunca foram exemplos a serem seguidos)me usaram como mula quando eu tinha apenas 8 anos");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"obrigando-me a fazer servicos pesados e desumanos importando-se apenas com sua sobrevivencia");
			break;		
		case 8:
			draw_sprite(buffer ,pe2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"e nao com a minha. Nao demorou muito ate um guarda real descobrir o que estava acontecendo");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"e chegar a minha casa perguntando se eu queria me livrar deste sofrimento...");
			break;
	//primeira escolha
		case 9:
			draw_sprite(buffer ,pe2 , 16, 18);
			draw_sprite(buffer, seta, posicao_seta_x,posicao_seta_y[posicao_menu]);
            if(key[KEY_UP]){if(posicao_menu == 0){}else{posicao_menu -= 1;}}
		    if(key[KEY_DOWN]){if(posicao_menu == 1){}else{posicao_menu += 1;}}
            if(key[KEY_A]){menu = posicao_menu; passar_historia +=1;}
            textprintf_centre_ex(buffer, font, 400, 350, 0, -1,"Voco aceita ir com o guarda?");
            textprintf_centre_ex(buffer, font, 400, 400, 0, -1,"Sim,eu aceito,por favor livre-me deste tormento.");
            textprintf_centre_ex(buffer, font, 400, 450, 0, -1,"Nao,apesar de tudo eu sei que no fundo eles me amam.");
            textprintf_centre_ex(buffer, font, 400, 500, 0, -1,"Precione A para continuar");
			break;
		

		
		
		
		
		}

        if(key[KEY_SPACE]){if(passar_historia < 9){passar_historia += 1;}}
        draw_sprite(screen, buffer, 0, 0);
		rest(130);
		clear(buffer);

    }
    if(menu == 0){escolha = 1;}
    if(menu == 1){escolha = 2;}
       
    return escolha; 
}
