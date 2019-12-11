#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int oitavo_roteiro(){
	BITMAP *p1, *p2, *p3;
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {400, 450};
	p1 = load_bitmap("imgs/floresta.bmp", NULL);
	p2 = load_bitmap("imgs/velho.bmp", NULL);
	p3 = load_bitmap("imgs/montanha.bmp", NULL);
    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 17){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
		draw_sprite(buffer ,p1 , 16, 18);
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Os mortos se aproximavam.Com muito pesar e lagrimas eu disse para");
   			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"o Jeffrey:nos teremos a nossa vinganca. Comeco a correr o mais rapido que posso.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Eu olho pra tras e vejo-os arrancando um pedaco dele a cada minuto,mas ele nao para de lutar ");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"com o seu arco em maos ele foi um grande soldado ate o ultimo momento de sua vida.");
			break;
        case 2:
		draw_sprite(buffer ,p2 , 16, 18);
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Acordei em um lugar que se parecia um celeiro, o sol entrava pela entrada superior,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"me fazendo pensar quanto tempo eu dormir ? Estou enfaixado.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Lembro que corri ate desmaiar; meu corpo esta cansado e nao tinha a menor ideia de onde estava.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Um velho abre a porta do celeiro e diz: Ora voce finalmente acordou.");
		    break;
        case 3:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Aaron:Quem eh o senhor e o que estou fazendo aqui?");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Velho:Um comerciante o encontrou todo ensanguentado,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"em suas caminhadas para vender seus produtos");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"como ele me conhecia,o trouxe ate mim para salvar a sua vida, e eu nao pensei duas vezes em");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"salvar a vida de um soldado que luta contra o exercito do rei destruido.");
			break;
		case 4:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Aaron: Agradeco pela sua hospitalidade.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Velho:Nao ha de que jovem;meu filho ja foi do exercito e este simbolo que voce carrega em seu");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"brasao pertence aos soldados recem-formados.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"O que alguem da sua patente fazia em um lugar tao perigoso ?");
			break;
		case 5:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Aaron:Foi uma armadilha para o meu grupo.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Velho: Isso eh muito triste jovem... Sinto lhe informar que o lugar onde voce estava se chama");
			break;
		case 6:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"O bosque das almas, um acampamento de soldados do Rei destruido.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"A pessoa que armou isso para voce com toda certeza nao o queria vivo.");	
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Aaron: Aquele desgracado...Foi ele, ele quem passa as missoes. O General Gerald, ele tramou isso");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"contra mim,mas por que ele faria isso ? Seria porque o derrotei mesmo ele sendo um veterano ?");
			break;
		case 7:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Isso nao faz sentido, porem independente do motivo nao voltarei para Midland desonrado,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"pelo contrario irei descobrir a verdade e a partir dela retornarei para meu lar desmascarando-o");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"e tomando a minha honra com a vinganca nas maos, no qual usarei tais maos para me vingar do");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Velho: Palavras fortes, mas voce tem forca igual a suas palavras? Creio que nao, mas nao se");
			break;
		case 8:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"preocupe eu tenho algo que pode lhe ajudar, siga-me.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Segui ele ateh a casa, onde mostrara um item de valor inestimavel.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Velho: Este eh o antigo armamento do meu filho. Fique com ele, pois com toda certeza sera mais");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"importante em sua jornada, afinal meu filho ja esta morto e nao precisa mais disso.");
			break;
		case 9:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"voce conseguiu o item X.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Velho: No entanto, aviso-lhe para conseguir o poder que deseja nao sera nada facil.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Aaron: Diga-me qual seria o caminho mais rapido para conseguir tal poder?");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Velho: Existe uma lenda chamada Os 4 caminhos.");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"Aaron:E o que seriam estes 4 caminhos?");
			break;
		case 10:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Velho: ha muito tempo, em um reino distante houve um rei que foi disposto ao trono gracas a sua");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"que foi disposto ao trono gracas a sua habilidade");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"surpreendente de manipulacao magica, sendo assim o primeiro e unico Rei mago de toda historia.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Com seus poderes ele foi capaz de lutar contra o maior mal jamais enfrentado em");
			break;
		case 11:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"nosso mundo antes do Rei destruido, os datraks ou como sao mais conhecidos os senhores obscuros");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron:Senhores obscuros?Eu pensei que isso so fosse uma lenda.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Velho:A familia real tenta esconder isto ha anos,pois temem o conhecimento que se pode adquirir");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"a partir dos caminhos a minha familia ha geracoes guarda este segredo, pois todos nos");
			break;
		case 12:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"eramos nobres ateh o meu bisavo ter traido o rei e ser sentenciado a morte,com isso a nossa");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"familia fugiu mudando o seu nome desapegando do");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"passado vivendo como camponeses ateh os dias atuais.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Aaron:Isso e realmente muita informacao para minha cabeca,vamos apenas nos focar nos caminhos.");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"Velho: Voltando a historia sobre o rei mago, entao ele selou o poder dos Datraks em 4 dimensoes");
			break;
		case 13:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"diferentes dentro de uma caverna trancando a entrada para este local em uma chave.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron:E onde encontro esta chave?");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Velho: voce deve ir a montanha mais alta que existe ao norte e la no topo do mundo voce vera");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"um labirinto onde monstros guardam o local, se voce for forte o suficiente para enfrentar");
			break;
		case 14:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"todos os desafios do labirinto conseguira a chave necessaria para adentrar os 4 caminhos e");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"posteriormente enfrentar os senhores obscuros, conseguindo assim a forca que deseja.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Aaron:Esta eh minha ultima esperanca e irei agarra-la com todas as forcas. agradeco por ter");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"me ajudado a minha vinganca sera a forca de vontade necessaria para enfrentar todos os desafios.");
			break;
		case 15:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Saio daquele lugar e agradeco ao velho por seu presente e historia. comeco a minha jornada ate o");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"labirinto para a chave dos 4 caminhos. sao longos dias de caminhada e a cada vez que o tempo");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"passa o meu odio so cresce, decido acampar e olho para o ceu, Robert, Alexandre, Jeffrey, Vicent,");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1," sinto falta de voces. A vida muitas vezes nao eh justa, principalmente, se for a minha.");
			break;
		case 16:
		draw_sprite(buffer ,p3 , 0, 0);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"mas o carisma de voces me inspirava a ser o melhor lider possivel, porem isso esta no passado");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Conhecemo-nos em tao pouco tempo, finalmente chego a montanha e comeco a escala-la.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Ao chegar ao topo da montanha encontro finalmente a porta do labirinto deparando-me");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"com um trol na recepcao.");
			break;
	
	////começa a batalha 6 
		}

        if(key[KEY_SPACE]){if(passar_historia < 18){passar_historia += 1;}}
        draw_sprite(screen, buffer, 0, 0);
		rest(130);
		clear(buffer);

    }
    if(menu == 0){escolha = 1;}
    if(menu == 1){escolha = 2;}
       
    return escolha; 
}
