#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int terceiro_roteiro(){
	BITMAP *teste;
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {400, 450};
	teste = load_bitmap("imgs/guerreiro.bmp", NULL);
    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 8){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        draw_sprite(buffer ,teste , 16, 18);
        
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Carlos: Nossa, voce esta muito mais forte do que eu esperava. Bom trabalho!");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Eu tive um bom general e bons amigos para me ajudar, e claro...");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Carlos: O melhores.");
			break;
        case 2:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Carlos: Eu so vim ver se voce esta bem, afinal falta apenas um mes para a grande prova.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Estou nervoso.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Carlos: Fico feliz!");
		    break;
        case 3:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Carlos: Ha ha... PERA, voce nao sabe? Ele coloca a mao no rosto e prossegue:");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Depois de um tempo");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"no campo de treinamento, todos voces serao testados.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Cada um tem uma prova diferente, quem falhar");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"sera expulso do campo de campo e nunca mais podera voltar.");
			break;
		case 4:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Meu coracao comeca acelerar;");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"O General Gerald esta na minha frente, entregando a carta que dira");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"qual sera prova. Eu abro a carta e meu mundo acaba.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Tenho apenas 15 dias para me preparar para o momento");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"mais dificil da minha vida; minha \"prova de fogo\" sera derrotar o proprio General.");
			break;
		case 5:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Depois desse terrivel encontro, eu reuni meus amigos para falar sobre o acontecido.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Carlos: Cara, voce ta muito ferrado.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Eddie: Boa sorte.Eu sei que voc� consegue.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"E, eu consigo.");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"Carlos e Eddie: So relaxa e ganha.");
			break;
		case 6:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Se passam mais 15 longos dias.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Durante esses dias eu apenas descansei para ficar pronto para o duelo");
			break;
		case 7:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"foi bom, mas pensar que eu poderia ser expulso do acampamento me dava calafrios.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Bem... agora era a hora, me direciono para arena onde o General estava a minha espera.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"General Gerald: Finalmente voce chegou, soldado. Vamos ao seu teste final!");
			break;
	//terceira batalha
		}

        if(key[KEY_SPACE]){if(passar_historia < 8){passar_historia += 1;}}
        draw_sprite(screen, buffer, 0, 0);
		rest(130);
		clear(buffer);

    }
    if(menu == 0){escolha = 1;}
    if(menu == 1){escolha = 2;}
       
    return escolha; 
}
