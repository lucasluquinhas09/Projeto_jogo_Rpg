#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int nono_roteiro(){
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {400, 450};
	BITMAP *p1;
	p1 = load_bitmap("imgs/labirinto.bmp", NULL);
	//haaaaaaaaarpppy porraaaaaaa.
    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 6){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        draw_sprite(buffer ,p1 , 16, 18);
        
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Entro no labirinto, era um lugar estranho como nunca");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"tinha visto antes era como um interior de uma gruta, onde um passo em falso a morte,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"em meio a esta situacao eu pensava que estaria ofegante e ansioso, mas muito pelo contrario me");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"sentia cheio de odio e de forca, uma vez que nao tinha mais nada a perder. Em sua entrada estava");
			break;
        case 2:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"escrito na lingua dos midianitas, a lingua oficial de Midland a frase olhos no ceu,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"perdicao no inferno nao faco a menor ideia do que isso significa e apenas sigo o caminho.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Estou caminhando ha cinco minutos e nenhum perigo me foi apresentado,");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"acho estranho de que nenhuma forma algo me atingiu ou tentou me matar.Continuo caminhando,");
		    break;
        case 3:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"mas absolutamente nada acontece, nao sabia o que mais me chamava atencao ofato do labirinto");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"nao ser um escuro completo mesmo nao possuindo algum tipo de iluminacao.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Assim, podendo, enxergar normalmente ou o fato de que minha caminhada parecia algo sem fim,");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"ate que se passam mais 10 minutos e comeco a pensar na frase que havia na entrada olhos no ceu,");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"perdicao no inferno,tudo entao comeca a fazer sentido os olhos e o meio de entrada,");
			break;
		case 4:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"o ceu e o caminho certo,comeco a caminhar com meus olhos para cima onde so havia completa");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"porem estou caminhando para o lugar errado entrando assim em perdicao.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"escuridao e uma criatura pula em cima de mim com suas garrafas afiadas,");
			break;
		case 5:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"ela tenta arrancar o meu pescoco, mas rapidamente consigo escapar de seu ataque,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"tendo apenas o meu braco arranhado no processo.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Aaron: NAO E POSSIVEL EEE A HARPY!!!!!");
			break;

	//come�a a batalha 7
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
