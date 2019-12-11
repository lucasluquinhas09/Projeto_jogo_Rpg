#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int setimo_roteiro(){
	BITMAP *p1 ;
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {400, 450};
	p1  = load_bitmap("imgs/floresta.bmp", NULL);
    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 13){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        draw_sprite(buffer ,p1 , 16, 18);
        
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Alexandre: Eles sao muitos e todos sao acima do nosso nivel,O QUE VAMOS FAZER?");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Batalhavamos e batalhavamos, mas nao conseguiamos mata-los.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Alexandre chorava e perguntava quem");
			break;
        case 2:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"tinha sido o miseravel que o levou para aquela missao,");
            textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"berrava que claramente aquilo foi traicao");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"e que foi algo armado para nos matar.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Mesmo falando muitas asneiras durante a vida,");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"nos sabiamos que dessa vez o Alexandre tinha razao,"); 
		    break;
        case 3:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"mas quem faria isso conosco? Nao! Eu sei quem foi...");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Nao, nao foi ele porque ele faria isso comigo?");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Eu nao conseguia pensar em mais nada apenas lutava");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"e lutava pela minha vida e a dos meus companheiros.");
			break;
		case 4:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Alexandre: VAMOS CORRER MESMO NAO TENDO PARA ONDE, EU SO QUERO QUE...");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"o silencio reina");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Pela primeira vez em sua vida o Alexandre parou de falar,");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"mas nao porque nao tinha mais palavras,");
			break;
		case 5:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"mas sim porque nao possuia mais uma cabeca para completar esta acao.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Todos estavam em estado de choque.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Robert: NAO! NAO! NAO! NAO! ISSO NAO ESTA ACONTECENDO.");
			break;
		case 6:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Eu nao sabia o que fazer me sentia triste e desesperado,mas nao tinha tempo para luto,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"eu tinha que lutar pelos que restantes de nos.Enquanto eu pensava Robert se atirou no meio deles");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"berrando.Fique sem reacao novamente, e antes de perceber, ele tinha se entregue ao desespero,");
			break;
		case 7:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"e morreu retalhado. Eles ficaram concentrados em retalhar Robert.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Jogador: CORRAM");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"E com pesar, abandonamos o Robert. Tivemos que fazer isso, tivemos que abracar a oportunidade");
			break;
		case 8:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Chegamos ate a saida, lembramos que havia uma caverna ali perto e que,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"possivelmente ela levaria para o outro lado da montanha; onde os mortos nao nos pegariam.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Nao fomos rapidos o suficiente.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Fomos alcancados, e o Vicent por correr mais devagar que a maioria...");
			break;
		case 9:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Ele gritava sem parar pela sua vida. Vi pela primeira vez o Jeffrey chorar,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"ele berrava como uma crianca, lamentando a morte de seu irmao.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Correndo ja sem esperanca, chegamos ate a caverna e a sua entrada.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Um morto-vivo saiu da caverna, e pulou em cima de Jeffrey.");
			break;
		case 10:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"O monstro rosnava ao tentar alcancar o rosto do meu companheiro.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Os dois rolavam pelo chao, eu tinha que ajudar!");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Levantei-me o animo e desferi um golpe mortal.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"O monstro caiu morto, mas ele segurava um pedaco do meu amigo,");
			break;
		case 11:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"para ser exato um pedaco da sua costela.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Eu comecei a gritar e chorar, porque meu ultimo companheiro estava altamente ferido,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"eu dizia que ia salva-lo e tirar a gente dali.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Jeffrey: Se voce voltar agora voce sera desonrado,");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"as pessoas o tratarao como lixo e voce perdera seu posto de soldado.");
			break;
		case 12:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Ao inves de ir direto ao reino procure o responsavel por esta traicao,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"e continue com sua honra.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Eu nunca te disse isso mais no pouco que nos conhecemos eu ja te admirei.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Deixe-me aqui e lhe garantirei tempo de fugir.");
			break;
	//terceira batalha
		}

        if(key[KEY_SPACE]){if(passar_historia < 13){passar_historia += 1;}}
        draw_sprite(screen, buffer, 0, 0);
		rest(130);
		clear(buffer);

    }
    if(menu == 0){escolha = 1;}
    if(menu == 1){escolha = 2;}
       
    return escolha; 
}
