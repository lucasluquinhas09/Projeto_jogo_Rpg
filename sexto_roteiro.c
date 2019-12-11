 #include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int sexto_roteiro(){
	BITMAP *i2;
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {400, 450};
	i2 = load_bitmap("imgs/floresta.bmp", NULL);
    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 10){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        draw_sprite(buffer ,i2 , 16, 18);
        
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"A criatura da uns passos para tras, seus olhos revelam que ela ja aceitou seu destino.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Alexandre: Filho do bastardo");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Alexandre: (Joga uma pedra na cabeca da criatura que cai no chao morrendo");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Robert: Que merda foi essa?");
			break;
        case 2:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Alexandre: Eu nao sei.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron: Ja chega! Vamos terminar o que comecamos.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Todos concordaram com a cabe�a,");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"e continuamos aos poucos e por algum motivo que eu desconheco,");
		
		    break;
        case 3:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"o bosque comecou a ficar um pouco mais claro.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Vicent: Eu acho isso estranho.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Robert: O que?");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Vicent:Ter um guardiao para esse lugar com um poder de ");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"oclusao para um local tao sem importancia");
			break;
		case 4:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"como esse me parece muito estranho.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Alexandre:Eles sabiam da minha forca, por isso mandaram ele");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"para me matar; ele conseguiu arrancar um pedaco, mas ainda estou inteiro.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Conforme a escuridao vai sumindo um nevoa densa comeca a aparecer,");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"dificultando nossa visao; eu sinto um leve calafrio");
			break;
		case 5:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"subir das minhas pernas ate a minha espinha, meu coracao comecou a pulsar mais forte.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Nao eram uma e nem duas, mas dezenas de seres malignos que afloram nesse lugar.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Nao havia escapatoria, apenas um cercado de mortos do rei destruido.");
			break;
		case 6:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Alexandre: COMO ISSO EH POSSIVEL?(tremendo de medo).");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"ISSO ERA UMA MISSAO DE BAIXO NIVEL O QUE ESTAMOS FAZENDO AQUI?");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Vicent:Eu sabia! Isso com certeza deve ter sido um erro, ou um engano.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Os mortos estavam se aproximando lentamente,");
			break;
		case 7:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"como um predador antes de dar o bote.");				
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Robert: Aaron O QUE E ISSO PORQUE ESTAMOS AQUI?");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Alexandre:Aaron, Voce esta na lideranca aqui, faca alguma coisa!");
			break;
		case 8:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Vicent: Pessoal... Temos que sair daqui agora!");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Robert: Mas como ? Jeffrey estava calado...");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Eu estava tremendo e nao sabia o que responder; a minha respiracao estava ofegante");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Eu nao sabia o que estava acontecendo porque o General me passou esta missao?");
			break;
		case 9:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Porque o Carlos simplesmente nao calou aquela boca grande");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"e me deixou ser um soldado normal ?");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Nada mais fazia sentido para mim alem da possivel morte eminente.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"E ela vinha... Vinha com passos vazios e sedentos por vidas...");
			break;
	//terceira batalha
		}

        if(key[KEY_SPACE]){if(passar_historia < 10){passar_historia += 1;}}
        draw_sprite(screen, buffer, 0, 0);
		rest(130);
		clear(buffer);

    }
    if(menu == 0){escolha = 1;}
    if(menu == 1){escolha = 2;}
       
    return escolha; 
}
