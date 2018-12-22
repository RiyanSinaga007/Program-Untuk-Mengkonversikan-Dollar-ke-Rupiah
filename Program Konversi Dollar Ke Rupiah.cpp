#include<stdio.h>
#include<conio.h>
int main()
{
	
	long rupiah=16500,dollar,kurs;
	printf("program konversi dollar ke rupiah\n");
	printf("masukkan nilai dollar $USD : ");scanf("%d",&dollar);
	kurs=rupiah*dollar;
	printf("kurs = %i * %i = Rp %i",dollar,rupiah,kurs);
	getch();
}
