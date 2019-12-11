#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int antes_tres_roteiro(){
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {400, 450};

    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 4){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        draw_sprite(buffer ,teste , 16, 18);
        
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Passaram-se 6 anos desde o dia que eu cheguei no campo de treinamento");
            textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Eu sinto meu corpo mais forte, minha mente mais sagaz e minhas maos mais ardilosas;");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"vejo que valeu a pena o intenso treinamento que recebi durante esses anos. Alem disso, agora tenho");
			break;
        case 2:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"amigos para dividir o trabalho arduo, Eddie, um jovem campones que se juntou a nos a mais ou menos");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"dois anos, Ele vem treinando para ser um arqueiro; Tambem tem o Carlos, ele nunca contou porque");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"que se juntou ao campo de treinamento e eu nunca soube suas origens, ele deve ter seus motivos,");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"ele treina para ser um guerreiro. Enquanto eu refletia sobre meu trabalho duro vejo o Carlos");
		    break;
        case 3:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"aproximando-se de mim dizendo: Vejo que ta dando mole em ha ha.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Carlos:Vamos ver do que voce e capaz de fazer quando entra em combate.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Aaron: Vamos lutar meu amigo.");

			break;
	
	//primeira batalha
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
