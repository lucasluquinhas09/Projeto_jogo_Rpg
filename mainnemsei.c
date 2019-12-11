#include <allegro.h>
#include <string.h>
#include <locale.h>

volatile int exit_program;
void fecha_programa() { exit_program = TRUE; }
END_OF_FUNCTION(fecha_programa)

volatile int ticks;
void tick_counter() { ticks++; }
END_OF_FUNCTION(tick_counter)

enum{ SPLASHSCREEN, TITLESCREEN, MAINMENU, GAMESCREEN };
int screen_state;// PARA AS TELAS

BITMAP *buffer, *logo_menu, *imagem, *seta ,*imagem_inicio, *narracao_inicio, *imagem_one,*imagem_gruta; // PARA VARIAS IMAGENS

//FONT *super; // variavel da fonte

SAMPLE *som_menu, *som_teste; // variavel do som

void init()
{
  allegro_init();
  install_timer();
  install_keyboard();
  set_color_depth(32);
  install_sound(DIGI_AUTODETECT, MIDI_AUTODETECT, NULL); // PARA PEGAR SOM
  set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0);
  set_window_title("title Four ways");
  
    logo_menu   = load_bitmap("img/imagem_menu.bmp", NULL); // aqui vai carregar o plano de fundo do menu 
    
    narracao_inicio = load_bitmap("img/narracao.bmp", NULL);
  //  imagem_inicio = load_bitmap("bmp/narra��o-inicial.bmp", NULL);
  
	imagem_one = load_bitmap("img/imagem_menu_.bmp", NULL);
   
    imagem_gruta = load_bitmap("img/gruta_do_labirinto.bmp", NULL);
  //  seta = load_bitmap("seta.bmp", NULL);
	
	//super = load_font("super.pcx", NULL, NULL); // carregar fonte
	
	som_menu = load_sample("sons/som_menu.wav"); // carregar o som
	
	som_teste = load_sample("sons/bosque_das_almas.wav");
	
	seta = load_bitmap("img/seta.bmp", NULL);
	
	
	play_sample(som_menu, 255,128,1000,0); // comeca o som
	
  exit_program = FALSE;
  LOCK_FUNCTION(fecha_programa);
  LOCK_VARIABLE(exit_program);
  set_close_button_callback(fecha_programa);

  ticks = 0;
  LOCK_FUNCTION(tick_counter);
  LOCK_VARIABLE(ticks);
  install_int_ex(tick_counter, BPS_TO_TIMER(60));

  screen_state = TITLESCREEN;
  
}


void mainmenu()
{
  int exit_screen = FALSE;
  
  	short int menu_seleciona = 3, posicao_menu_batalha = 0;
	//a pocicao exata da seta
	short int posicao_seta_x = 490 , posicao_seta_y[2]= {400, 450};
	

  char jogador;
struct historiaa
    {
        char historia[300];
    };
    struct historiaa historia[5000];

    strcpy(historia[0].historia,"Este jogo � baseado em a��es e escolhas,para passar a historia deve apertar espaco");
	strcpy(historia[1].historia,"Lembre-se suas escolhas possuem consequ�ncias e essas consequ�ncias ditam o rumo da hist�ria...");

	strcpy(historia[2].historia,"Em um reino distante chamado Midland no ano de 1488");
	strcpy(historia[3].historia,"onde uma guerra entre os vivos liderados pelo rei Raphael terceiro e");
	strcpy(historia[4].historia,"os mortos do ex�rcito do rei destru�do...");
	strcpy(historia[5].historia,"Vivia uma pessoa onde seus sonhos eram o sin�nimo de imposs�vel");
	strcpy(historia[6].historia,"ao relaciona-los com a palavra realizar e esta pessoa sou eu.");
	strcpy(historia[7].historia,"Meu nome �...");
	strcpy(historia[8].historia,"Meu nome � Aaron e em nenhum momento eu tive uma vida est�vel.");
	strcpy(historia[9].historia,"Ap�s o Rei Arthur, conhecido como Arthur o destruidor");
	strcpy(historia[10].historia," sacrificar todo seu povo em um ritual antigo paraadquirir mais poder,");
	strcpy(historia[11].historia,"ele foi dominado por for�as ocultas.Agora sua gan�ncia n�o � mais por poder,");
	strcpy(historia[12].historia,"mas sim pela morte, ele tem um �nico objetivo:Exterminar todos os vivos.");
	strcpy(historia[13].historia,"Seu Ex�rcito maldito, � formado pelas pessoas (ou o que costumavam ser pessoas) que ele matou.");
	strcpy(historia[14].historia,"Segundo alguns boatos que correm pelas ruas,");
	strcpy(historia[15].historia,"eles seriam criaturas bem parecidas com os dem�nios de Azuguht.");
	strcpy(historia[16].historia,"As consequ�ncias desses seus atos, come�ou a assolar v�rios reinos,");
	strcpy(historia[16].historia,"dentre eles estavam o que eu vivo.Caos e desespero se tornaram algo comum,");
	strcpy(historia[17].historia,"e a fome � a �nica certeza que temos.");
	strcpy(historia[18].historia,"E acredite em mim, eu senti na pele tudo isso,principalmente por causa dos meus pais que,");
	strcpy(historia[19].historia,"(nunca foram exemplos a serem seguidos)me usaram como mula quando eu tinha apenas 8 anos");
	strcpy(historia[20].historia,"obrigando-me a fazer servi�os pesados e desumanos importando-se apenas com sua sobreviv�ncia");
	strcpy(historia[21].historia,"e n�o com a minha. N�o demorou muito at� um guarda real descobrir o que estava acontecendo");
	strcpy(historia[22].historia,"e chegar a minha casa perguntando se eu queria me livrar deste sofrimento...");
	//primeira escolha tem que estar aqui 
	strcpy(historia[23].historia,"Voc� aceita ir com o guarda?(1) Sim,eu aceito,por favor livre-me deste tormento.(2) N�o,apesar de tudo eu sei que no fundo eles me amam.");
	//
	strcpy(historia[24].historia,"Os mortos se aproximavam.Com muito pesar e l�grimas eu disse para");
    strcpy(historia[24].historia,"o Jeffrey:n�s teremos a nossa vingan�a. Come�o a correr o mais r�pido que o posso.");
	strcpy(historia[25].historia,"Eu olho pra tr�s e vejo-os arrancando um peda�o dele a cada minuto,mas ele n�o para de lutar ");
	strcpy(historia[26].historia,"com o seu arco em m�os ele foi um grande soldado at� o �ltimo momento de sua vida.");
	strcpy(historia[27].historia,"Acordei em um lugar que se parecia um celeiro, o sol entrava pela entrada superior,");
	strcpy(historia[28].historia,"me fazendo pensar quanto tempo eu dormir ? Estou enfaixado.");
	strcpy(historia[29].historia,"Lembro que corri at� desmaiar; meu corpo est� cansado e n�o tinha a menor ideia de onde estava.");
	strcpy(historia[30].historia,"Um velho abre a porta do celeiro e diz: Ora voc� finalmente acordou.");
	strcpy(historia[31].historia,"Aaron:Quem � o senhor e o que estou fazendo aqui?");
	strcpy(historia[32].historia,"Velho:Um comerciante o encontrou todo ensanguentado,em suas caminhadas para vender seus produtos");
	strcpy(historia[33].historia,"como ele me conhecia,o trouxe at� mim para salvar a sua vida,e eu ");
	strcpy(historia[34].historia,"n�o pensei duas vezes em salvar a vida de um soldado que luta contra o ex�rcito do rei destru�do.");
	strcpy(historia[35].historia,"Aaron: Agrade�o pela sua hospitalidade.");
	strcpy(historia[36].historia,"Velho:N�o h� de que jovem;meu filho j� foi do ex�rcito e este s�mbolo que voc� carrega em seu");
	strcpy(historia[37].historia,"bra�o pertence aos soldados rec�m-formados.");
	strcpy(historia[38].historia,"O que algu�m da sua patente fazia em um lugar t�o perigoso ?");
	strcpy(historia[39].historia,"Aaron:Foi uma armadilha para o meu grupo.");
	strcpy(historia[40].historia,"Velho: Isso � muito triste jovem... Sinto lhe informar que o lugar onde voc� estava se chama");
	//
	//alma para baixo
	//
	strcpy(historia[41].historia,"O bosque das almas, um acampamento de soldados do Rei destru�do.");
	strcpy(historia[42].historia,"A pessoa que armou isso para voc� com toda certeza n�o o queria vivo.");	
	strcpy(historia[43].historia,"Aaron: Aquele desgra�ado...Foi ele, ele quem passa as miss�es. O General Gerald, ele tramou isso");
	strcpy(historia[44].historia,"contra mim,mas por que ele faria isso ? Seria porque o derrotei mesmo ele sendo um veterano ?");
	strcpy(historia[45].historia,"Isso n�o faz sentido, por�m independente do motivo n�o voltarei para Midland desonrado,");
	strcpy(historia[46].historia,"pelo contr�rio irei descobrir a verdade e a partir dela retornarei para meu lar desmascarando-o");
	strcpy(historia[47].historia,"e tomando a minha honra com a vingan�a nas m�os, no qual usarei tais m�os para me vingar do");
	strcpy(historia[48].historia,"Velho: Palavras fortes, mas voc� tem for�a igual a suas palavras? Creio que n�o, mas n�o se");
	strcpy(historia[49].historia,"preocupe eu tenho algo que pode lhe ajudar,siga-me.");
	strcpy(historia[50].historia,"Segui ele at� a casa, onde mostrara um item de valor inestim�vel.");
	strcpy(historia[51].historia,"Velho: Este � o antigo armamento do meu filho. Fique com ele, pois com toda certeza ser� mais");
	strcpy(historia[52].historia,"importante em sua jornada, afinal meu filho j� est� morto e n�o precisa mais disso.");
	strcpy(historia[53].historia,"Voc� conseguiu o item X.");
	strcpy(historia[54].historia,"Velho: No entanto, aviso-lhe para conseguir o poder que deseja n�o ser� nada f�cil.");
	strcpy(historia[55].historia,"Aaron: Diga-me qual seria o caminho mais r�pido para conseguir tal poder?");
	strcpy(historia[56].historia,"Velho: Existe uma lenda chamada Os 4 caminhos.");
	strcpy(historia[57].historia,"Aaron:E o que seriam estes 4 caminhos?");
	strcpy(historia[58].historia,"Velho: H� muito tempo, em um reino distante houve um rei que foi disposto ao trono gra�as a sua");
	strcpy(historia[59].historia,"que foi disposto ao trono gra�as a sua habilidade");
	strcpy(historia[60].historia,"surpreendente de manipula��o m�gica, sendo assim o primeiro e �nico Rei mago de toda hist�ria.");
	strcpy(historia[61].historia,"Com seus poderes ele foi capaz de lutar contra o maior mal jamais enfrentado em");
	strcpy(historia[62].historia,"nosso mundo antes do Rei destru�do, os datraks ou como s�o mais conhecidos os senhores obscuros");
	strcpy(historia[63].historia,"Aaron:Senhores obscuros?Eu pensei que isso s� fosse uma lenda.");
	strcpy(historia[64].historia,"Velho:A fam�lia real tenta esconder isto h� anos,pois temem o conhecimento que se pode adquirir");
	strcpy(historia[65].historia,"a partir dos caminhos a minha fam�lia h� gera��es guarda este segredo, pois todos n�s");
	strcpy(historia[66].historia,"�ramos nobres at� o meu bisav� ter tra�do o rei e ser sentenciado � morte,com isso a nossa");
	strcpy(historia[67].historia,"fam�lia fugiu mudando o seu nome desapegando do passado vivendo como camponeses at� os dias atuais.");
	strcpy(historia[68].historia,"Aaron:Isso � realmente muita informa��o para minha cabe�a,vamos apenas nos focar nos caminhos.");
	strcpy(historia[69].historia,"Velho: Voltando a hist�ria sobre o rei mago, ent�o ele selou o poder dos Datraks em 4 dimens�es");
	strcpy(historia[70].historia,"diferentes dentro de uma caverna trancando a entrada para este local em uma chave.");
	strcpy(historia[71].historia,"Aaron:E onde encontro esta chave?");
	strcpy(historia[72].historia,"Velho: Voc� deve ir � montanha mais alta que existe ao norte e l� no topo do mundo voc� ver�");
	strcpy(historia[73].historia,"um labirinto onde monstros guardam o local, se voc� for forte o suficiente para enfrentar");
	strcpy(historia[74].historia,"todos os desafios do labirinto conseguir� a chave necess�ria para adentrar os 4 caminhos e");
	strcpy(historia[75].historia,"posteriormente enfrentar os senhores obscuros, conseguindo assim a for�a que deseja.");
	strcpy(historia[76].historia,"AaronEsta � minha �ltima esperan�a e irei agarra-la com todas as for�as. Agrade�o por ter");
	strcpy(historia[77].historia,"me ajudado a minha vingan�a ser� � for�a de vontade necess�ria para enfrentar todos os desafios.");
	strcpy(historia[78].historia,"Saio daquele lugar e agrade�o ao velho por seu presente e hist�ria. Come�o a minha jornada at� o");
	strcpy(historia[79].historia,"labirinto para a chave dos 4 caminhos. S�o longos dias de caminhada e a cada vez que o tempo");
	strcpy(historia[80].historia,"passa o meu �dio s� cresce, decido acampar e olho para o c�u, Robert, Alexandre, Jeffrey, Vicent,");
	strcpy(historia[81].historia," sinto falta de voc�s. A vida muitas vezes n�o � justa, principalmente, se for a minha.");
	strcpy(historia[82].historia,"mas o carisma de voc�s me inspirava a ser o melhor l�der poss�vel, por�m isso est� no passado");
	strcpy(historia[83].historia,"Conhecemo-nos em t�o pouco tempo, finalmente chego � montanha e come�o a escala-la.");
	strcpy(historia[84].historia,"Ao chegar ao topo da montanha encontro finalmente a porta do labirinto deparando-me");
	strcpy(historia[85].historia,"com um trol na recep��o.");
	//come�a a batalha 6 
	strcpy(historia[86].historia,"Entro no labirinto, era um lugar estranho como nunca");
	strcpy(historia[87].historia,"tinha visto antes era como um interior de uma gruta, onde um passo em falso a morte,");
	strcpy(historia[88].historia,"em meio a esta situa��o eu pensava que estaria ofegante e ansioso, mas muito pelo contr�rio me");
	strcpy(historia[89].historia,"sentia cheio de �dio e de for�a, uma vez que n�o tinha mais nada a perder. Em sua entrada estava");
	strcpy(historia[90].historia,"escrito na l�ngua dos midianitas, a l�ngua oficial de Midland a frase olhos no c�u,");
	strcpy(historia[91].historia," perdi��o no inferno n�o fa�o a menor ideia do que isso significa e apenas sigo o caminho.");
	strcpy(historia[92].historia,"Estou caminhando h� cinco minutos e nenhum perigo me foi apresentado,");
	strcpy(historia[93].historia,"acho estranho de que nenhuma forma algo me atingiu ou tentou me matar.Continuo caminhando,");
	strcpy(historia[94].historia,"mas absolutamente nada acontece, n�o sabia o que mais me chamava aten��o ofato do labirinto");
	strcpy(historia[95].historia,"n�o ser um escuro completo mesmo n�o possuindo algum tipo de ilumina��o. Assim, podendo,");
	strcpy(historia[96].historia,"enxergar normalmente ou o fato de que minha caminhada parecia algo sem fim, at� que se passam mais");
	strcpy(historia[97].historia,"10 minutos e come�o a pensar na frase que havia na entrada olhos no c�u, perdi��o no inferno,");
	strcpy(historia[98].historia,"tudo ent�o come�a a fazer sentido os olhos � o meio de entrada, o c�u � o caminho certo,");
	strcpy(historia[99].historia,"Come�o a caminhar com meus olhos para cima onde s� havia completa por�m estou caminhando");
	strcpy(historia[100].historia,"para o lugar errado entrando assim em perdi��o. escurid�o e uma criatura pula em cima de mim");
	strcpy(historia[101].historia,"com suas garrafas afiadas, ela tenta arrancar o meu pesco�o,");
	strcpy(historia[88].historia,"mas rapidamente consigo escapar de seu ataque, tendo apenas o meu bra�oarranhado no processo.");
	strcpy(historia[89].historia,"Aaron:N�o � poss�vel eu estar vendo isso, � uma harpia.");
	//come�a a batalha 7
	strcpy(historia[90].historia,"Finalmente a matei e posso seguir em frente com isso, continuo com meus olhos voltados aos c�us");
	strcpy(historia[91].historia,"esperando apenas esperando que tudo isso chegue ao fim, mas antes que eu pudesse pensar");
	strcpy(historia[92].historia,"em mais alguma coisa acabo caindo em um buraco profundo por n�o estar olhando por onde");
	strcpy(historia[93].historia,"ando. Levanto-me e vejo que estou cercado de goblins.");
	strcpy(historia[94].historia,"Aaron:Espero que estejam prontos para perderem suas vidas porque n�o estou pronto para abrir");
	strcpy(historia[94].historia,"m�o da minha sorriso ir�nico.");
	//come�a a batalha 8
	strcpy(historia[95].historia,"Mato e piso na cabe�a de cada goblin miser�vel que tentou acabar comigo e sigo minha jornada,");
	strcpy(historia[96].historia,"onde a adrenalina e a sede por vingan�a alimentavam-me de energia a cada momento e");
	strcpy(historia[97].historia,"com olhos voltados para cima encontro uma grande porta, onde uma voz misteriosa me diz");
	strcpy(historia[98].historia,"para apontar minhas m�os para o alto, rapidamente fiz o que ele pediu, pois meu");
	strcpy(historia[99].historia,"objetivo estava por tr�s daquela porta e eu faria qualquer coisa para atravessa-la.");
	strcpy(historia[100].historia,"Voz misteriosa:Vejo que suas m�os est�o sujas do sangue da harpia e dos goblins,");
	strcpy(historia[101].historia,"ent�o que assim seja. A porta come�a a se abrir...");
	strcpy(historia[102].historia,"Voz misteriosa:Seu novo desafio o espera,ap�s passar pelo apelo das mem�rias");
	strcpy(historia[103].historia,"o seu inimigo final o aguarda.");
	strcpy(historia[103].historia,"A voz some e eu atravesso o grande port�o, de alguma forma era como se eu estivesse em outro");
	strcpy(historia[104].historia,"lugar fora do real perguntava-me como podia haver um lugar t�o colossal dentro daquele labirinto.");
	strcpy(historia[105].historia,"Continuo andando at� que vejo uma crian�a correndo, fico assustado em como uma crian�a");
	strcpy(historia[106].historia,"poderia estar ali, penso que este lugar est� mexendo com minha cabe�a e tento ignora-la at�");
	strcpy(historia[107].historia,"que ela para e vem at� minha dire��o. No entanto algo surpreendente acontece.");
	strcpy(historia[108].historia,"Aaron:N�o pode ser, mas esta crian�a... Sou eu? ");
	strcpy(historia[109].historia,"Ela para na minha dire��o e eu digo para ela que n�o tenho tempo para jogos mortais e continuo");
	strcpy(historia[110].historia,"caminhando, at� que ela come�a a falar comigo.");
	strcpy(historia[111].historia,"Crian�a:Ol� Aaron como n�s crescemos n�o � mesmo?");
	strcpy(historia[112].historia,"Aaron:N�o somos iguais.Voc� � apenas mais um monstro deste lugar infernal, ent�o me deixe em paz.");
	strcpy(historia[113].historia,"Crian�a:Ora, como assim n�o somos iguais? Voc� � t�o podre quanto eu sou.");
	strcpy(historia[114].historia,"Aaron:O que quer dizer com isso?");
	strcpy(historia[115].historia,"Crian�a:(Risada ir�nica)");
	strcpy(historia[116].historia,"Crian�a:Ora Aaron para um pouco e pense no que voc� fez at� aqui.");
	strcpy(historia[116].historia,"Voc� realmente acredita que fez as decis�es certas?");
	strcpy(historia[117].historia,"Aaron:Claro que sim.");
	strcpy(historia[118].historia,"Crian�a: Tem certeza que seus ideais n�o se perderam no meio do caminho? (risadas)");
	strcpy(historia[119].historia,"Aaron:Como assim?");
	strcpy(historia[120].historia,"Crian�a: As mortes que voc� causou as amizades que voc� perdeu tudo");
	strcpy(historia[120].historia,"o que aconteceu at� aqui foi culpa sua.");
	strcpy(historia[121].historia,"Aaron:N�O,N�O FOI.");
	strcpy(historia[122].historia,"Crian�a:N�O?Vamos ao come�o,seus pais foram assassinados pelo rei e o que voc� fez?");
	strcpy(historia[122].historia,"N�o precisa responder que eu mesmo te digo NADA.");
	strcpy(historia[123].historia,"Aaron: N�o, isso n�o � justo eu me senti mal por eles.");
	strcpy(historia[124].historia,"Crian�a: Mas n�o suficiente a ponto de salva-los, voc� � um ser desprez�vel e ego�sta, sempre foi.");
	strcpy(historia[125].historia,"Aaron:Pare");
	strcpy(historia[126].historia,"Crian�a: Seus amigos Eddie e Carlos voc� os DECEPCIONOU");
	strcpy(historia[127].historia,"Aaron:N�o, tramaram contra mim.");
	strcpy(historia[128].historia,"Crian�a: Tramaram contra voc�? Ou foi VOC� quem matou seus companheiros em batalhas ?");
	strcpy(historia[128].historia,"J� parou para pensar nisso ?");
	strcpy(historia[129].historia,"Creio que n�o, pois seu ego�smo MAIS UMA VEZ FICOU NA FRENTE DE TUDO");
	strcpy(historia[130].historia,"colocando a culpa em traidor X  e Y ao inv�s de assumir que fracassou como l�der.");
	strcpy(historia[131].historia,"Aaron:N�o, N�O N�O PAREEE isso est� errado.");
	strcpy(historia[132].historia,"Crian�a: A �nica coisa errada aqui � voc�, voc� � a ma�a podre deste reino, o soldado perdido,");
	strcpy(historia[133].historia," desonrado, que p�em a culpa nos outros e n�o assume sua pr�pria natureza podre pisando tudo ");
	strcpy(historia[134].historia,"em seu caminho para obter sucesso. Voc� � p�ssimo,Aaron.");
	strcpy(historia[135].historia,"De repente todas as minhas lembran�as ruins vem a tona,fico de joelhos e come�o a gritar e");
	strcpy(historia[136].historia,"com uma vontade imensa de desistir e chorar. Ser� que sou uma pessoa podre? Ser� que eu"); 
	strcpy(historia[136].historia,"deveria ter feito mais? Porque eu sou assim?");
	strcpy(historia[137].historia,"Crian�a: Sua vers�o crian�a se orgulharia do que voc� se tornou hoje?");
	strcpy(historia[138].historia,"Aaron:(Come�a a sorrir)");
	strcpy(historia[139].historia,"Crian�a:Porque est� sorrindo?");
	strcpy(historia[140].historia,"Aaron:Eu sou o que sou.");
	strcpy(historia[141].historia,"Crian�a: O que? Ent�o aceita sua verdadeira natureza?");
	strcpy(historia[142].historia,"Aaron:Sim, mas minha verdadeira natureza n�o � esse monte de lixo de que voc� tem me falado,");
	strcpy(historia[143].historia,"ent�o procura outro soldado desocupado para ench�-lo de joguinhos mentais, pois tudo o que fiz");
	strcpy(historia[144].historia,"e passei at� aqui me fez a pessoa que sou hoje, mas como nem tudo est� ao meu controle, n�o ");
	strcpy(historia[145].historia,"pude salvar muitas das vidas que atualmente n�o existem, compreendo tudo o que fiz e sei que dei");
	strcpy(historia[146].historia,"o meu melhor e n�o me arrependo, ent�o d� o fora que eu tenho algo a cumprir.");
	strcpy(historia[147].historia,"Crian�a: (Faz uma express�o de �dio e desaparece)");
	strcpy(historia[148].historia,"Percebo que apenas botei um p� em frente � porta e nem tinha a adentrado.");
	strcpy(historia[149].historia,"Aaron:Preciso sair logo daqui. Adentro o local e continuo");
	strcpy(historia[150].historia,"caminhando at� que sou abordado por um monstro que somente os sonhos podem descrev�-lo.");
	strcpy(historia[151].historia,"(Risadas em meio � escurid�o)");
	strcpy(historia[152].historia,"Aaron:Quem est� ai?");
	strcpy(historia[153].historia,"E em menos de um segundo um monstro sai das sombras e me aborda rindo escandalosamente e diz:");
	strcpy(historia[154].historia,"Monstro:Meu nome � Vacanta e eu n�o acredito que um simples mortal conseguiu atravessar pelo");
	strcpy(historia[100].historia,"apelo das mem�rias e vim me enfrentar.");
	strcpy(historia[155].historia,"Aaron:Pois acredite bela senhora, pois sua descren�a acaba de aparecer a sua frente.");
	strcpy(historia[156].historia,"Vacanta: Corajoso e insolente sua carne ser� perfeita para a retalia��o.");
	//come�a a batalha 9
	strcpy(historia[157].historia,"Vacanta: Corajoso e insolente sua carne ser� perfeita para a retalia��o. ");
	strcpy(historia[158].historia,"Vacanta: N�O, eu devo estar sonhando. ");
	strcpy(historia[159].historia,"Aaron:Ent�o eu sou o seu pior pesadelo.");
	strcpy(historia[160].historia,"Ela come�a a sangrar e definhar at� seu corpo desaparecer por completo em meio a sombras, ");
	strcpy(historia[161].historia,"consequentemente,fazendo com que uma luz surgisse em meio aquela escurid�o...");
	strcpy(historia[161].historia,"Surgindo a chave para adentrar os quatros caminhos, percebo");
	strcpy(historia[162].historia,"que apenas o seu formato era como o de uma chave comum, pois todo o seus detalhes eram ");
	strcpy(historia[163].historia,"como rubricas que s� de olha-las fazia-me sentir o peso de possui-la em minhas m�os. ");
	strcpy(historia[164].historia,"Pego-a em minhas m�os e vejo que todo o labirinto come�a a desabar e antes de pensar no ");
	strcpy(historia[165].historia,"que devia fazer a chave come�a a brilhar e me teletransporta para um lugar que me fazia pensar");
	strcpy(historia[165].historia,"se eu estava acordado ou sonhando. Era um lugar onde tudo era um oceano escuro e o �nico lugar");
	strcpy(historia[166].historia,"em que havia terra firme era onde eu estava juntamente de um ser que sua sede por sangue era");
	strcpy(historia[167].historia,"tamanha a ponto de sentir o cheio da morte apenas vendo a sua face, finalmente percebi que");
	strcpy(historia[168].historia,"aquilo n�o era nada comparado ao que eu tinha enfrentado... Aquilo...  Era um senhor obscuro.");
	//come�a a batalha 10
	strcpy(historia[169].historia,"Jogador: Adeus senhor obscuro. Nossa isso realmente foi...");
	strcpy(historia[170].historia,"Aaron:Espera, onde estou? ");
	strcpy(historia[171].historia,"Fui teletransportado novamente e dessa vez em uma regi�o com um mar de areia e o local onde ");
	strcpy(historia[172].historia,"eu pisava era totalmente escuro.Avistando apenas um ser com apar�ncia feminina e demon�aca"); 
	strcpy(historia[172].historia,"h� alguns metros de dist�ncia");
	strcpy(historia[173].historia,"???:(Risadas mal�ficas)");
	strcpy(historia[174].historia,"???: Voc� est� na minha dimens�o agora, mortal. Esta chave imunda que vejo carregar ela o");
	strcpy(historia[175].historia,"teletransporta a uma dimens�o desejada a cada vez que cumpre um desafio e como seu desejo");
	strcpy(historia[175].historia,"enfrentar a n�s voc� nos encontra.");
	strcpy(historia[176].historia,"Aaron:E quem � voc�.");
	strcpy(historia[177].historia,"Iruchel: Meu nome � Iruchel, a senhora datrak e n�o deixarei que prossiga com isso.");
	strcpy(historia[178].historia,"Aaron:� o que vamos ver.");
	//come�a a batalha 11
	strcpy(historia[179].historia,"Iruchel: Eu nunca fui t�o humilhada.");
	strcpy(historia[180].historia,"Aaron:Aproveite essa humilha��o em outra vida.");
	strcpy(historia[181].historia,"(Sou teletransportado novamente)");
	strcpy(historia[182].historia,"???:Voc� finalmente chegou at� mim e antes que me pergunte qualquer coisa n�o possuo algo como");
	strcpy(historia[182].historia,"um nome e apenas trago a sua destrui��o assim como previ.");
	strcpy(historia[183].historia,"Aaron:Ent�o voc� pode prever o futuro?");
	strcpy(historia[184].historia,"Senhor obscuro sem nome: Voc� nunca entenderia ent�o apenas aceite o seu destino.");
	//come�a a batalha 12
	strcpy(historia[185].historia,"Senhor obscuro sem nome: N�O PODE SER... Teria voc� o poder de mudar o destino?");
	strcpy(historia[186].historia,"Aaron:O destino � apenas um refugio para aqueles que t�m medo de fazer suas pr�prias escolhas.");
	strcpy(historia[187].historia,"Sou teletransportado mais uma vez para o ultimo dos caminhos.");
	strcpy(historia[188].historia,"???: Eu realmente n�o acredito que voc� chegou at� aqui.Senti um dist�rbio na dimens�o dos");
	strcpy(historia[189].historia,"meus irm�os, mas nunca pensei que voc� conseguisse matar cada um deles. Eu sou aquele conhecido");
	strcpy(historia[190].historia,"como rei supremo, rei Datrak e senhor obscuro entre os homens.");
	strcpy(historia[191].historia,"Aaron:Entendo,eu diria que � um prazer conhece-lo se estiv�ssemos em outras circunstancias.");
	strcpy(historia[192].historia,"Rei Datrak:Vejo que �s um ser de respeito,mortal.Apesar de sua breve inferioridade,com o passar");
	strcpy(historia[191].historia,"Aaron:Entendo,eu diria que � um prazer conhece-lo se estiv�ssemos em outras circunstancias.");
	strcpy(historia[192].historia,"dos anos eu n�o tenho o que fazer al�m de refletir sobre minha exist�ncia aqui, proponho");
	strcpy(historia[193].historia,"ent�o um desafio para entreter-me. Se me derrotares lhe concederei um desejo que est� ao meu");
	strcpy(historia[194].historia,"alcance,mas se falhar sofrer� eternamente ao meu lado como parte de sua puni��o.");
	strcpy(historia[195].historia,"Aaron:Eu aceito seu desafio.");
	//come�a a batalha 13
	strcpy(historia[196].historia,"Rei Datrak: Como isso � poss�vel?");
	strcpy(historia[197].historia,"Aaron:� simples,voc� tinha nada a perder e eu tinha tudo a ganhar");
	strcpy(historia[198].historia,"Rei Datrak: Como parte do acordo, realizarei seu desejo.");
	strcpy(historia[199].historia,"Aaron:Eu desejo saber quem me traiu e porque me traiu.");
	strcpy(historia[200].historia,"Rei Datrak:Um desejo realmente curioso eu diria, pois bem.");
	strcpy(historia[200].historia,"As pessoas que lhe tra�ram possuem duas identidades.");
	strcpy(historia[201].historia,"Aaron: Pessoas? Como assim duas identidades?");
	strcpy(historia[202].historia,"Rei Datrak:Para entendermos teremos que voltar ao passado e reviver as memorias dessas duas pessoas.");
	strcpy(historia[203].historia,"Rei Datrak: Havia uma crian�a da nobreza chamada Robin Roths e ele nunca aceitou que");
	strcpy(historia[204].historia,"pessoas que vinham de uma classe inferior a sua se destacassem tanto quanto ele, um verdadeiro");
	strcpy(historia[205].historia,"egoman�aco desde sua inf�ncia. At� que ele e seu tio Tulius Roths em uma viagem com toda a");
	strcpy(historia[206].historia,"fam�lia acompanhada por seguran�as do rei foram atacados pelo ex�rcito do rei destru�do.");
	strcpy(historia[207].historia,"Assim, fazendo os seguran�as do rei falhar e a fam�lia Roths ser massacrada. Os �nicos que");
	strcpy(historia[208].historia,"sobreviveram a essa trag�dia foram Robin e Tulius.O rei Raphael Terceiro com medo da noticia se");
	strcpy(historia[208].historia,"espalhar e o reino ter-se a ideia de que o rei n�o poderia proteg�-los,");
	strcpy(historia[209].historia,"j� que uma fam�lia t�o importante para o reino conseguiu ser quase dizimada chamou-os");
	strcpy(historia[210].historia,"e ordenou para que mudassem seus nomes, eles n�o seriam mais Robin Roths e Tulius Roths,");
	strcpy(historia[211].historia,"mas Gerald Trish e Carlos Leopon\", onde eles perderiam seus t�tulos ");
	strcpy(historia[212].historia,"de nobres para cobrir o ocorrido e ganhariam novas posi��es dentro do reino. Robin ficou ");
	strcpy(historia[213].historia,"extremamente irritado com isso mesmo ainda sendo uma crian�a,por achar isso uma desonra enorme"); 
	strcpy(historia[213].historia,"com o nome de sua fam�lia, a fam�lia Roths,por�m por estar diante do rei ");
	strcpy(historia[214].historia,"ele segurou o seu �dio imenso, j� Tulius esbanjava de nenhuma rea��o sentimental eminente");
	strcpy(historia[215].historia,"e assim foi feito. Seu tio Tulius agora se tornara General");
	strcpy(historia[216].historia,"Gerald e Robin agora se passaria a chamar Carlos, onde poderia escolher algo a seguir assim que");
	strcpy(historia[217].historia,"estivesse mais velho. Ao chegar a sua nova resid�ncia tempor�ria dada pelo rei, Robin surta com o"); 
	strcpy(historia[217].historia,"seu tio, seu orgulho estava ferido,ele acreditava ser muito superior a tudo isso que estava");
	strcpy(historia[218].historia,"passando e come�a a gritar descontroladamente.");
	strcpy(historia[219].historia,"Robin: VOC� N�O FEZ NADA TIO. O QUE VAMOS FAZER? O DIGA-ME O QUE VAMOS FAZER?");
	strcpy(historia[220].historia,"Robin ficou impressionado, pois o seu tio pela primeira vez faz uma express�o de puro �dio"); 
	strcpy(historia[220].historia,"onde ele nunca viu em sua vida.");
	strcpy(historia[221].historia,"Tulius: Calma meu sobrinho n�s ainda teremos nossa vingan�a...");
	strcpy(historia[222].historia,"Ent�o eles planejam juntos, Tulius pretende aceitar de bom grado a decis�o do rei s� para");
	strcpy(historia[223].historia,"crescer dentro do ex�rcito, consequentemente, conseguindo influ�ncia e poder suficiente para se");
	strcpy(historia[224].historia,"virar contra o rei e tomar o seu poder, j� Robin diz que ir� entrar para o campo de guerreiros");
	strcpy(historia[225].historia,"para se tornar o soldado perfeito e assassinar o rei. Assim Robin entra no campo de guerreiro");
	strcpy(historia[226].historia,"mascarando os seus sentimentos e fingindo ser algu�m que ele n�o � quando na verdade s� queria");
	strcpy(historia[100].historia,"provar para todos aqueles outros ali que ele era superior, mas tudo isso muda quando voc� Aaron");
	strcpy(historia[228].historia,"apareceu e consegue tanto destaque quanto Robin que agora � conhecido como Carlos,");
	strcpy(historia[229].historia,"ent�o ele se enfurece cada vez mais, mas n�o pode demonstrar isso.");
	strcpy(historia[230].historia,"Logo, apenas tenta reconhecer o seu \"inimigo\" e come�a a aproximar-se de voc� apenas ");
	strcpy(historia[231].historia,"para saber suas fraquezas e usa-las contra voc� mesmo, conversando com seu tio agora chamado");
	strcpy(historia[232].historia,"de General Gerald para dar exerc�cios cada vez mais severos a seu novo amigo at� que um dia");
	strcpy(historia[233].historia,"Robin pediu para duelar com seu amigo/inimigo porque n�o aguentava mais pensar na ideia de");
	strcpy(historia[234].historia,"que ele poderia ser o melhor do que ele e ao perder viu seu ego ser massacrado. Ele n�o poderia");
	strcpy(historia[235].historia,"deixar isso barato, ent�o pediu para que o general lhe desse uma prova que seria imposs�vel ele");
	strcpy(historia[236].historia,"passar e se tornar um guerreiro, tarefa essa que seria derrotar o pr�prio general.");	
	strcpy(historia[237].historia,"Ao Aaron obter �xito novamente em derrotar o general a inveja de Robin s�");
	strcpy(historia[238].historia,"cresce cada vez mais ele tinha que ser o melhor porque ele sabia");
	strcpy(historia[239].historia,"que era o melhor ficando cada vez mais paranoico, ele quer superar seu amigo/inimigo a qualquer");
	strcpy(historia[240].historia,"custo, ent�o da � ideia para que Eddie duele com seu rival para poder mata-lo enquanto eles");
	strcpy(historia[241].historia,"duelam usando sua habilidade com flechas desconhecida por seus amigos, no qual ele aprendeu");
	strcpy(historia[242].historia,"com sua fam�lia nobre quando era crian�a e uma flecha que pertencia ao Eddie,j� que Aaron estaria");
	strcpy(historia[243].historia,"totalmente concentrado no Eddie e n�o perceberia a flecha. Assim matando-o e culpando o Eddie");
	strcpy(historia[244].historia,"no processo, o general daria todo o apoio a Robin e condenaria o Eddie por assassinato de seu");
	strcpy(historia[245].historia,"parceiro de guerra. Todavia, algo o impede de fazer isso... O Carlos, essa personalidade que ele");
	strcpy(historia[246].historia,"construiu em si mesmo por todo esse tempo, que apesar de todo seu �dio ele n�o conseguiria ter");
	strcpy(historia[247].historia,"coragem para matar o seu amigo com suas pr�prias m�os desistindo assim da ideia e apenas os deixando");
	strcpy(historia[248].historia,"lutarem Ap�s hesitar em sua a��o Robin n�o consegue dormir, criando outro plano para livrar-se dessa");
	strcpy(historia[249].historia,"pedra em seu caminho de uma vez por todas. Os lideres de grupo eram nomeados por indica��es");
	strcpy(historia[250].historia,"dos pr�prios soldados ent�o ele conversa com seu tio sobre isso e conversa com todos os soldados");
	strcpy(historia[251].historia,"usando o carisma de seu personagem, O Carlos para convencer a todos de que o jogador era");
	strcpy(historia[252].historia,"perfeito para o cargo de lideran�a de um grupo e assim aconteceu... Voc� foi indicado para l�der");
	strcpy(historia[253].historia,"com uma miss�o falsa a mando do General Gerald a pedido de seu amigo Carlos indo ent�o para");
	strcpy(historia[253].historia," a morte certa no bosque das almas.");
	strcpy(historia[254].historia,"Aaron:N�o,isso n�o pode estar acontecendo.Deve ser algum engano,O Carlos � meu amigo ele nunca...");
	strcpy(historia[253].historia,"N�O PODE SER PORQUE CARLOS POR QUE.");
	strcpy(historia[255].historia,"Rei Datrak:� a verdade meu caro, admito que me sensibilizei com sua situa��o e ajudarei em sua");
	strcpy(historia[256].historia,"jornada, ap�s nossa batalha sinto a minha vida esvaziando-se do meu corpo, ent�o aceite a chama");
	strcpy(historia[257].historia,"do meu espirito em voc� assim tendo o poder que precisa para a sua vingan�a.");
	strcpy(historia[258].historia,"Aaron:Eu agrade�o pela sua ajuda Rei Datrak.");
	strcpy(historia[259].historia,"Voc� recebeu o espirito do Rei Datrak.");
	strcpy(historia[260].historia,"Ap�s receber o espirito do Rei Datrak fui teletransportado");
	strcpy(historia[261].historia,"pela ultima vez e dessa vez era o �nico lugar que eu precisava...Midland.");
	strcpy(historia[262].historia,"Entro na cidade e tudo est� um caos a cidade est� em alerta a um ataque ao rei destru�do, todos");
	strcpy(historia[263].historia,"ficam espantados ao me verem n�o s� por estar vivo, mas tamb�m pela minha apar�ncia. Eu era");
	strcpy(historia[264].historia,"uma pessoa totalmente diferente do que j� fui e muito mais poderoso tamb�m, ao entrar no reino");
	strcpy(historia[265].historia,"uma multid�o enorme me segue e sou cercado por perguntas de meus companheiros, pergunto-os");
	strcpy(historia[266].historia,"onde est� Eddie e eles dizem que ele morreu em batalha, meu �dio cresce mais uma vez e pergunto");
	strcpy(historia[267].historia,"onde est� Carlos? E eles me dizem q	ue ele est� com o rei, continuo caminhando e vou at� a porta");
	strcpy(historia[268].historia,"do pal�cio real, onde v�rios soldados tentam me parar e com apenas com minha presen�a todos eles");
	strcpy(historia[269].historia,"caem ao ch�o, eu era outra coisa um ser poderoso de mais para meros soldados me atacarem.");
	strcpy(historia[270].historia,"Abro as portas do pal�cio com apenas o olhar e adentro o grande sal�o e presencio pessoalmente");
	strcpy(historia[271].historia,"um combate entre os soldados traidores liderados por Gerald contra os soldados leais ao rei.");
	strcpy(historia[272].historia,"Assim, entendo porque estavam guardando aquele pal�cio a sete chaves.");
	strcpy(historia[273].historia," Derroto todos os soldados traidores facilmente e todos eles come�am a se perguntar que soldado");
	strcpy(historia[273].historia,"era aquele e se ele ainda era humano. Vejo que o Carlos estava batalhando contra o Rei Raphael");
	strcpy(historia[274].historia,"ent�o me apresso e derroto todos ali em um piscar de olhos o Gerald foge, mas n�o era com ele que eu");
	strcpy(historia[275].historia,"estava preocupado todo o meu �dio estava ligado diretamente ao mandante de todo o meu sofrimento.");
	strcpy(historia[276].historia,"Aaron:CARLOS, finalmente o encontrei meu velho amigo ou devo chama-lo de Robin?");
	strcpy(historia[277].historia,"Carlos: O QUE? Como sabe meu verdadeiro nome? Deixa isso n�o importa.");
	strcpy(historia[278].historia,"Carlos: Como voc� ainda est� vivo? Eu me certifiquei de que acabaria com voc� para sempre.");
	strcpy(historia[279].historia,"Aaron:Que pena.Porque estou aqui para acabar com sua vida.");
	strcpy(historia[280].historia,"Carlos ent�o pegou o rei e botou uma espada perto de seu pesco�o.");
	strcpy(historia[281].historia,"Carlos: Ele � meu ref�m.");
	strcpy(historia[282].historia,"Ent�o meus olhos come�aram a emitir uma luz negra na intensidade de uma luz lunar que reflete");
	strcpy(historia[283].historia,"nas �guas.Todos que estavam no sal�o estavam assustados com que presenciavam.");
	strcpy(historia[284].historia,"Carlos: O QUE � ISSO? VOC� � UM DEMONIO QUE VEIO ME ASSOMBRAR? VOC� MORREU ENT�O SUMA DAQUI AGORA.");
	strcpy(historia[285].historia,"Aaron:Carlos...Eu n�o sou a mesma pessoa que tentou matar.");
	strcpy(historia[286].historia,"Aaron:Meu nome �: Aaron Datrak, o �ltimo senhor obscuro");
	strcpy(historia[287].historia,"Carlos: N�o � poss�vel... Voc� mesmo depois de morto. CONTINUA MELHOR DO QUE EU? AAAAA");
	strcpy(historia[288].historia,"n�o consigo acreditar voc� se tornou a fus�o de dois esp�ritos! Carlos saiu correndo com sua espada");
	strcpy(historia[289].historia,"at� a minha dire��o e caiu de joelhos chorando como uma crian�a.");
	strcpy(historia[290].historia,"Carlos: Eu queria ser o melhor Jogador, s� isso. No entanto, desde que voc� me chegou n�o sou ");
	strcpy(historia[291].historia,"mais o mesmo voc� se tornou minha primeira amizade e mesmo assim eu tentei mata-lo, por favor,");
	strcpy(historia[292].historia,"perdoe-me. Eu nunca fui a melhor pessoa,");
	strcpy(historia[292].historia,"muito pelo contr�rio eu sou podre, mas voc� sempre foi melhor do que isso.");
	//escolha com if e else 
	strcpy(historia[293].historia,"Com minhas pr�prias m�os estrangulei o Carlos at� ele perder toda a sua vida e enquanto ele ");
	strcpy(historia[294].historia,"morria meu �dio aumentava cada vez mais por ele n�o ter sofrido como eu sofri.");
	strcpy(historia[295].historia,"Aaron:Agrade�a eu ainda fui muito mole com voc�.");
	strcpy(historia[296].historia,"Saio e deixo o corpo de Carlos morto no ch�o at� que um tremor enorme acontece e um soldado real");
	strcpy(historia[296].historia,"adentra o pal�cio.");
	strcpy(historia[297].historia,"Soldado real: Rei Raphael, uma calamidade acaba de acontecer o traidor conhecido como General");
	strcpy(historia[298].historia,"Gerald acaba de sacrificar sua alma em um ritual antigo");
	strcpy(historia[298].historia,"e invocou o rei destru�do aqui nas portas de Midland.");
	strcpy(historia[299].historia,"Rei Raphael: Oh n�o, o que iremos fazer?");
	strcpy(historia[301].historia,"Aaron:Deixe isso comigo meu rei.	");
	strcpy(historia[302].historia,"Soldado real: O que? Voc� acredita ter poder para derrotar o rei destru�do?");
	strcpy(historia[303].historia,"Aaron:Confie em mim eu irei derrota-lo de uma vez por todas e livrar esta terra deste mal.");
	strcpy(historia[304].historia,"Rei Raphael: Antes que o rei destru�do consiga passar dos port�es eu tenho um pronunciamento");
	strcpy(historia[305].historia,"a fazer. Por suas a��es em Midland como descoberta de corrup��o,salvar o seu rei assim e se");
	strcpy(historia[305].historia,"indicar para salvar nosso reino do rei destru�do eu n�o posso indica-lo a outra coisa");
	strcpy(historia[306].historia,"do que l�der de nosso ex�rcito.");
	strcpy(historia[307].historia,"Aaron:Agrade�o meu rei,agora soldados re�nam-se comigo nos port�es todos voc�s");
	strcpy(historia[307].historia,"e o m�ximo que puderem chamar do campo de guerreiros.");
	strcpy(historia[308].historia,"Ent�o sa�mos todos n�s �s pressas e nos reunimos nos port�es, onde o rei destru�do atacara.");
	strcpy(historia[309].historia,"Aaron:Soldados eu os convoco para uma causa,mas esta causa n�o � s� minha n�o � s� sua,n�o �");
	strcpy(historia[310].historia,"s� de nosso rei.� DE TODOS N�S! � de cada gera��o quem j� pisou ou h� de pisar nesta terra,");
	strcpy(historia[311].historia,"vamos lutar hoje n�o s� pelas nossas vidas, mas pelas vidas que vir�o e que nossa hist�ria seja");
	strcpy(historia[312].historia,"gravada como aqueles que livraram Midland do mal que a amea�ava. QUEM EST� COMIGO?");
	strcpy(historia[313].historia,"Todos: POR MIDLAND AO AVANTE.");
	strcpy(historia[314].historia,"Rei Raphael: Vamos salvar o nosso reino soldados ou morreremos tentando! E assim come�ava");
	strcpy(historia[315].historia,"o evento conhecido como guerra santa onde os soldados do rei Raphael liderados por mim");
	strcpy(historia[316].historia,"lutavam incansavelmente contra o ex�rcito do rei destru�do, onde hesitar era sin�nimo de perder");
	strcpy(historia[317].historia,"a sua vida. No meio desta batalha brutal gra�as as nossas habilidades e for�as reunidas os mortos");
	strcpy(historia[318].historia,"e dem�nios do Rei destru�do eram aniquilados um por um at� que eu finalmente tive a oportunidade");
	strcpy(historia[318].historia,"de encara-lo frente a frente");
	strcpy(historia[319].historia,"Meu cora��o palpitava a cada passo que eu dava para aproximar-me daquele ser sombrio, seu");
	strcpy(historia[320].historia,"poder abalava toda a confian�a que eu tinha no poder que eu tinha adquirido em minha jornada.");
	strcpy(historia[321].historia,"Rei destru�do: O que temos aqui uma criatura como voc� tentando lutar contra mim? O ser supremo?");
	strcpy(historia[322].historia,"Jogador: N�o sou como os outros que voc� j� enfrentou pode ter certeza disso");
	strcpy(historia[323].historia,"Rei Destru�do: Eu vejo bem,est� bem nos seus olhos o poder de uma estrela sombria,");
	strcpy(historia[323].historia,"onde um mortal como voc� conseguiu isto?");
	strcpy(historia[324].historia,"Jogador: Rei Datrak vive em mim.");
	strcpy(historia[325].historia,"Rei Destru�do: Parece que voc� est� se aproximando cada vez mais ao inv�s de correr.");
	strcpy(historia[326].historia,"Jogador: Preciso me aproximar se quero acabar com a sua vida.	");
	strcpy(historia[327].historia,"Rei Destru�do: Voc� tem coragem, mas todos os corajosos que me enfrentaram do meu poder est�o mortos.");
	strcpy(historia[328].historia,"Ent�o eu me aproximei e a cada vez que ficava mais pr�ximo mais poder sombrio eu sentia era");
	strcpy(historia[329].historia,"algo inexplic�vel que fazia meu cora��o palpitar cada vez mais forte, o medo que era algo que eu ");
	strcpy(historia[330].historia,"n�o sentia h� bastante tempo finalmente era real. Medo, ansiedade, indecis�o eram os sentimentos");
	strcpy(historia[331].historia,"que rondavam a minha mente e alma, pois esta seria a batalha que definiria a minha vida.");
	//come�a a batalha final
	strcpy(historia[332].historia,"Rei Destru�do: EU? EU SOU UM DEUS! COMO POSSO ESTAR SENDO DERROTADO POR ALGU�M COMO VOC�, isso");
	strcpy(historia[333].historia,"est� errado o destino me escolheu para dominar estas terras, mas lembre-se garoto"); 
	strcpy(historia[333].historia,"eu sou IMORTAL (risadas).");
	strcpy(historia[334].historia,"Rei Destru�do: Ent�o n�o importa o quanto tente voc� nunca ir�...");
	strcpy(historia[335].historia,"De repente o do anel do imperador em meu dedo que foi me dado h� muito tempo come�a a brilhar.");
	strcpy(historia[336].historia,"O c�u escurece trov�es tomam conta de todo o reino, todo o poder do Rei Destru�do come�a a ser ");
	strcpy(historia[337].historia,"absorvido pelo anel juntamente de todo o seu ex�rcito. Fico pensando no que est� acontecendo at�");
	strcpy(historia[337].historia,"lembrar-me do que aquela senhora tinha me dito este � o anel do imperador boa fortuna"); 
	strcpy(historia[338].historia,"ele lhe trar�, mas se voc� possuir �dio o mal ele lhe trar�. Assim,percebo que ao entregar-me ao");
	strcpy(historia[339].historia,"meu �dio a condi��o do anel foi saciada, eu estava em equil�brio entre o meu �dio e minha reden��o,");
	strcpy(historia[340].historia,"mas ao matar o Carlos e concluir o meu �dio e vingan�a o anel mal sorte trouxe-me, consequentemente,");
	strcpy(historia[340].historia,"ap�s absorver todo o mal ali presente o anel foi corrompido abrindo um portal entre o mundo sombrio");
	strcpy(historia[341].historia,"e o nosso mundo fazendo com que criaturas das trevas a cada dois anos entrem em nosso mundo.");
	strcpy(historia[342].historia,"Um novo dia nasce em Midland, com a morte do Rei Raphael terceiro em batalha o seu filho seria o pr�ximo");
	strcpy(historia[342].historia,"na linha de sucess�o do trono, isso se eu n�o o matasse antes.");
	strcpy(historia[343].historia,"Ap�s sentir as a��es do anel eu percebi que a �nica maneira de lutar contra o mal seria com ");
	strcpy(historia[344].historia,"o meu mal, ou seja, com aquilo que eu me tornei. Aceito minha verdadeira natureza e irei lutar");
	strcpy(historia[344].historia,"incansavelmente para proteger este reino destas criaturas das trevas.");
	strcpy(historia[345].historia,"Outro dia nasce em Midland e eu sou o rei, onde ningu�m questiona o meu poder e autoridade, mas tamb�m em");
	strcpy(historia[346].historia,"meu reino nunca ningu�m sofre. Protejo meus cidad�os com meu poder a cada dois anos e nenhum invasor");
	strcpy(historia[347].historia," humano tem coragem de erguer sua espada contra o meu reino. Outro dia nasce em Midland ?"); 
	strcpy(historia[347].historia,"Sinto-me cada vez mais sozinho, onde est�o os meus amigos?H� um novo dia em Midland ? ");
	strcpy(historia[348].historia,"J� travei tantas batalhas onde est� o sentido da minha vida? Em que dia estou em Midland?");
	strcpy(historia[349].historia,"Eu sinto falta do passado... Voltaram-se dois anos em Midland e as consequ�ncias de minhas a��es caem"); 
	strcpy(historia[349].historia,"na minha consci�ncia diariamente. O que � Midland? Acho que estou vendo coisas seriam pessoas");
	strcpy(historia[350].historia,"tramando contra mim? Outro dia nasce em Midland, mas o meu sentido de vida n�o.");
	strcpy(historia[351].historia,"Outro dia nasce em Midland e eu apenas aceitei o meu papel nisso tudo, protegendo meu reino e salvando");
	strcpy(historia[352].historia,"vidas, eu sou o que sou e n�o perderei a sanidade com isso, eu n�o perderei a sanidade com isso."); 
	strcpy(historia[352].historia,"Eu n�o perderei a sanidade com isso. Eu fiz escolhas e elas me guiaram at� aqui e a �nica coisa");
	strcpy(historia[353].historia," que posso fazer � conviver com elas e ser forte, pois um reino necessita de minha presen�a.");
	//fim da escolha 1
	
	//escolha 2 pegou o anel, mas matou o amiguenho Carlos/robin
	strcpy(historia[32].historia,"De repente o do anel do imperador em meu dedo que foi me dado h� muito tempo come�a a brilhar.");
	strcpy(historia[32].historia,"e fortes raios de luz atingem todo o reino de Midland purificando todo o ex�rcito sombrio juntamente");
	strcpy(historia[32].historia,"de seu rei que grita incessantemente enquanto suas almas eram purificadas. Fico pensando no que");
	strcpy(historia[32].historia,"est� acontecendo at� lembrar-me do que aquela senhora tinha me dito este � o anel do imperador");
	strcpy(historia[32].historia,"boa fortuna ele lhe trar�, mas se voc� possuir �dio o mal ele lhe trar�.");
	strcpy(historia[32].historia,"Assim percebo que ao libertar-me de todo �dio a condi��o de sorte do anel foi saciada ao perder o");
	strcpy(historia[32].historia,"equil�brio entre �dio e reden��o pr�pria para o caminho de s� reden��o a boa sorte me foi chegada,");
	strcpy(historia[32].historia,"consequentemente, livrando-me de todo mal e protegendo este reino. Agora um novo dia nasce");
	strcpy(historia[32].historia,"em Midland, onde eu vivo em paz como l�der do ex�rcito do rei, ajudando-o e fazendo cada vez");
	strcpy(historia[32].historia,"mais com que esse reino seja prospero.");
	strcpy(historia[32].historia,"Superando todo o mal que me causaram e lutando para que a paz seja assim mantida. ");
	
	//final alternativo que n�o pegou o anel
	//o mesmo final s� mudando a partir desse di�logo com o rei destruido:
	strcpy(historia[32].historia,"Rei Destru�do: Ent�o n�o importa o quanto tente voc� nunca ir� me derrotar!");
	strcpy(historia[32].historia,"Sons de destrui��o e pavor s�o ouvidos al�m do horizonte, a vida passa diante dos meus olhos,");
	strcpy(historia[32].historia,"as escolhas que fiz tudo o que matei e lutei para estar aonde cheguei, minhas supera��es");

	strcpy(historia[32].historia,"e frustra��es internas... Seria tudo isso uma grande bobagem? Seria este o sentido");
	strcpy(historia[32].historia,"de minha vida? Seria este o sentido do meu fim? N�o sei mais o que pensar e muito menos como agir.");
	strcpy(historia[32].historia,"Meu corpo chora rios vermelhos a cada golpe do Rei Destru�do, para onde posso ir al�m dos bra�os");

	strcpy(historia[32].historia,"da morte? Midland desaparece e com o seu sumi�o vai-se tamb�m a minha vida...");
	// escolhar ver depois   ? ? ? o vei isso pra mim n  faz o menor sentido pq come�a em um n�mero dps fvai pra outro

	
//	
  
  ///*
 // das escolhas
//  
  
  
 // case 1: //caso aceite se libertar
				strcpy(historia[23].historia,"Sim,eu aceito,por favor livre-me deste tormento,n�o consigo mais suportar tudo isso...");
				strcpy(historia[24].historia,"O soldado real libertou-me do meu tormento, e disse que me levaria para um lugar seguro.");
				strcpy(historia[23].historia,"Andamos durante meia hora, e deparamo-nos com uma velha senhora que, estava parada no meio da rua.");
				strcpy(historia[23].historia,"Ela era corcunda, usava um vestido azul turquesa que real�ava sua bengala de madeira.");
				strcpy(historia[25].historia,"Ao perceber nossa presen�a ela levantou o rosto e disse olhando nos meus olhos Vejo que seu passado");
				strcpy(historia[25].historia,"foi tortuoso.Mas seu futuro pode ser gracioso por isso eu lhe ofere�o isto..."); 
				strcpy(historia[25].historia,"ela tirou um anel do bolso este � o anel do imperador boa fortuna ele lhe trar�, mas se voc�");
				strcpy(historia[25].historia,"possuir �dio o mal ele lhe trar�. Ao terminar de falar, ela coloca um sorriso for�ado no rosto.");
				strcpy(historia[26].historia,"Eu olho pro guarda sem saber o que fazer, e ent�o ele me diz: n�o aceite,"); 
				strcpy(historia[25].historia,"presentes que s�o facas de dois gumes, eles s�o muito perigosos, al�m do mais voc� n�o sabe"); 
				strcpy(historia[25].historia,"se ela fala a verdade.");
				strcpy(historia[27].historia,"Voc� aceita o presente?(11) Aceito seu presente, obrigado.(12) N�o, obrigado vivo at� hoje sem sorte.");
		//		break;
		//	case 11: 
				//hist�ria da escolha 1 caso aceite o anel, good ending

				strcpy(historia[28].historia,"Ap�s falar com a senhora no meio do caminho, o guarda real me levou at� o sal�o real,"); 
				strcpy(historia[28].historia,"e falou algo que n�o escutei com o rei, mas eu sei que era sobre o meu caso,"); 
				strcpy(historia[28].historia,"pois o rei Raphael ficou claramente comovido e ordenou que meus pais fossem presos."); 
				strcpy(historia[28].historia,"Alguns dias depois executados.");
				strcpy(historia[29].historia,"Mesmo depois de tudo que eles fizeram comigo, eu sei que no fundo ele me amavam,"); 
				strcpy(historia[28].historia,"eu sinto uma profunda prostra��o pelas suas mortes. Mas as piores d�vidas,");
				strcpy(historia[30].historia,"as piores decis�es, os piores momentos da minha vida, ainda estavam por vim.");
				strcpy(historia[31].historia,"O rei ordenou que eu fosse enviado para o campo de treinamento de guerreiros ap�s ter o cuidado");
				strcpy(historia[31].historia,"m�dico necess�rio. L� eu seria treinado para ser um soldado e lutar contra a causa do rei destru�do.");
				strcpy(historia[32].historia,"Ap�s algumas semanas de cuidado m�dico intenso, finalmente sou liberado."); 
				strcpy(historia[31].historia,"Do�-me o cora��o pensar que deixarei minha bela cidade, mas o destino me aguarda.");
				strcpy(historia[31].historia,"Chegando ao local de treinamento encontro o General, Gerald, respons�vel pelo ex�rcito.");
				strcpy(historia[31].historia,"Ele � um homem que aparenta estar na casa dos quarenta, ele tinha uma barba volumosa e grisalha,");
				strcpy(historia[31].historia,"que dava um toque suave ao seu cabelo, que em maior parte ainda era ruivo.");
				strcpy(historia[31].historia,"Ele me pergunta com um sorriso no rosto o que quero ser:");
				strcpy(historia[33].historia,"O que voc� quer ser?");
				strcpy(historia[34].historia,"(100) Guerreiro (200) Arqueiro (300)Mago");
				//deve haver um scanf aqui
				//colocar as classes
				
				//parte 2 

				strcpy(historia[35].historia,"Passaram-se 6 anos desde o dia que eu cheguei no campo de treinamento.");
				strcpy(historia[35].historia,"Eu sinto meu corpo mais forte, minha mente mais sagaz e minhas m�os mais ardilosas;");
				strcpy(historia[35].historia,"vejo que valeu a pena o intenso treinamento que recebi durante esses anos. Al�m disso, agora tenho");
				strcpy(historia[35].historia,"amigos para dividir o trabalho �rduo, Eddie, um jovem campon�s que se juntou a n�s a mais ou menos");
				strcpy(historia[35].historia,"dois anos, Ele vem treinando para ser um arqueiro; Tamb�m tem o Carlos, ele nunca contou porque");
				strcpy(historia[35].historia,"que se juntou ao campo de treinamento e eu nunca soube suas origens, ele deve ter seus motivos,");
				strcpy(historia[35].historia," ele treina para ser um guerreiro. Enquanto eu refletia sobre meu trabalho duro vejo o Carlos");
			 	strcpy(historia[36].historia,"aproximando-se de mim dizendo: Vejo que t� dando mole em ha h�.");
				strcpy(historia[37].historia,"Carlos:Vamos ver do que voc� � capaz de fazer quando entra em combate."); 
				strcpy(historia[38].historia,"Aaron: Vamos l� meu amigo.");	
			//primeira batalha do game
				strcpy(historia[39].historia,"Carlos: Nossa, voc� est� muito mais forte do que eu esperava. Bom trabalho!");
				strcpy(historia[40].historia,"(1) Eu tive um bom general e bons amigos para me ajudar, � claro...(2) Eu sei que sou talentoso.");
				//scanf("%i",&chat);
			//	if(chat==1){
					strcpy(historia[41].historia,"Carlos: O melhores.");
			//	}else if(chat==2){
					strcpy(historia[42].historia,"Carlos: H� h�... n�o v� se achando, eu peguei leve");
			//	}
				strcpy(historia[43].historia,"Carlos: Eu s� vim ver se voc� est� bem, afinal falta apenas um m�s para a grande prova.");
				strcpy(historia[44].historia,"(1) Melhor imposs�vel.(2) Eu sei que sou talentoso.(3)Estou nervoso.");
				//scanf("%i",&chat);
				//	if(chat==1){
					strcpy(historia[45].historia,"Carlos: Fico feliz!");
				//}else if(chat==2){
					strcpy(historia[46].historia,"Carlos: H� h�... PERA, voc� n�o sabe?Ele coloca a m�o no rosto e prossegue: Depois de um tempo");
					strcpy(historia[46].historia,"no campo de treinamento, todos voc�s ser�o testados. Cada um tem uma prova diferente, quem falhar");
					strcpy(historia[46].historia,"ser� expulso do campo de campo e nunca mais poder� voltar.");
				//}else if(chat==3){
					strcpy(historia[47].historia,"Carlos: hmmmmm... N�o sei se vai funcionar, mas quando eu estou nervoso eu sempre pago 10 flex�es");
					strcpy(historia[46].historia,"para me acalmar, voc� pode tentar tamb�m. Passam-se 15 dias, todos est�o ansiosos,principalmente eu.");
				//}
				strcpy(historia[48].historia,"Meu cora��o come�a acelerar;O General Gerald est� na minha frente, entregando a carta que dir�");
				strcpy(historia[48].historia,"qual ser� prova.Eu abro a carta e meu mundo acaba. Tenho apenas 15 dias para me preparar para o momento");
				strcpy(historia[48].historia,"mais dif�cil da minha vida; minha \"prova de fogo\" ser� derrotar o pr�prio General.");
				strcpy(historia[49].historia,"Depois desse terr�vel encontro, eu reuni meus amigos para falar sobre o acontecido.");
				strcpy(historia[50].historia,"Carlos: Cara, voc� t� muito ferrado.Eddie: Boa sorte.Eu sei que voc� consegue.");
				strcpy(historia[51].historia,"(1) �, eu consigo.(2) N�o sei como vou conseguir essa vit�ria.");
					//scanf("%i",&chat);
				//	if(chat==1){
					strcpy(historia[52].historia,"Carlos e Eddie: S� relaxa e ganha.");
			//	}else if(chat==2){
					strcpy(historia[53].historia,"Carlos e Eddie: S� relaxa e ganha.");
			//	}
				strcpy(historia[54].historia,"Se passam mais 15 longos dias.Durante esses dias eu apenas descansei para ficar pronto para o duelo");
				strcpy(historia[54].historia,"foi bom, mas pensar que eu poderia ser expulso do acampamento me dava calafrios.");
				strcpy(historia[54].historia,"Bem... agora era a hora, me direciono para arena onde o General estava � minha espera.");
				strcpy(historia[55].historia,"General Gerald: Finalmente voc� chegou, soldado. Vamos ao seu teste final!");
			//come�a a batalha 2
	
				strcpy(historia[56].historia,"General Gerald: aagh. Digno de um soldado, meus parab�ns - ele estica a m�o para apertar a minha");
				strcpy(historia[56].historia,"- voc� foi aprovado.");
				strcpy(historia[57].historia,"(1)	Eu tive um bom general...(2) J� era de se esperar de mim...");
			//		if(chat==1){
				strcpy(historia[58].historia,"Gerald: O melhor.");
			//	}else if(chat==2){
				strcpy(historia[59].historia,"Gerald: hmmm...");
			//	}
				strcpy(historia[60].historia,"Eu voltei para barraca, onde fiquei esperando meus amigos por uma hora.");
				strcpy(historia[61].historia,"(1)	E a� se sa�ram bem?(2) Que demora, pensei que voc�s tinham se matado.");
				//	if(chat==1){
					strcpy(historia[62].historia,"Carlos: Sim, sim.Eddie: Quase n�o consegui, mas consegui ha h�.");
		//		}else if(chat==2){
					strcpy(historia[63].historia,"Carlos: HAHA, Eddie quase fez isso mesmo.Eddie: Vai procurar o que fazer Carlos.");
		//		}
				strcpy(historia[64].historia,"Carlos: Hmm boa ideia que tal eu assistir voc� duelando com o Aaron.");
						
				strcpy(historia[65].historia,"Eddie: Cara eu n�o sei se...Carlos: Eita, t� com medo?Eddie: N�o, � que... ah, quer saber vamos");
				strcpy(historia[65].historia,"nessa AaronAaron:(come�o a rir) Eu aceito!");
			//come�a a batalha 3
				strcpy(historia[66].historia,"Eddie: Nossa! Voc� melhorou muito.");
				strcpy(historia[67].historia,"(1)	Eu sei.(2) O importante � sempre dar o seu melhor.");
			//		if(chat==1){
					strcpy(historia[68].historia,"Eddie: Um pouco de humildade �s vezes cai bem.");
			///	}else if(chat==2){
					strcpy(historia[69].historia,"Eddie: Sempre admirei sua humildade.");
			//	}
				strcpy(historia[70].historia,"Assim que nossa prova de fogo finalmente havia acabado, fomos considerados verdadeiros guerreiros.");
				strcpy(historia[70].historia,"Est�vamos felizes, tudo nas nossas vidas ia t�o bem; nem parecia que eu era uma crian�a");
				strcpy(historia[70].historia,"desolada h� anos; tudo estava perfeito, pelo menos eu pensava que estava...");
				strcpy(historia[71].historia,"Depois de toda a burocracia necess�ria para a admiss�o de soldados,");
				strcpy(historia[70].historia,"foram divididos os primeiros grupos,");
				strcpy(historia[70].historia,"e suas primeiras miss�es (ainda que, por enquanto, n�o saibamos quais eram).");
				strcpy(historia[70].historia,"Para entrar em um grupo basta apenas passar no exame, mas para ser um l�der de grupo, � necess�rio");
				strcpy(historia[70].historia,"de uma indica��o dos pr�prios soldados. Acredito que o Carlos ser� um l�der de grupo, independent");
				strcpy(historia[70].historia,"e de onde ficar.Eis chegado o dia para a divis�o de grupos.Eu e meus amigos chegamos ao lugar");
				strcpy(historia[70].historia,"principal onde era feita a divis�o e nomea��o de lideres.");
				strcpy(historia[72].historia,"General Gerald: Aten��o soldados! Chegou a hora dos l�deres de grupos serem chamados aqui na frente.");
				strcpy(historia[70].historia,"Carlos se aproxima do meu ouvido e diz: falei para todo mundo te indicar como l�der. ");
					strcpy(historia[73].historia,"(1)	Voc� ficou maluco?(2) Obrigado, eu acho...");
				//	if(chat==1){
					
					strcpy(historia[74].historia,"Carlos: � que eu sempre achei que voc� seria um bom l�der.Aaron: Pensou errado, meu deus! Mas o que est� feito, est� feito!Carlos: Esse � o esp�rito!");
		//		}else if(chat==2){
					strcpy(historia[75].historia,"Carlos: Voc� ser� um �timo l�der.Aaron: O melhor que eu conseguir.Carlos: � o suficiente para mim.");
		//		}
		
				strcpy(historia[76].historia,"Eddie reage mostrando que estava ouvindo a conversa e diz: relaxa eu tamb�m te indiquei,");
				strcpy(historia[76].historia,"agora s� aceita e de seu melhor como l�der.");
				strcpy(historia[77].historia,"Aaron: Vou tentar.");
				strcpy(historia[78].historia,"O General continua lendo a lista de indicados, e finalmente cita o meu nome. Sou recebido com por");
				strcpy(historia[76].historia,"aplausos excitantes, vou at� a frente do general e fico l� em p� juntamente com os outros l�deres.");
				strcpy(historia[76].historia,"Seguidamente o Carlos tamb�m � chamado o que n�o me impressiona, consequentemente, os grupos foram");
				strcpy(historia[76].historia,"divididos e n�s tr�s pela primeira vez em anos, estamos separados. Eu e o Carlos como l�deres");
				strcpy(historia[76].historia,"de grupos de soldados distintos e o Eddie apenas como soldado em um grupo diferente do nosso.");
				strcpy(historia[76].historia,"Somos deslocados para uma reuni�o individual para cada grupo onde as nossas primeiras miss�es foram");
				strcpy(historia[76].historia,"dadas.Cada miss�o era dita e ordenada pelo General Gerald, para nossos coron�is, que repassavam");
				strcpy(historia[76].historia,"essa informa��o para n�s.A miss�o que me foi dada era de fundo investigativa, deveria ser realizada");
				strcpy(historia[76].historia,"na noite seguinte, seu objetivo era ir at� o fundo de um bosque para eliminar uma pequena quantidade");
				strcpy(historia[76].historia,"mortos-vivos de baixo n�vel que haviam por l�.Saindo do local vou direto para o meu dormit�rio onde");
				strcpy(historia[76].historia,"encontro Eddie e Carlos. Comentamos que amanh� nossas vidas come�am de verdade e que est�vamos ansiosos.");
				strcpy(historia[76].historia,"Ficamos aquela noite comemorando e conversando, pois n�o nos ver�amos mais frequentemente como no campo");
				strcpy(historia[76].historia,"de treinamento. Em algum momento da nossa conversa Eddie nos diz para fazermos um pacto que nenhum de");
				strcpy(historia[76].historia,"n�s voltar�amos de suas miss�es, desonrados, pois em Midland se um l�der volta sem o seu grupo para");
				strcpy(historia[76].historia,"o reino, � automaticamente considerado um soldado sem honra, perdendo todo o seu prest�gio e respeito.");
				strcpy(historia[76].historia,"Fazemos o pacto e prometemos voltar com sucesso e nos despedimos.Finalmente chega a hora de ir at� a");
				strcpy(historia[76].historia,"miss�o, guio meu grupo at� o local designado, o meu grupo confiado na minha lideran�a");
				strcpy(historia[76].historia,"possui cinco membros. O Robert que era um mago, Alexandre um guerreiro, os irm�os Vicent e Jeffrey");
				strcpy(historia[76].historia,"que eram arqueiros, e, claro, eu.");
				strcpy(historia[79].historia,"Era uma noite fria e densa, a Lua brilhava em um tom prata em cima das nossas cabe�as, o clima n�o");
				strcpy(historia[100].historia,"era dos melhores para pessoas sa�rem por ai. Est�vamos em uma carruagem meio velha, apesar de j�");
				strcpy(historia[100].historia,"estar um pouco usada era de alt�ssima qualidade, mal dava para perceber quando pass�vamos por");
				strcpy(historia[100].historia,"cima de um buraco. � medida que nos aproxim�vamos eu sentia um aperto inexplic�vel no meu cora��o,");
				strcpy(historia[100].historia,"sentia que o nosso local de destino era um lugar que dever�amos manter dist�ncia, mas aquela era");
				strcpy(historia[100].historia,"nossa miss�o e t�nhamos que cumprir a qualquer custo.(A carruagem para)");
				strcpy(historia[80].historia,"Cocheiro: S� posso levar voc�s at� aqui. Boa noite e boa sorte, soldados.");
				strcpy(historia[81].historia,"Vejo em seu rosto uma express�o de pavor. Est�vamos em um bosque, as �rvores eram tortas e");
				strcpy(historia[100].historia,"possu�am poucas folhas, uma escurid�o que tomava conta do local o que levava a minha mente a criar");
				strcpy(historia[100].historia,"v�rias perguntas. Estamos sozinhos? uma criatura desconhecida vive em meio as �rvores?");
				strcpy(historia[100].historia,"O arbusto se mexeu?A magia de ilumina��o do Robert, me tirou do meu transe.");
				strcpy(historia[100].historia,"Uma meia esfera com raio de 2 m, se formou ao nosso redor, dentro dela tudo era iluminado.");
				strcpy(historia[100].historia,"Robert: Agradecemos por nos deixar at� aqui.Alexandre: Valeu a� senhor a gente se v� por ai.");
				strcpy(historia[100].historia,"Vicent e Jeffrey: (rindo do Alexandre)Robert era um cara muito formal a sua educa��o e respeito");
				strcpy(historia[100].historia,"com os outros sempre foi muito elogiada, j� o Alexandre era o brincalh�o do grupo,");
				strcpy(historia[100].historia,"os irm�os arqueiros Vicent e Jeffrey n�o eram de falar muito e apenas riam das brincadeiras e");
				strcpy(historia[100].historia,"trocadilhos que o Alexandre fazia, mesmo que muitos deles eram sem gra�a.Come�amos a andar por uma");
				strcpy(historia[100].historia,"estrada de terra que aparentava n�o ter fim.Finalmente chegamos perto do local da nossa miss�o.");
				strcpy(historia[100].historia,"Alexandre: Tenho que mijar.Robert: Logo agora?Alexandre: Sim, se n�o eu vou explodir aqui.");
				strcpy(historia[82].historia,"Aaron: Pode ir. Alexandre: Obrigado L�DER. Vou ali naquela �rvore e j� volto.Robert: Esse cara n�o");
				strcpy(historia[82].historia,"tem jeito.Vicent: Mas � isso que o faz divertido.Robert: Olha s�, ent�o voc� fala.");
				strcpy(historia[82].historia,"Vicent: S� quando tenho vontade.Robert: E voc� Jeffrey? N�o vai dizer nada?");
				strcpy(historia[82].historia,"Jeffrey: (apenas vira seu rosto para o outro lado e ignora).(som de Gritos)");
				strcpy(historia[82].historia,"Robert: QUE MERDA FOI ISSO?Aaron: N�o pode ser...");
				strcpy(historia[83].historia,"Entramos em desespero ao ouvir o grito e corremos aonde Alexandre tinha ido.");
				strcpy(historia[82].historia,"Demos apenas alguns passos e o encontramos ca�do no ch�o gritando. Sua m�o direita havia sido");
				strcpy(historia[82].historia,"arrancada como se algum animal tivesse a estra�alha, o sangue jorrava do local onde costumava ficar");
				strcpy(historia[82].historia,"sua m�o, na sua cal�a come�ou a se formar uma bolha d'agua Quando nos aproximamos dele, come�amos a");
				strcpy(historia[82].historia,"escutar barulhos estranhos (mesmo com os gritos de nosso companheiro).");
				strcpy(historia[82].historia,"A parentava ser passos de uma criatura, mas n�o t�o frequentes quanto o de um quadr�pede,");
				strcpy(historia[82].historia,"o quer que seja andava com duas pernas... talvez tr�s. Era um humano? pouco prov�vel, mas � a");
				strcpy(historia[82].historia,"�nica criatura que eu conhe�o, se n�o fosse isso, significava que est�vamos enfrentando");
				strcpy(historia[82].historia,"algo desconhecido.Formamos um circulo e mantivemos posi��o.O som come�ou a se aproximar.");
				strcpy(historia[82].historia,"O suor come�ou a escorrer pelas minhas costas quando eu finalmente vi a criatura.");
				strcpy(historia[82].historia,"A criatura foi iluminada, revelando uma besta enorme que possu�a dois chifres,");
				strcpy(historia[82].historia,"um deles estava quebrado. Ela era muito alta, nunca havia visto algum ser vivo com tamanha altura,");
				strcpy(historia[82].historia,"devia ter cerca de 5 metros.");
				strcpy(historia[82].historia,"Alexandre: PORQUE N�O VIERAM ANTES (sons de dor) eu estou aqui lutando com essa criatura a muito");
				strcpy(historia[82].historia,"tempo praticamente do lado de voc�s e voc�s s� vieram agora.");
				strcpy(historia[82].historia,"A criatura come�ou emitir um som que soava terrivelmente como uma risada.");
				strcpy(historia[82].historia,"Ele para e meu corpo gela, vamos ter que enfrentar aquilo? Ele urra e nesse instante, centenas");
				strcpy(historia[82].historia,"de esp�ritos malignos saem da terra e avan�am em nossa dire��o.Sim, vamos ter que enfrentar isso.");
				strcpy(historia[82].historia,"Aaron: Robert ajude o Alexandre a parar o sangramento com magia de cura,");
				strcpy(historia[82].historia,"Vicent e Jeffrey protejam-nos desses esp�ritos enquanto eu luto contra essa criatura.");
			//come�a a batalha 4
				strcpy(historia[84].historia,"A criatura da uns passos para tr�s, seus olhos revelam que ela j� aceitou seu destino.");
				strcpy(historia[82].historia,"Alexandre: Filho do bastardoAlexandre: (Joga uma pedra na cabe�a da criatura que cai no ch�o morrendo");
				strcpy(historia[82].historia,"aos poucos ap�s a batalha).Robert: Que merda foi essa?");
				strcpy(historia[82].historia,"Alexandre: Eu n�o sei.");
				strcpy(historia[82].historia,"Aaron: J� chega! Vamos terminar o que come�amos.");
				strcpy(historia[85].historia,"Todos concordaram com a cabe�a, e continuamos aos poucos e por algum motivo que eu desconhe�o,");
				strcpy(historia[85].historia,"o bosque come�ou a ficar um pouco mais claro.Vicent: Eu acho isso estranho.");
				strcpy(historia[85].historia,"Robert: O que?");
				strcpy(historia[86].historia,"Vicent:Ter um guardi�o para esse lugar com um poder de oclus�o para um local t�o sem import�ncia");
				strcpy(historia[85].historia,"como esse me parece muito estranho.Alexandre:Eles sabiam da minha for�a, por isso mandaram ele");
				strcpy(historia[85].historia,"para me matar; ele conseguiu arrancar um peda�o, mas ainda estou inteiro.Conforme a escurid�o vai");
				strcpy(historia[85].historia,"sumindo um nevoa densa come�a a aparecer, dificultando nossa vis�o; eu sinto um leve calafrio");
				strcpy(historia[85].historia,"subir das minhas pernas at� a minha espinha, meu cora��o come�ou a pulsar mais forte.");
				strcpy(historia[85].historia,"N�o eram uma e nem duas, mas dezenas de seres malignos que afloram nesse lugar.");
				strcpy(historia[85].historia,"N�o havia escapat�ria, apenas um cercado de mortos do rei destru�do.");
				strcpy(historia[85].historia,"Alexandre: COMO ISSO � POSS�VEL? (tremendo de medo).ISSO ERA UMA MISS�O DE BAIXO N�VEL O QUE");
				strcpy(historia[85].historia,"ESTAMOS FAZENDO AQUI?Vicent:Eu sabia! Isso com certeza deve ter sido um erro, ou um engano.");
				strcpy(historia[85].historia,"O QUE ESTAMOS FAZENDO AQUI? Os mortos estavam se aproximando lentamente,");
				strcpy(historia[85].historia,"como um predador antes de dar o bote.");				
				strcpy(historia[87].historia,"Robert: Aaron O QUE � ISSO PORQUE ESTAMOS AQUI?");
				strcpy(historia[87].historia,"Alexandre:Aaron,POR FAVOR,nos tira daqui.Por favor! Voc� est� na lideran�a aqui, fa�a alguma coisa!");
				strcpy(historia[87].historia,"Vicent: Pessoal... Temos que sair daqui agora!Robert: Mas como ? Jeffrey estava calado...");
				strcpy(historia[87].historia,"Eu estava tremendo e n�o sabia o que responder; a minha respira��o estava ofegante eu n�o sabia");
				strcpy(historia[87].historia,"o que estava acontecendo porque o General me passou esta miss�o? Porque fui consagrado � l�der?");
				strcpy(historia[87].historia,"Porque o Carlos simplesmente n�o calou aquela boca grande e me deixou ser um soldado normal ?");
				strcpy(historia[87].historia,"Nada mais fazia sentido para mim al�m da poss�vel morte eminente. E ela vinha... Vinha com passos");
				strcpy(historia[87].historia,"vazios e sedentos por vidas...");
			//come�a a batalha 5
			strcpy(historia[88].historia,"Alexandre: Eles s�o muitos e todos s�o acima do nosso n�vel.O QUE VAMOS FAZER?");
			strcpy(historia[89].historia,"Batalh�vamos e batalh�vamos, mas n�o consegu�amos mata-los.Alexandre chorava e perguntava quem");
			strcpy(historia[89].historia,"tinha sido o miser�vel que o levou para aquela miss�o, berrava que claramente aquilo foi trai��o");
			strcpy(historia[89].historia,"e que foi algo armado para nos matar. Mesmo falando muitas asneiras durante a vida, n�s sab�amos");
			strcpy(historia[89].historia,"que dessa vez o Alexandre"); 
			strcpy(historia[90].historia,"tinha raz�o, mas quem faria isso conosco? N�o! Eu sei quem foi...");
			strcpy(historia[91].historia,"N�o, n�o foi ele porque ele faria isso comigo? Eu n�o conseguia pensar em mais nada apenas lutava");
			strcpy(historia[89].historia,"e lutava pela minha vida e a dos meus companheiros.");
			strcpy(historia[92].historia,"Alexandre: VAMOS CORRER MESMO N�O TENDO PARA ONDE CORRER, MAS EU S� QUERO QUE...");
			strcpy(historia[93].historia,"o sil�ncio reina");
			strcpy(historia[94].historia,"Pela primeira vez em sua vida o Alexandre parou de falar,mas n�o porque n�o tinha mais palavras,");
			strcpy(historia[89].historia,"mas sim porque n�o possu�a mais uma cabe�a para completar esta a��o.");
			strcpy(historia[89].historia,"Todos estavam em estado de choque.");
			strcpy(historia[95].historia,"Robert: N�O! N�O! N�O! N�O! ISSO N�O EST� ACONTECENDO.");
			strcpy(historia[96].historia,"Eu n�o sabia o que fazer me sentia triste e desesperado,mas n�o t�nha tempo para luto,");
			strcpy(historia[89].historia,"eu tinha que lutar pelos que restantes de n�s.Enquanto eu pensava Robert se atirou no meio deles");
			strcpy(historia[89].historia,"berrando.Fique sem rea��o novamente, e antes de perceber, ele tinha se entregue ao desespero,");
			strcpy(historia[89].historia,"e morreu retalhado. Eles ficaram concentrados em retalhar Robert.");
			strcpy(historia[97].historia,"Jogador: CORRAM");
			strcpy(historia[98].historia,"E com pesar, abandonamos o Robert. Tivemos que fazer isso, tivemos que abra�ar a oportunidade");
			strcpy(historia[89].historia,"para correr dali.Chegamos at� a sa�da, lembramos que havia uma caverna ali perto e que,");
			strcpy(historia[89].historia,"possivelmente ela levaria para o outro lado da montanha; onde os mortos n�o nos pegariam.");
			strcpy(historia[99].historia,"N�o fomos r�pidos o suficiente. Fomos alcan�ados, e o Vicent por correr mais devagar que a maioria");
			strcpy(historia[89].historia,"de nos foi alcan�ado. Ele gritava sem parar pela sua vida. Vi pela primeira vez o Jeffrey chorar,");
			strcpy(historia[89].historia,"ele berrava como uma crian�a, lamentando a morte de seu irm�o.");
			strcpy(historia[100].historia,"Correndo j� sem esperan�a, chegamos at� a caverna e a sua entrada.Um morto-vivo saiu da caverna,");
			strcpy(historia[89].historia,"e pulou em cima de Jeffrey. O monstro rosnava ao tentar alcan�ar o rosto do meu companheiro.");
			strcpy(historia[89].historia,"Os dois rolavam pelo ch�o, eu tinha que ajudar!");
			strcpy(historia[101].historia,"Levantei-me o animo e desferi um golpe mortal. O monstro caiu morto, mas ele segurava um peda�o");
			strcpy(historia[89].historia,"do meu amigo, para ser exato um peda�o da sua costela. Eu comecei a gritar e chorar, porque");
			strcpy(historia[89].historia,"meu �ltimo companheiro estava altamente ferido, eu dizia que ia salva-lo e tirar a gente dali.");
			strcpy(historia[102].historia,"Jeffrey: Se voc� voltar agora voc� ser� desonrado, as pessoas o tratar�o como lixo e voc�");
			strcpy(historia[102].historia,"perder� seu posto de soldado. Ao inv�s de ir direto ao reino procure o respons�vel");
			strcpy(historia[102].historia,"por esta trai��o, e continue com sua honra. Eu nunca te disse isso mais no pouco que nos");
			strcpy(historia[102].historia,"conhecemos eu j� te admirei. Deixe-me aqui e lhe garantirei tempo de fugir.");
					
			//	break;
			//case 12:
				//hist�ria da escolha 1 caso negue o anel, j� cai no bad ending
				
				strcpy(historia[103].historia,"Ap�s falar com a senhora no meio do caminho, o guarda real me levou at� o sal�o real, e falou");
				strcpy(historia[103].historia,"algo que n�o escutei com o rei, mas eu sei que era sobre o meu caso, pois o rei Raphael");
				strcpy(historia[103].historia,"ficou claramente comovido e ordenou que meus pais fossem presos. Alguns dias depois executados.");
				strcpy(historia[104].historia,"Mesmo depois de tudo que eles fizeram comigo, eu sei que no fundo ele me amavam,");
				strcpy(historia[104].historia,"eu sinto uma profunda prostra��o pelas suas mortes. Mas as piores d�vidas,");
				strcpy(historia[105].historia,"as piores decis�es, os piores momentos da minha vida, ainda estavam por vim.");
				strcpy(historia[106].historia,"O rei ordenou que eu fosse enviado para o campo de treinamento de guerreiros ap�s ter o cuidado");
				strcpy(historia[106].historia,"m�dico necess�rio. L� eu seria treinado para ser um soldado e lutar contra a causa do rei destru�do.");
				strcpy(historia[107].historia,"Ap�s algumas semanas de cuidado m�dico intenso, finalmente sou liberado.");
				strcpy(historia[106].historia,"Do�-me o cora��o pensar que deixarei minha bela cidade, mas o destino me aguarda.");
				strcpy(historia[106].historia,"Chegando ao local de treinamento encontro o General, Gerald, respons�vel pelo ex�rcito.");
				strcpy(historia[106].historia,"Ele � um homem que aparenta estar na casa dos quarenta, ele tinha uma barba volumosa e grisalha,");
				strcpy(historia[106].historia,"que dava um toque suave ao seu cabelo, que em maior parte ainda era ruivo.");
				strcpy(historia[106].historia,"Ele me pergunta com um sorriso no rosto o que quero ser:");
				strcpy(historia[109].historia,"O que voc� quer ser? -> (100) Guerreiro  (200) Arqueiro  (300)Mago");
					//deve haver um scanf aqui
					//colocar as classes
				
				//parte 2 
				strcpy(historia[110].historia,"Passaram-se 6 anos desde o dia que eu cheguei no campo de treinamento.");
				strcpy(historia[110].historia,"Eu sinto meu corpo mais forte, minha mente mais sagaz e minhas m�os mais ardilosas;");
				strcpy(historia[110].historia,"vejo que valeu a pena o intenso treinamento que recebi durante esses anos.");
				strcpy(historia[110].historia,"Al�m disso, agora tenho amigos para dividir o trabalho �rduo, Eddie, um jovem campon�s");
				strcpy(historia[110].historia,"que se juntou a n�s a mais ou menos dois anos, Ele vem treinando para ser um arqueiro;");
				strcpy(historia[110].historia,"Tamb�m tem o Carlos, ele nunca contou porque que se juntou ao campo de treinamento e eu nunca");
				strcpy(historia[110].historia,"soube suas origens, ele deve ter seus motivos, ele treina para ser um guerreiro.");
			 	
				strcpy(historia[111].historia,"Carlos:Vamos ver do que voc� � capaz de fazer quando entra em combate."); 
				strcpy(historia[112].historia,"Carlos: Nossa, voc� est� muito mais forte do que eu esperava. Bom trabalho!");
				strcpy(historia[113].historia,"(1) Eu tive um bom general e bons amigos para me ajudar, � claro...(2) Eu sei que sou talentoso.");
				//scanf("%i",&chat);
				//if(chat==1){
					strcpy(historia[114].historia,"Carlos: Os melhores.");
				//}else if(chat==2){
					strcpy(historia[115].historia,"Carlos: H� h�... n�o v� se achando, eu peguei leve");
				//}
				//na parte de matar o amigo aqui vai ser feito com if e else pq n tem import�ncia
			//	break;
				
				
			//case 2: //caso n�o aceite se libertar
				strcpy(historia[116].historia,"Aaron:N�o, apesar de tudo eu sei que no fundo eles me amam,ent�o apenas me deixe em paz...");
				strcpy(historia[117].historia,"Sigo com minha vida e sinto muita dor pelo meu corpo, o m�dico da vila diz que tenho s�rios");
				strcpy(historia[117].historia,"problemas f�sicos gra�as ao esfor�o sobre-humano que realizei e que se em hip�tese eu tivesse");
				strcpy(historia[117].historia,"parado de fazer tais atividades al�m do meu limite h� 10 anos eu n�o estaria dessa forma e me");
				strcpy(historia[117].historia,"receita um rem�dio. Ap�s isso vou para casa com muita dor e penso se devo mesmo tomar esse rem�dio,");
				strcpy(historia[118].historia,"j� que a morte para mim j� � algo certeiro.");
				strcpy(historia[119].historia,"Voc� vai tomar o rem�dio?(1) Sim, n�o morrerei sem lutar.(2) N�o, minha morte j� � algo certo.");
//				scanf("%i",&chat);
//				if(chat==1){
					strcpy(historia[120].historia,"Come�o a sentir dor e deito-me no ch�o da minha casa com meus pais sem dar import�ncia,");
					strcpy(historia[120].historia,"sinto a minha respira��o cada vez mais fraca...");
					strcpy(historia[121].historia,"=====================================VOC� MORREU=====================================");
//				}else if(chat==2){
					strcpy(historia[122].historia,"Come�o a sentir dor e deito-me no ch�o da minha casa com meus pais sem dar import�ncia,");
					strcpy(historia[120].historia,"sinto a minha respira��o cada vez mais fraca...");
					strcpy(historia[123].historia,"=====================================VOC� MORREU=====================================");

  
  

/*
texto historia
/*
*/

 int i;
  ///BITMAPS
  BITMAP* buffer = create_bitmap(SCREEN_W, SCREEN_H);

  ///GAME LOOP
  while(!exit_program && !exit_screen)
  {
     while(ticks > 0 && !exit_program && !exit_screen)
     {
      //INPUT
      if(key[KEY_ESC])
       fecha_programa();

      //UPDATE

  //destroy_bitmap(buffer);// DESTROI A IMAGEM
 if(i < 86){
      for(i = 0; i < 86; ){// loop para roda o struct da historia
     
      if(i<5){
			
      draw_sprite(buffer, narracao_inicio , 0, 0);// IMAGEM do primeiro fundo
      
	play_sample(som_teste, 255,128,1000,0); // comeca o som
      
	}else if(i<7){
		
		draw_sprite(buffer, imagem_one , 0, 0);// IMAGEM DE FUNDO teste
		
	}else if(i<10){
		
		
//	play_sample(som_menu, 255,128,1000,0); // comeca o som
		
	//	destroy_sample(som_menu);//DESTROI som
		
		
	draw_sprite(buffer, imagem_gruta , 0, 0);// IMAGEM DE FUNDO 
	
	}else if(i<24){
		draw_sprite(buffer, seta, posicao_seta_x,posicao_seta_y[posicao_menu_batalha]);

		//seta para cima    enquanto pocicao 0 ele nao diminui evitando existir um menu -1
		//basicamente ele muda o valor de uma variavel
		if(key[KEY_UP]){
			if(posicao_menu_batalha == 0);}//{
		
		if(key[KEY_DOWN]){
			if(posicao_menu_batalha == 2);}//{}else{posicao_menu_batalha += 1;}}
		
		if(key[KEY_SPACE]){if(menu_seleciona == 3){menu_seleciona = posicao_menu_batalha;}}
		
		if(menu_seleciona == 0){
			textprintf_centre_ex(buffer, font, 600, 400, 0, -1,"Galinha");
		
		}
	}
		//}else{
		
		//rectfill(buffer, 0, 650, SCREEN_W/1, 545 ,0x00000);
		
	//	}
      textprintf_centre_ex(buffer, font, SCREEN_W/2, 555, 0xFFFFFF, -1,"%s", historia[i].historia);// mostra na tela a historia
     
      draw_sprite(screen, buffer, 0, 0);//para o fundo
    
      clear_to_color(buffer, makecol(255,255,255));
   /* 
       rectfill(buffer, 0, 650, SCREEN_W/1, 545 ,0x00000);
   	  */
	if(key[KEY_SPACE]){
		// quando aperta espa�o ele faz ir a historia
	i++;
	
     rest(500);
     // Fim do if do espa�o
		 }else{
		
		clear_to_color(buffer, makecol(255,255,255));
		
		}
  
  		}//fim do for do loop 
	}//fim do if
	
     ticks--;
	}//fim do segundo while
}//fim do primeiro while

  ///FINALIZA?O
  destroy_bitmap(buffer);
  
}

void titlescreen()
{
  int exit_screen = FALSE;

  ///BITMAPS
  BITMAP* buffer = create_bitmap(SCREEN_W, SCREEN_H);

  ///GAME LOOP
  while(!exit_program && !exit_screen)
  {
     while(ticks > 0 && !exit_program && !exit_screen)
     {
      //INPUT
      if(key[KEY_ENTER])
      {
        exit_screen = TRUE;
        screen_state = MAINMENU;
      }

     draw_sprite(buffer, logo_menu, 0, 0);// IMAGEM do menu

	 textprintf_centre_ex(buffer, font, SCREEN_W/2, SCREEN_H/2, 0xFFFFFF, -1,"iniciar jogo", time);
     draw_sprite(screen, buffer, 0, 0);// IMAGEM
     clear_to_color(buffer, makecol(255,255,255));

     ticks--;
     }
  }

  ///FINALIZA?O
  destroy_bitmap(buffer);// DESTROI A IMAGEM
  destroy_sample(som_menu);//DESTROI som
}


int main()
{
  init();

  while(!exit_program)
  {
     if(screen_state == MAINMENU)
       mainmenu();

     else if(screen_state == TITLESCREEN)
       titlescreen();
  }

  return 0;
}
END_OF_MAIN();
