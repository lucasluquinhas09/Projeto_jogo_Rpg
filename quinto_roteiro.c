#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int quinto_roteiro(){
	BITMAP *i1,*i2;
    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {400, 450};
	i1 = load_bitmap("imgs/guerreiro.bmp", NULL);
	i2 = load_bitmap("imgs/floresta.bmp", NULL);

    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 30){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);

        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
		draw_sprite(buffer ,i1 , 16, 18);
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Eddie: Nossa! Voce melhorou muito.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"O importante e sempre dar o seu melhor.");
			break;
        case 2:
		draw_sprite(buffer ,i1 , 16, 18);
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Eddie: Sempre admirei sua humildade.");
		    break;
        case 3:
		draw_sprite(buffer ,i1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Assim que nossa prova de fogo finalmente havia acabado,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"fomos considerados verdadeiros guerreiros.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Estavamos felizes, tudo nas nossas vidas ia tao bem; nem parecia que eu era uma crianca");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"desolada ha anos; tudo estava perfeito, pelo menos eu pensava que estava...");
			break;
		case 4:
		draw_sprite(buffer ,i1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Depois de toda a burocracia necessaria para a admissao de soldados,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"foram divididos os primeiros grupos,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"e suas primeiras missoes (ainda que, por enquanto, nao saibamos quais eram).");
			break;
		case 5:
		draw_sprite(buffer ,i1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Para entrar em um grupo basta apenas passar no exame,");
			textprintf_centre_ex(buffer, f33, 400, 425, 0, -1,"mas para ser um lider de grupo, e necessario");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"de uma indicacao dos proprios soldados.");
			textprintf_centre_ex(buffer, f33, 400, 475, 0, -1,"Acredito que o Carlos sera um lider de grupo, independent");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"e de onde ficar. Eis chegado o dia para a divisao de grupos.");
			textprintf_centre_ex(buffer, f33, 400, 525, 0, -1,"Eu e meus amigos chegamos ao lugar");
			break;
		case 6:
		draw_sprite(buffer ,i1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"principal onde era feita a divisao e nomeacao de lideres.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"General Gerald: Atencao soldados!");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Chegou a hora dos lideres de grupos serem chamados aqui na frente.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Carlos se aproxima do meu ouvido e diz: falei para todo mundo te indicar como lider. ");
			break;
		case 7:
		draw_sprite(buffer ,i1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Voce ficou maluco?");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Carlos: E que eu sempre achei que voce seria um bom lider.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Aaron: Pensou errado, meu deus! Mas o que esta feito, esta feito!");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Carlos: Esse e o espirito!");
			break;
		case 8:
		draw_sprite(buffer ,i1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Eddie reage mostrando que estava ouvindo a conversa e diz: relaxa eu tambem te indiquei,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"agora so aceita e de seu melhor como lider.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Aaron: Vou tentar.");
			break;
		case 9:
		draw_sprite(buffer ,i1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"O General continua lendo a lista de indicados, e finalmente cita o meu nome.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Sou recebido com por aplausos excitantes,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"vou ate a frente do general e fico la em pe juntamente com os outros lideres.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Seguidamente o Carlos tambem e chamado o que nao me impressiona,");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"consequentemente, os grupos foram");
			break;
		case 10:
		draw_sprite(buffer ,i1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"divididos e nos tres pela primeira vez em anos, estamos separados.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Eu e o Carlos como lideres de grupos de soldados distintos");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"e o Eddie apenas como soldado em um grupo diferente do nosso.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Somos deslocados para uma reuniao individual ");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"para cada grupo onde as nossas primeiras missoes foram dadas.");
			break;
		case 11:
		draw_sprite(buffer ,i1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Cada missao era dita e ordenada pelo General Gerald,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"para nossos coroneis, que repassavam essa informacao para nos.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"A missao que me foi dada era de fundo investigativa, deveria ser realizada");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"na noite seguinte, seu objetivo era ir ate o fundo de um bosque");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"para eliminar uma pequena quantidade mortos-vivos de baixo nivel que haviam por la.");
			break;
		case 12:
		draw_sprite(buffer ,i1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Saindo do local vou direto para o meu dormitorio onde encontro Eddie e Carlos. ");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Comentamos que amanha nossas vidas comecam de verdade e que estavamos ansiosos.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Ficamos aquela noite comemorando e conversando, ");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"pois nao nos veriamos mais frequentemente como no campo de treinamento.");
			break;
		case 13:
		draw_sprite(buffer ,i1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Em algum momento da nossa conversa Eddie nos diz");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"para fazermos um pacto que nenhum de nos voltariamos de suas missoes,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"desonrados, pois em Midland se um lider volta sem o seu grupo para");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"o reino, e automaticamente considerado um soldado sem honra,");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1," perdendo todo o seu prestigio e respeito.");
			break;
		case 14:
		draw_sprite(buffer ,i1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Fazemos o pacto e prometemos voltar com sucesso e nos despedimos.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Finalmente chega a hora de ir ate a");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"missao, guio meu grupo ate o local designado,");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"o meu grupo confiado na minha lideranca possui cinco membros. ");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"O Robert que era um mago, Alexandre um guerreiro, os irmaos Vicent e Jeffrey");

			break;
		case 15:
		draw_sprite(buffer ,i1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"que eram arqueiros, e, claro, eu.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Era uma noite fria e densa,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"a Lua brilhava em um tom prata em cima das nossas cabecas, o clima nao");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"era dos melhores para pessoas sairem por ai.");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"Estavamos em uma carruagem meio velha, apesar de ja");
			break;
		case 16:
		draw_sprite(buffer ,i1 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"estar um pouco usada era de altissima qualidade,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"mal dava para perceber quando passavamos por cima de um buraco.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"A medida que nos aproximavamos eu sentia um aperto inexplicavel no meu coracao,");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"sentia que o nosso local de destino era");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"um lugar que deveriamos manter distancia, mas aquela era");
			break;
		case 17:
		//aqui
		draw_sprite(buffer ,i2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"nossa missao e tinhamos que cumprir a qualquer custo.(A carruagem para)");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Cocheiro: So posso levar voces ate aqui. Boa noite e boa sorte, soldados.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Vejo em seu rosto uma expressao de pavor.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1," Estavamos em um bosque, as arvores eram tortas e");
			break;
		case 18:
		draw_sprite(buffer ,i2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"possuiam poucas folhas, uma escuridao que tomava");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"conta do local o que levava a minha mente a criar varias perguntas.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Estamos sozinhos? uma criatura desconhecida vive em meio as arvores?");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"O arbusto se mexeu? A magia de iluminacao do Robert, me tirou do meu transe.");
			break;
		case 19:
		draw_sprite(buffer ,i2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Uma meia esfera de luz, se formou ao nosso redor, dentro dela tudo era iluminado.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Robert: Agradecemos por nos deixar ate aqui.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Alexandre: Valeu ai senhor a gente se ve por ai.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Vicent e Jeffrey: (rindo do Alexandre)");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"Robert era um cara muito formal a sua educacao e respeito");
			break;
		case 20:
		draw_sprite(buffer ,i2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"com os outros sempre foi muito elogiada,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"ja o Alexandre era o brincalhao do grupo,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"os irmaos arqueiros Vicent e Jeffrey nao eram de falar muito e");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"apenas riam das brincadeiras e trocadilhos que o Alexandre fazia,");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"mesmo que muitos deles eram sem graca.");
			break;
		case 21:
		draw_sprite(buffer ,i2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Comecamos chegamos perto do local da nossa missao.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Alexandre: Tenho que mijar.");
			textprintf_centre_ex(buffer, f33, 400, 425, 0, -1,"Robert: Logo agora? ");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Alexandre: Sim, se nao eu vou explodir aqui.");
			textprintf_centre_ex(buffer, f33, 400, 475, 0, -1,"Aaron: Pode ir.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Alexandre: Obrigado LIDER vou ali naquela arvore e ja volto.");
			break;
		case 22:
		draw_sprite(buffer ,i2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Robert: Esse cara nao tem jeito.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Vicent: Mas e isso que o faz divertido.");
			textprintf_centre_ex(buffer, f33, 400, 425, 0, -1,"Robert: Olha so, entao voce fala.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Vicent: So quando tenho vontade.");
			textprintf_centre_ex(buffer, f33, 400, 475, 0, -1,"Robert: E voce Jeffrey? Nao vai dizer nada?");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Jeffrey: (apenas vira seu rosto para o outro lado e ignora)...(som de Gritos)");
			break;
		case 23:
		draw_sprite(buffer ,i2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Robert: QUE MERDA FOI ISSO? Aaron: Nao pode ser...");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Entramos em desespero ao ouvir o grito e corremos aonde Alexandre tinha ido.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Demos apenas alguns passos e o encontramos caido no chao gritando.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Sua mao direita havia sido");
			break;
		case 24:
		draw_sprite(buffer ,i2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"arrancada como se algum animal tivesse a estracalha,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"o sangue jorrava do local onde costumava ficar");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"sua mao, na sua calca comecou a se formar uma bolha d'agua");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Quando nos aproximamos dele, comecamos a");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"escutar barulhos estranhos (mesmo com os gritos de nosso companheiro).");
			break;
		case 25:
		draw_sprite(buffer ,i2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"A parentava ser passos de uma criatura,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1," mas nao tao frequentes quanto o de um quadrupede,");
			textprintf_centre_ex(buffer, f33, 400, 425, 0, -1,"o quer que seja andava com duas pernas... talvez tres.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Era um humano? pouco provavel, mas e a ");
			textprintf_centre_ex(buffer, f33, 400, 475, 0, -1,"unica criatura que eu conheco,   ");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"se nao fosse isso, significava que estavamos enfrentando");
			break;
		case 26:
		draw_sprite(buffer ,i2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"algo desconhecido.Formamos um circulo e mantivemos posicao.");
			textprintf_centre_ex(buffer, f33, 400, 425, 0, -1,"O som comecou a se aproximar.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"O suor comecou a escorrer pelas minhas costas quando");
			textprintf_centre_ex(buffer, f33, 400, 475, 0, -1,"eu finalmente vi a criatura.");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"A criatura foi iluminada,");
			textprintf_centre_ex(buffer, f33, 400, 525, 0, -1,"revelando uma besta enorme que possuia dois chifres,um deles estava quebrado.");
			break;
		case 27:
		draw_sprite(buffer ,i2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Ela era muito alta, nunca havia visto algum ser vivo com tamanha altura,");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"devia ter cerca de 5 metros.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Alexandre: PORQUE NAO VIERAM ANTES (sons de dor)");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"eu estou aqui lutando com essa criatura a muito");
			break;
		case 28:
		draw_sprite(buffer ,i2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"tempo praticamente do lado de voces e voces so vieram agora.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"A criatura comecou emitir um som que soava terrivelmente como uma risada.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Ele para e meu corpo gela, vamos ter que enfrentar aquilo?");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"Ele urra e nesse instante, centenas de espiritos malignos saem da terra");
			textprintf_centre_ex(buffer, f33, 400, 550, 0, -1,"e avan�am em nossa direcao.");
			break;
		case 29:
		draw_sprite(buffer ,i2 , 16, 18);
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Sim, vamos ter que enfrentar isso.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Aaron: Robert ajude o Alexandre a parar o sangramento com magia de cura,");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Vicent e Jeffrey protejam-nos desses espiritos");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"enquanto eu luto contra essa criatura.");
			break;
	//terceira batalha
		}

        if(key[KEY_SPACE]){if(passar_historia < 30){passar_historia += 1;}}
        draw_sprite(screen, buffer, 0, 0);
		rest(130);
		clear(buffer);

    }
    if(menu == 0){escolha = 1;}
    if(menu == 1){escolha = 2;}
       
    return escolha; 
}
