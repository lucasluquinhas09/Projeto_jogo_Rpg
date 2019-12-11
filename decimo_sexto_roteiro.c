#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int dezesseis_roteiro(){
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {400, 450};
BITMAP *p2, *p1;
p2 = load_bitmap("imgs/4.bmp", NULL);
p1 = load_bitmap("imgs/castelo.bmp", NULL);
    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 37){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        switch (passar_historia){
        case 1:
		draw_sprite(buffer ,p2 , 16, 18);
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Rei Datrak: Como isso e possivel?");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron: E simples,voce tinha nada a perder e eu tinha tudo a ganhar");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Rei Datrak: Como parte do acordo, realizarei seu desejo.");
			break;
        case 2:
		draw_sprite(buffer ,p2 , 16, 18);
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Aaron:Eu desejo saber quem me traiu e porque me traiu.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Rei Datrak: Um desejo realmente curioso eu diria, pois bem.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"As pessoas que lhe trairam possuem duas identidades.");
		    break;
        case 3:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Aaron: Pessoas? Como assim duas identidades?");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Rei Datrak:Para entendermos teremos que voltar ao");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"passado e reviver as memorias dessas duas pessoas.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Rei Datrak: Havia uma crianca da nobreza chamada Robin Roths e ele nunca aceitou que");
			break;
		case 4:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"pessoas que vinham de uma classe inferior a sua se destacassem tanto quanto ele, um verdadeiro");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"egomaniaco desde sua infancia. Ate que ele e seu tio Tulius Roths em uma viagem com toda a");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"familia acompanhada por segurancas do rei foram atacados pelo exercito do rei destruido.");
			break;
		case 5:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Assim, fazendo os segurancas do rei falhar e a familia Roths ser massacrada. Os unicos que");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"sobreviveram a essa tragedia foram Robin e Tulius.O rei Raphael Terceiro com medo da noticia se");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"espalhar e o reino ter-se a ideia de que o rei nao poderia protege-los,");
			break;
		case 6:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"ja que uma familia tao importante para o reino conseguiu ser quase dizimada chamou-os");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"e ordenou para que mudassem seus nomes,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"eles nao seriam mais Robin Roths e Tulius Roths,");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"mas Gerald Trish e Carlos Leopon\", onde eles perderiam seus titulos ");
			break;
		case 7:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"de nobres para cobrir o ocorrido e ganhariam novas posicoes dentro do reino. Robin ficou ");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"extremamente irritado com isso mesmo ainda sendo uma crianca,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"por achar isso uma desonra enorme com o nome de sua familia,"); 
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1," a familia Roths,porehm por estar diante do rei ");
			break;
		case 8:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"ele segurou o seu odio imenso, ja Tulius esbanjava de nenhuma reacao sentimental eminente");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"e assim foi feito. Seu tio Tulius agora se tornara General");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Gerald e Robin agora se passaria a chamar Carlos,");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"onde poderia escolher algo a seguir assim que estivesse mais velho.");
			break;
		case 9:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Ao chegar a sua nova residencia temporaria dada pelo rei, Robin surta com o  seu tio,"); 
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"seu orgulho estava ferido,ele acreditava ser muito superior a tudo isso que estava");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"passando e comeca a gritar descontroladamente.");
			break;
		case 10:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Robin: Voce nao FEZ NADA TIO.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"O QUE VAMOS FAZER? O DIGA-ME O QUE VAMOS FAZER?");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Robin ficou impressionado, pois o seu tio pela primeira vez faz uma expressao de puro odio"); 
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"onde ele nunca viu em sua vida.");
			break;
		case 11:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Tulius: Calma meu sobrinho nos ainda teremos nossa vinganca...");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"entao eles planejam juntos, Tulius pretende aceitar de bom grado a decisao do rei so para");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"crescer dentro do exercito, consequentemente,");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"conseguindo influencia e poder suficiente para se virar contra o rei e tomar o seu poder,");
			break;
		case 12:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"ja Robin diz que ira entrar para o campo de guerreiros");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"para se tornar o soldado perfeito e assassinar o rei.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Assim Robin entra no campo de guerreiro mascarando os seus sentimentos e");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"fingindo ser alguem que ele nao e quando na verdade so queria");
			break;
		case 13:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"provar para todos aqueles outros ali que ele era superior,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"mas tudo isso muda quando voce Aaron apareceu e consegue tanto destaque quanto");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Robin que agora e conhecido como Carlos,");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"entao ele se enfurece cada vez mais, mas nao pode demonstrar isso.");
			break;
		case 14:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Logo, apenas tenta reconhecer o seu \"inimigo\" e comeca a aproximar-se de voce apenas ");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"para saber suas fraquezas e usa-las contra voce mesmo, conversando com seu tio agora chamado");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"de General Gerald para dar exercicios cada vez mais severos a seu novo amigo ate que um dia");
			break;
		case 15:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Robin pediu para duelar com seu amigo/inimigo porque nao aguentava mais pensar na ideia de");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"que ele poderia ser o melhor do que ele e ao perder viu seu ego ser massacrado.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Ele nao poderia deixar isso barato, entao pediu para que o ");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"general lhe desse uma prova que seria impossivel ele");
			break;
		case 16:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"passar e se tornar um guerreiro, tarefa essa que seria derrotar o proprio general.");	
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Ao Aaron obter exito novamente em derrotar o general a inveja de Robin so");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"cresce cada vez mais ele tinha que ser o melhor porque ele sabia");
			break;
		case 17:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"que era o melhor ficando cada vez mais paranoico, ele quer superar seu rival a qualquer");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"custo, entao da a ideia para que Eddie duele com seu rival para poder mata-lo enquanto eles");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"duelam usando sua habilidade com flechas desconhecida por seus amigos, no qual ele aprendeu");
			break;
		case 18:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"com sua familia nobre quando era crianca e uma flecha que pertencia ao Eddie,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"ja que Aaron estaria totalmente concentrado no Eddie e nao perceberia a flecha.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Assim matando-o e culpando o Eddie no processo,");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"o general daria todo o apoio a Robin e condenaria o Eddie por assassinato de seu");
			break;
		case 19:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"parceiro de guerra. Todavia, algo o impede de fazer isso...");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"O Carlos, essa personalidade que ele construiu em si mesmo por todo esse tempo,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1," que apesar de todo seu odio ele nao conseguiria ter coragem para matar o seu amigo");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1," com suas proprias maos desistindo assim da ideia e apenas os deixando");
			break;
		case 20:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"lutarem Apos hesitar em sua acao Robin nao consegue dormir,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"criando outro plano para livrar-se dessa pedra em seu caminho de uma vez por todas.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Os lideres de grupo eram nomeados por indicacoes dos proprios soldados entao ele");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"conversa com seu tio sobre isso e conversa com todos os soldados");
			break;
		case 21:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"usando o carisma de seu personagem, O Carlos para convencer a todos de que o jogador era");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"perfeito para o cargo de lideranca de um grupo e assim aconteceu... voce foi indicado para lider");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"com uma missao falsa a mando do General Gerald a pedido de seu amigo Carlos indo entao para");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"a morte certa no bosque das almas.");
			break;
		case 22:
		draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Aaron:nao,isso nao pode estar acontecendo.Deve ser algum engano,O Carlos e meu amigo ele nunca...");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Rei Datrak:e a verdade meu caro, admito que me sensibilizei com sua situa��o e ajudarei em sua");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"jornada, apos nossa batalha sinto a minha vida esvaziando-se do meu corpo, entao aceite a chama");
			break;
		case 23:
			draw_sprite(buffer ,p2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"do meu espirito em voce assim tendo o poder que precisa para a sua vinganca.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron:Eu agradeco pela sua ajuda Rei Datrak.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"voce recebeu o espirito do Rei Datrak.");
			break;
		case 24:
draw_sprite(buffer ,p1 , 16, 18);
		//////aqui
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Apos receber o espirito do Rei Datrak fui teletransportado");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"pela ultima vez e dessa vez era o unico lugar que eu precisava...Midland.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Entro na cidade e tudo esta um caos a cidade esta em alerta a um ataque ao rei destruido, todos");
			break;
		case 25:
		draw_sprite(buffer ,p1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"ficam espantados ao me verem nao so por estar vivo, mas tambehm pela minha aparencia.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Eu era uma pessoa totalmente diferente do que ja fui e muito mais poderoso tambehm,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"ao entrar no reino uma multidao enorme me segue e sou cercado por perguntas");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1," de meus companheiros, pergunto-os onde esta Eddie");
			break;
		case 26:
		draw_sprite(buffer ,p1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"e eles dizem que ele morreu em batalha, meu odio cresce mais uma vez e pergunto");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"onde esta Carlos? E eles me dizem que ele esta com o rei,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"continuo caminhando e vou ate a porta do palacio real,");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"onde varios soldados tentam me parar e com apenas com minha presenca todos eles");
			break;
		case 27:
		draw_sprite(buffer ,p1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"caem ao chao, eu era outra coisa um ser poderoso de mais para meros soldados me atacarem.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Abro as portas do palacio com apenas o olhar e adentro o grande salao e presencio pessoalmente");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"um combate entre os soldados traidores liderados por Gerald contra os soldados leais ao rei.");
			break;
		case 28:
		draw_sprite(buffer ,p1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Assim, entendo porque estavam guardando aquele palacio a sete chaves.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Derroto todos os soldados traidores facilmente e todos eles come�am a se perguntar que soldado");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"era aquele e se ele ainda era humano. Vejo que o Carlos estava batalhando contra o Rei Raphael");
			break;
		case 29:
		draw_sprite(buffer ,p1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"entao me apresso e derroto todos ali em um piscar de olhos o Gerald foge,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"mas nao era com ele que eu estava preocupado todo o meu odio estava ligado diretamente");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"ao mandante de todo o meu sofrimento.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Aaron:CARLOS, finalmente o encontrei meu velho amigo ou devo chama-lo de Robin?");
			break;
		case 30:
		draw_sprite(buffer ,p1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Carlos: O QUE? Como sabe meu verdadeiro nome? Deixa isso nao importa.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Carlos: Como voce ainda esta vivo? Eu me certifiquei de que acabaria com voce para sempre.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Aaron:Que pena, porque estou aqui para acabar com sua vida.");
			break;
		case 31:
		draw_sprite(buffer ,p1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Carlos entao pegou o rei e botou uma espada perto de seu pescoco.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Carlos: Ele e meu refem.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"entao meus olhos comecaram a emitir uma luz negra ");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"na intensidade de uma luz lunar que reflete nas aguas.");
			break;
		case 32:
		draw_sprite(buffer ,p1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Todos que estavam no salao estavam assustados com que presenciavam.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Carlos: O QUE e ISSO? voce e UM DEMONIO QUE VEIO ME ASSOMBRAR?");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Aaron:Carlos...Eu nao sou a mesma pessoa que tentou matar.");
			break;
		case 33:
		draw_sprite(buffer ,p1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Aaron:Meu nome e: Aaron Datrak, o ultimo senhor obscuro");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Carlos: nao e possivel... voce mesmo depois de morto. CONTINUA MELHOR DO QUE EU? ARG");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"nao consigo acreditar voce se tornou a fusao de dois espiritos!");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Carlos saiu correndo com sua espada");
			break;
		case 34:
		draw_sprite(buffer ,p1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"ate a minha direcao e caiu de joelhos chorando como uma crianca.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Carlos: Eu queria ser o melhor Aaran, so isso.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"No entanto, desde que voce me chegou nao sou mais o mesmo voce se tornou minha primeira");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"amizade e mesmo assim eu tentei mata-lo, por favor,");
			break;
		case 35:
		draw_sprite(buffer ,p1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"perdoe-me, eu nunca fui a melhor pessoa,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"muito pelo contrario eu sou podre, mas voce sempre foi melhor do que isso.");
			break;
		case 36:
		draw_sprite(buffer ,p1 , 16, 18);
			draw_sprite(buffer, seta, posicao_seta_x,posicao_seta_y[posicao_menu]);
            if(key[KEY_UP]){if(posicao_menu == 0){}else{posicao_menu -= 1;}}
		    if(key[KEY_DOWN]){if(posicao_menu == 1){}else{posicao_menu += 1;}}
            if(key[KEY_A]){menu = posicao_menu; passar_historia +=1;}
            textprintf_centre_ex(buffer, font, 400, 350, 0, -1,"Matar Carlos?");
            textprintf_centre_ex(buffer, font, 400, 400, 0, -1,"Sim.");
            textprintf_centre_ex(buffer, font, 400, 450, 0, -1,"Nao.");
            textprintf_centre_ex(buffer, font, 400, 500, 0, -1,"Precione A para continuar");
			break;
	//matar carlos
		}

        if(key[KEY_SPACE]){if(passar_historia < 36){passar_historia += 1;}}
        draw_sprite(screen, buffer, 0, 0);
		rest(130);
		clear(buffer);

    }
    if(menu == 0){escolha = 1;}
    if(menu == 1){escolha = 2;}
       
    return escolha; 
}
