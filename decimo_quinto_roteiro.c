#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int quinze_roteiro(){
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {400, 450};
BITMAP *p2;

p2 = load_bitmap("imgs/4.bmp", NULL);
    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 6){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        draw_sprite(buffer ,p2 , 16, 18);
        
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Senhor obscuro sem nome: nao PODE SER... Teria voce o poder de mudar o destino?");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron:O destino eh apenas um refugio para aqueles que tem medo de fazer suas proprias escolhas.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Sou teletransportado mais uma vez para o ultimo dos caminhos.");
			break;
        case 2:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"???: Eu realmente nao acredito que voce chegou ate aqui.Senti um disturbio na dimensao dos");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"meus irmaos, mas nunca pensei que voce conseguisse matar cada um deles.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Eu sou aquele conhecido como rei supremo, rei Datrak e senhor obscuro entre os homens.");
		    break;
        case 3:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Aaron:Entendo,eu diria que e um prazer conhece-lo se estivessemos em outras circunstancias.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Rei Datrak:Vejo que es um ser de respeito,mortal.Apesar de sua breve inferioridade,com o passar");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Aaron:Entendo,eu diria que e um prazer conhece-lo se estivehssemos em outras circunstancias.");
			break;
		case 4:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"dos anos eu nao tenho o que fazer alem de refletir sobre minha existencia aqui, proponho");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"entao um desafio para entreter-me, se me derrotares lhe concederei um desejo que esta ao meu");
			break;
		case 5:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"alcance,mas se falhar sofrera eternamente ao meu lado como parte de sua punicao.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron:Eu aceito seu desafio.");
			break;

	//come�a a batalha 13
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
