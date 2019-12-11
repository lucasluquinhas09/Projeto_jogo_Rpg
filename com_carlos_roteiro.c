#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int com_carlos_roteiro(){
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {400, 450};
BITMAP *p2, *p1;
p2 = load_bitmap("imgs/final.bmp", NULL);
p1 = load_bitmap("imgs/castelo.bmp", NULL);
    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 16){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
		draw_sprite(buffer ,p1, 16, 18);
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Aaron: Carlos, eu realmente espero que voce pague por todo o mal que voce fez");
            textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"nao serei igual a voce e matarei alguem que uma vez ja o chamei de amigo.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Rei Raphael: Guardas prendam estes traidores");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Aaron:Apesar de tudo eu ...");
			break;
        case 2:
		draw_sprite(buffer ,p1, 16, 18);
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"De repente um forte tremor enorme acontece e um soldado real");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"adentra o palacio.");
			
			
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Soldado real: Rei Raphael, uma calamidade acaba de acontecer o traidor conhecido como General");
		    break;
        case 3:
		draw_sprite(buffer ,p1, 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Gerald acaba de sacrificar sua alma em um ritual antigo");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"e invocou o rei destruido aqui nas portas de Midland.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Rei Raphael: Oh nao, o que iremos fazer?");
			break;
		case 4:
		draw_sprite(buffer ,p1, 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Aaron:Deixe isso comigo meu rei.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Soldado real: O que? voce acredita ter poder para derrotar o rei destruido?");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Aaron:Confie em mim eu irei derrota-lo de uma vez por todas e livrar esta terra deste mal.");
			break;
		case 5:
		draw_sprite(buffer ,p1, 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Rei Raphael: Antes que o rei destruido consiga passar dos portoes eu tenho um pronunciamento");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"a fazer. Por suas acoes em Midland como descoberta de corrupcao,salvar o seu rei assim e se");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"indicar para salvar nosso reino do rei destruido eu nao posso indica-lo a outra coisa");
			break;
		case 6:
		draw_sprite(buffer ,p1, 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"do que lider de nosso exercito.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron:agradeco meu rei,agora soldados reunam-se comigo nos portoes todos voces");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"e o maximo que puderem chamar do campo de guerreiros.");
			break;
		case 7:
		draw_sprite(buffer ,p1, 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"entao saimos todos nos as pressas e nos reunimos nos portoes, onde o rei destruido atacara.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron:Soldados eu os convoco para uma causa,mas esta causa nao e so minha nao e so sua,nao e");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"so de nosso rei.e DE TODOS nos! e de cada geracao quem ja pisou ou a de pisar nesta terra,");
			break;
		case 8:
		draw_sprite(buffer ,p1, 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"vamos lutar hoje nao so pelas nossas vidas, mas pelas vidas que virao e que nossa historia seja");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"gravada como aqueles que livraram Midland do mal que a ameacava. QUEM esta COMIGO?");
																																//eu nao
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Todos: POR MIDLAND AO AVANTE.");
			break;
		case 9:
		draw_sprite(buffer ,p1, 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Rei Raphael: Vamos salvar o nosso reino soldados ou morreremos tentando! E assim comecava");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"o evento conhecido como guerra santa onde os soldados do rei Raphael liderados por mim");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"lutavam incansavelmente contra o exercito do rei destruido,");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"onde hesitar era sinonimo de perder a sua vida.");
			
			break;
		case 10:
		///

draw_sprite(buffer ,p2, 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"No meio desta batalha brutal gracas as nossas habilidades e forcas reunidas os mortos");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"e demonios do Rei destruido eram aniquilados um por um ate que eu finalmente ");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"tive a oportunidade de encara-lo frente a frente");
			break;
		case 11:
		draw_sprite(buffer ,p2, 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Meu coracao palpitava a cada passo que eu dava para aproximar-me daquele ser sombrio, seu");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"poder abalava toda a confianca que eu tinha no poder que eu tinha adquirido em minha jornada.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Rei destruido: O que temos aqui uma criatura como voce tentando lutar contra mim? ");
			break;
		case 12:
		draw_sprite(buffer ,p2, 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Aaron: nao sou como os outros que voce ja enfrentou pode ter certeza disso");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Rei destruido: Eu vejo bem,esta bem nos seus olhos o poder de uma estrela sombria,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"onde um mortal como voce conseguiu isto?");
			break;
		case 13:
		draw_sprite(buffer ,p2, 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Jogador: Rei Datrak vive em mim.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Rei destruido: Parece que voce esta se aproximando cada vez mais ao inves de correr.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Jogador: Preciso me aproximar se quero acabar com a sua vida.");
			break;
		case 14:
		draw_sprite(buffer ,p2, 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Rei destruido: voce tem coragem, mas todos os corajosos que me enfrentaram estao mortos.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"entao eu me aproximei e a cada vez que ficava mais proximo mais poder sombrio eu sentia era");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"algo inexplicavel que fazia meu coracao palpitar cada vez mais forte,");
			break;
		case 15:
		draw_sprite(buffer ,p2, 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"o medo que era algo que eu nao sentia ha bastante tempo finalmente era real.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1," Medo, ansiedade, indecisao eram os sentimentos");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"que rondavam a minha mente e alma, pois esta seria a batalha que definiria a minha vida.");
			break;

	
	//come�a a batalha final
		}

        if(key[KEY_SPACE]){if(passar_historia < 16){passar_historia += 1;}}
        draw_sprite(screen, buffer, 0, 0);
		rest(130);
		clear(buffer);

    }
    if(menu == 0){escolha = 1;}
    if(menu == 1){escolha = 2;}
       
    return escolha; 
}
