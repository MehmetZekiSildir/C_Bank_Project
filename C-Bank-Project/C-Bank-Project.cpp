/*

Bu bir bankamatik projesidir.

1-Bakiye Görüntüle
2-Para Yatýr
3-Para Çek
4-Fatura Öde
  -Ýnternet
  -Elektrik
  -Su
5-Çýkýþ

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
			
			printf("1-Bakiye Görüntüle\n2-Para Yatýr\n3-Para Çek\n4-Fatura Öde\n5-Çýkýþ\n");
			printf("Secim Yapýnýz:");scanf("%d", &secim);
			system("CLS");
			if(secim==5){
				
				printf("Hoþçakalýn...");
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
				printf("Yatýrdýðýnýz tutar:%d\n",miktar);
				printf("Güncel bakiyeniz:%d\n",para);
				goto MENU;
				break;
			case 3:
				printf("Miktar giriniz:");
				scanf("%d",&miktar);
				eski_bakiye=para;
				para=para-miktar;
				
				system("CLS");
				
				printf("Eski bakiyeniz:%d\n",eski_bakiye);
				printf("Yatýrdýðýnýz tutar:%d\n",miktar);
				printf("Güncel bakiyeniz:%d\n",para);
				goto MENU;
				break;
			case 4:
				
				for(int j=0;j<1;j++)
				{
					
					printf("1-Ýnternet Faturasý\n2-Elektrik Faturasý\n3-Su Faturasý\n4-Geri Dön\n");
					printf("Ödemek istediðiniz fatura:");
					scanf("%d",&secim2);
						switch(secim2){
							
							case 1:
								para=para-200;
								printf("Faturanýz Ödendi\nGüncel Bakiyeniz:%d\n\n",para);
								j=2;
								goto MENU;
								break;
							case 2:
								para=para-300;
								printf("Faturanýz Ödendi\nGüncel Bakiyeniz:%d\n\n",para);
								goto MENU;
								j=2;
								break;
							case 3:
								para=para-250;
								printf("Faturanýz Ödendi\nGüncel Bakiyeniz:%d\n\n",para);
								goto MENU;
								break;
							case 4:
								goto MENU;
								break;
							
							default:
								printf("Yanlýþ giriþ yaptýnýz.");
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


