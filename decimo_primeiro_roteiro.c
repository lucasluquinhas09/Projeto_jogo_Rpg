#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int onze_roteiro(){
	BITMAP *p2;
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {400, 450};
	p2 = load_bitmap("imgs/labirinto.bmp", NULL);
    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 23){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        draw_sprite(buffer ,p2 , 16, 18);
        
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Mato e piso na cabeca de cada goblin miseravel que tentou acabar comigo e sigo minha jornada,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"onde a adrenalina e a sede por vinganca alimentavam-me de energia a cada momento e");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"com olhos voltados para cima encontro uma grande porta, onde uma voz misteriosa me diz");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"para apontar minhas maos para o alto, rapidamente fiz o que ele pediu, pois meu");
			break;
        case 2:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"objetivo estava por tras daquela porta e eu faria qualquer coisa para atravessa-la.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Voz misteriosa:Vejo que suas maos estao sujas do sangue de harpia...");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Voz misteriosa:Quero dizer sujas do sangue dos goblins,");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"entao que assim seja. A porta comeca a se abrir...");
		    break;
        case 3:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Voz misteriosa:Seu novo desafio o espera,apos passar pelo apelo das memorias");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"o seu inimigo final o aguarda.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"A voz some e eu atravesso o grande portao, de alguma forma era como se eu estivesse em outro");
			break;
		case 4:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"lugar fora do real perguntava-me como podia haver um lugar tao colossal dentro daquele labirinto.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Continuo andando ateh que vejo uma crianca correndo, fico assustado em como uma crianca");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"poderia estar ali, penso que este lugar esta mexendo com minha cabeca e tento ignora-la ateh");
			break;
		case 5:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"que ela para e vem ateh minha direcao. No entanto algo surpreendente acontece.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron:nao pode ser, mas esta crianca... Sou eu? ");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Ela para na minha direcao e eu digo para ela que nao tenho tempo para jogos mortais e continuo");
			break;
		case 6:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"caminhando, ate que ela comeca a falar comigo.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"crianca:Ola Aaron como nos crescemos nao e mesmo?");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Aaron: voce e apenas mais um monstro deste lugar infernal, entao me deixe em paz.");
			break;
		case 7:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"crianca:Ora, como assim nao somos iguais? voce e tao podre quanto eu sou.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron:O que quer dizer com isso?");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"crianca:(Risada ironica)");
			break;
		case 8:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"crianca:Ora Aaron para um pouco e pense no que voce fez ate aqui.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Voce realmente acredita que fez as decisoes certas?");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Aaron:Claro que sim.");
			break;
		case 9:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"crianca: Tem certeza que seus ideais nao se perderam no meio do caminho? (risadas)");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron:Como assim?");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"crianca: As mortes que voce causou as amizades que voce perdeu tudo");
			break;
		case 10:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"o que aconteceu ate aqui foi culpa sua.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron:nao,NAO FOI.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"crianca:nao?Vamos ao comeco,seus pais foram assassinados pelo rei e o que voce fez?");
			break;
		case 11:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Nao precisa responder que eu mesmo te digo NADA.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron: nao, isso nao e justo eu me senti mal por eles.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"crianca: Mas nao suficiente a ponto de salva-los, voce e um ser desprezivel e egoista, sempre foi.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Aaron:Pare");
			break;
		case 12:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"crianca: Seus amigos Eddie e Carlos voce os DECEPCIONOU");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron:Nao, tramaram contra mim.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"crianca: Tramaram contra voce? Ou foi voce quem matou seus companheiros em batalhas ?");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Ja parou para pensar nisso ?");
			break;
		case 13:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Creio que nao, pois seu egoismo MAIS UMA VEZ FICOU NA FRENTE DE TUDO");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Colocando a culpa em traidor X  e Y ao invehs de assumir que fracassou como lider.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Aaron:nao, NAO NAO PAREEE isso esta errado.");
			break;
		case 14:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"crianca: A unica coisa errada aqui e voce, voce e a maca podre deste reino, o soldado perdido,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1," desonrado, que poem a culpa nos outros e nao assume sua propria natureza podre pisando tudo ");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"em seu caminho para obter sucesso, voce e pessimo, Aaron.");
			break;
		case 15:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"De repente todas as minhas lembrancas ruins vem a tona,fico de joelhos e comeco a gritar e");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"com uma vontade imensa de desistir e chorar. sera que sou uma pessoa podre? sera que eu"); 
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"deveria ter feito mais? Porque eu sou assim?");
			break;
		case 16:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"crianca: Sua versao crianca se orgulharia do que voce se tornou hoje?");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron:(Comeca a sorrir)");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"crianca:Porque esta sorrindo?");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Aaron:Eu sou o que sou.");
			break;
		case 17:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"crianca: O que? entao aceita sua verdadeira natureza?");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron:Sim, mas minha verdadeira natureza nao e esse monte de lixo de que voce tem me falado,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"entao procura outro soldado desocupado para enche-lo de joguinhos mentais, pois tudo o que fiz");
			break;
		case 18:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"e passei ate aqui me fez a pessoa que sou hoje, mas como nem tudo esta ao meu controle, nao ");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"pude salvar muitas das vidas que atualmente nao existem, compreendo tudo o que fiz e sei que dei");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"o meu melhor e nao me arrependo, entao da o fora que eu tenho algo a cumprir.");
			break;
		case 19:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"crianca: (Faz uma expressao de odio e desaparece)");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Percebo que apenas botei um pe em frente a porta e nem tinha a adentrado.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Aaron:Preciso sair logo daqui(Adentro o local e continuo)");
			break;
		case 20:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Caminhando ate que sou abordado por um monstro que somente os sonhos podem descreve-lo.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"(Risadas em meio a escuridao)");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Aaron:Quem esta ai?");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"E em menos de um segundo um monstro sai das sombras e me aborda rindo escandalosamente e diz:");
			break;
		case 21:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Monstro:Meu nome e Vacanta e eu nao acredito que um simples mortal conseguiu atravessar pelo");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"apelo das memorias e vim me enfrentar.");
			break;
		case 22:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Aaron:Pois acredite bela senhora, pois sua descrenca acaba de aparecer a sua frente.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Vacanta: Corajoso e insolente sua carne sera perfeita para a retaliacao.");
			break;
	//come�a a batalha 9
		}

        if(key[KEY_SPACE]){if(passar_historia < 23){passar_historia += 1;}}
        draw_sprite(screen, buffer, 0, 0);
		rest(130);
		clear(buffer);

    }
    if(menu == 0){escolha = 1;}
    if(menu == 1){escolha = 2;}
       
    return escolha; 
}
