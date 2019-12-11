#include "fusao.h"
#include <allegro.h>

BITMAP *buffer, *main_menu_imagem, *seta, *dialogos_imagem, *teste ;
FONT *f33;
int segundo_roteiro(){
BITMAP *back ;

    short int passar_historia = 1;
    short int escolha = 0;
    short int posicao_menu = 0,menu = 0;
	short int posicao_seta_x = 150 , posicao_seta_y[2]= {391, 440};
    back = load_bitmap("imgs/pobreza.bmp", NULL);
    //textprintf_centre_ex(buffer, font, 400, 300, 0xffffff, -1,"");
    while (passar_historia != 6){
        draw_sprite(buffer ,dialogos_imagem , 0, 0);
        draw_sprite(buffer ,back , 16, 18);
        textprintf_centre_ex(buffer, f33, 400, 300, 0, -1,"");
        
        switch (passar_historia){
        case 1:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Sim,eu aceito,por favor livre-me deste tormento,nao consigo mais suportar tudo isso...");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"O soldado real libertou-me do meu tormento, e disse que me levaria para um lugar seguro.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Andamos durante meia hora, e deparamo-nos com");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"uma velha senhora que, estava parada no meio da rua.");
			break;
        case 2:
            textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"Ela era corcunda, usava um vestido azul turquesa que realcava sua bengala de madeira.");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"Ao perceber nossa presenca ela levantou o rosto e disse olhando nos meus olhos");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Vejo que seu passado");
			textprintf_centre_ex(buffer, f33, 400, 500, 0, -1,"foi tortuoso. Mas seu futuro pode ser gracioso por isso eu lhe ofereco isto...");
		    break;
        case 3:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"ela tirou um anel do bolso este e o anel do imperador boa fortuna ele lhe trara, mas se voce");
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"possuir odio o mal ele lhe trara. Ao terminar de falar, ela coloca um sorriso forcado no rosto.");
			textprintf_centre_ex(buffer, f33, 400, 450, 0, -1,"Eu olho pro guarda sem saber o que fazer, e entao ele me diz: nao aceite,"); 
			break;
		case 4:
			textprintf_centre_ex(buffer, f33, 400, 350, 0, -1,"presentes que sao facas de dois gumes, eles sao muito perigosos, alem do mais voce nao sabe"); 
			textprintf_centre_ex(buffer, f33, 400, 400, 0, -1,"se ela fala a verdade.");
			break;
	//segunda escolha
		case 5:
			draw_sprite(buffer, seta, posicao_seta_x,posicao_seta_y[posicao_menu]);
            if(key[KEY_UP]){if(posicao_menu == 0){}else{posicao_menu -= 1;}}
		    if(key[KEY_DOWN]){if(posicao_menu == 1){}else{posicao_menu += 1;}}
            if(key[KEY_A]){menu = posicao_menu; passar_historia +=1;}
            textprintf_centre_ex(buffer, font, 400, 350, 0, -1,"Voce aceita o presente?");
            textprintf_centre_ex(buffer, font, 400, 400, 0, -1,"Aceito seu presente, obrigado.");
            textprintf_centre_ex(buffer, font, 400, 450, 0, -1,"Nao, obrigado vivo ate hoje sem sorte.");
            textprintf_centre_ex(buffer, font, 400, 500, 0, -1,"Precione A para continuar");
			break;
		

		
		
		
		
		}

        if(key[KEY_SPACE]){if(passar_historia < 5){passar_historia += 1;}}
        draw_sprite(screen, buffer, 0, 0);
		rest(130);
		clear(buffer);

    }
    if(menu == 0){escolha = 1;}
    if(menu == 1){escolha = 2;}
       
    return escolha; 
}
