/*

Bu bir bankamatik projesidir.

1-Bakiye G�r�nt�le
2-Para Yat�r
3-Para �ek
4-Fatura �de
  -�nternet
  -Elektrik
  -Su
5-��k��

*/

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

	
int main() 

{
	int secim,secim2,miktar, para = 1000, eski_bakiye;

	setlocale(LC_ALL, "Turkish");
	
    while(true){
    	
    	MENU:
    	
		for (int i = 0; i < 1; i++)
		{
			
			printf("1-Bakiye G�r�nt�le\n2-Para Yat�r\n3-Para �ek\n4-Fatura �de\n5-��k��\n");
			printf("Secim Yap�n�z:");scanf("%d", &secim);
			system("CLS");
			if(secim==5){
				
				printf("Ho��akal�n...");
				break;
			}
			switch (secim) {
			case 1:
				printf("Bakiyeniz:%d TL\n", para);
				goto MENU;
				
				break;
			case 2:
				printf("Miktar giriniz:");
				scanf("%d",&miktar);
				eski_bakiye=para;
				para=para+miktar;
				
				
				system("CLS");
				
				printf("Eski bakiyeniz:%d\n",eski_bakiye);
				printf("Yat�rd���n�z tutar:%d\n",miktar);
				printf("G�ncel bakiyeniz:%d\n",para);
				goto MENU;
				break;
			case 3:
				printf("Miktar giriniz:");
				scanf("%d",&miktar);
				eski_bakiye=para;
				para=para-miktar;
				
				system("CLS");
				
				printf("Eski bakiyeniz:%d\n",eski_bakiye);
				printf("Yat�rd���n�z tutar:%d\n",miktar);
				printf("G�ncel bakiyeniz:%d\n",para);
				goto MENU;
				break;
			case 4:
				
				for(int j=0;j<1;j++)
				{
					
					printf("1-�nternet Faturas�\n2-Elektrik Faturas�\n3-Su Faturas�\n4-Geri D�n\n");
					printf("�demek istedi�iniz fatura:");
					scanf("%d",&secim2);
						switch(secim2){
							
							case 1:
								para=para-200;
								printf("Faturan�z �dendi\nG�ncel Bakiyeniz:%d\n\n",para);
								j=2;
								goto MENU;
								break;
							case 2:
								para=para-300;
								printf("Faturan�z �dendi\nG�ncel Bakiyeniz:%d\n\n",para);
								goto MENU;
								j=2;
								break;
							case 3:
								para=para-250;
								printf("Faturan�z �dendi\nG�ncel Bakiyeniz:%d\n\n",para);
								goto MENU;
								break;
							case 4:
								goto MENU;
								break;
							
							default:
								printf("Yanl�� giri� yapt�n�z.");
								goto MENU;
								j=0;
								break;
							
							
							
							
							
						}
				}
				
			 	break;
			 	
		
	
	
			}
			
		
	
		}
	
		break;
    	
	}
		
	
	return 0;
	
}


