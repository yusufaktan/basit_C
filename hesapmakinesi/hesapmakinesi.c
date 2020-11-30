#include <stdio.h>

float toplama(float x, float y){
	return x+y;
}
float cikarma(float x, float y){
	return x-y;
}
float carpma(float x, float y){
	return x*y;
}
float bolme(float x, float y){
	return x/y;
}
int modulo(int sayi1, int sayi2){
	return sayi1%sayi2;
}
int faktoriyel(int sayi1){
	if(sayi1==1)
		return 1;
	return sayi1*faktoriyel(sayi1-1);
}


int main()
{

	char islem;
	float x,y;
	int sayi1,sayi2;
	printf("HOSGELDINIZ\n___________________________");
	printf("\nTOPLAMA                 [A]\nCIKARMA                 [B]\nCARPMA                  [C]\nBOLME                   [D]\nFAKTORIYEL HESAPLAMA    [E]\nMODULO HESAPLAMA        [F]\n___________________________\n");
	printf("\nYAPMAK ISTEDIGINIZ ISLEMI SECINIZ :   \n");
	scanf("%c", &islem);
	
	if (islem == 'A' || islem == 'a'){
		printf("Ilk sayiyi giriniz :  ");
		scanf("%f", &x);
		printf("Ikinci sayiyi giriniz :  ");
		scanf("%f", &y);
		printf("%.2f + %.2f = %.2f\n",x,y,toplama(x,y));
		return 0;
	}

	else if (islem == 'B' || islem == 'b'){
		printf("Ilk sayiyi giriniz :  ");
		scanf("%f", &x);
		printf("Ikinci sayiyi giriniz :  ");
		scanf("%f", &y);
		printf("%.2f - %.2f = %.2f\n",x,y,cikarma(x,y));
		return 0;
	}

	else if (islem == 'C' || islem == 'c'){
		printf("Ilk sayiyi giriniz :  ");
		scanf("%f", &x);
		printf("Ikinci sayiyi giriniz :  ");
		scanf("%f", &y);
		printf("%.2f * %.2f = %.2f\n",x,y,carpma(x,y));
		return 0;
	}

	else if (islem == 'D' || islem == 'd'){
		printf("Ilk sayiyi giriniz :  ");
		scanf("%f", &x);
		printf("Ikinci sayiyi giriniz :  ");
		scanf("%f", &y);
		printf("%.2f / %.2f = %.2f\n",x,y,bolme(x,y));
		return 0;
	}

	else if (islem == 'E' || islem == 'e'){
		printf("Sayi giriniz :  ");
		scanf("%d", &sayi1);
		printf("%d ! = %d\n",sayi1,faktoriyel(sayi1));
		return 0;
	}

	else if (islem == 'F' || islem == 'f'){
		printf("Ilk sayiyi giriniz :  ");
		scanf("%d", &sayi1);
		printf("Ikinci sayiyi giriniz :  ");
		scanf("%d", &sayi2);
		printf("%d ve %d sayilarinin bolumunden kalan : %d\n",sayi1,sayi2,modulo(sayi1,sayi2));
		return 0;
	}

	else
	{
		printf("Hatali giris yaptiniz !\n\n");
	}

}



