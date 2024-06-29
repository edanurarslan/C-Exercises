#include <stdio.h>
#include <stdlib.h>


void main()
{
	char array[10][10];
	// Bütün elemanları '.' yapıyoruz.
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			array[i][j] = '.';
		}
	}
	
	// indis_raw ve indis_column : mevcut konumun ( array[indis_raw][indis_column] ) indislerini, letter: basılma sırası gelen harfin ascii değerini, direction : yön numarasını tutuyor.
	int seed , direction, indis_raw=0, indis_column=0 , letter = 65; 
	
	scanf("%d",&seed);
	srand(seed);

	while(1)
	{	
		array[indis_raw][indis_column] = letter; // İlk başta mevcut  konuma sırası gelen harfi yazıyor.
		
		// Programın sonlanması için gereken 2 şart değerlendiriliyor : (1) etrafının dolu olması yada (2) bütün harflerin basılması.
		
		if( array[indis_raw-1][indis_column] != '.' && 
		    array[indis_raw+1][indis_column] != '.' &&
		    array[indis_raw][indis_column-1] != '.' && 
		    array[indis_raw][indis_column+1] != '.' ) {break;}
		
		if (letter == 90) {break;}
		
		// Rastegele bir yön bulunuyor
		
		direction = rand()%4;
		
		// Yönün gösterdiği konum kontrol ediliyor. Yön sınırı yada dolu olan bir konumu gösteriyorsa pas geçiliyor ve döngünün başına gelip yeniden rastgele bir sayıdan yön bulunuyor (Böyle bir durumda aynı harfi tekrar aynı yere yazacağı için bir değişiklik olmaz). Değilse yeni mevcut konum orası oluyor.
		
		if(direction == 0)
		{
			if(indis_raw == 0 || array[indis_raw-1][indis_column] != '.' ) {continue;} 
			else { indis_raw--; }
		}
		
		else if(direction == 1)
		{
			if(indis_raw == 9 || array[indis_raw+1][indis_column] != '.' ) {continue;}
			else { indis_raw++; }
		}

		else if(direction == 2)
		{
			if(indis_column == 9 || array[indis_raw][indis_column+1] != '.' ) { continue;}
			else { indis_column++; }
		}

		else if(direction == 3)
		{
			if(indis_column == 0 || array[indis_raw][indis_column-1] != '.' ) { continue;}
			else { indis_column--; }
		}
		
		letter++; // Mevcut konum değiştiyse sıradaki harfin ascii değeri oluşuyor. 
	}
	
	//YUkarıdakı işlemlere göre düzenlenen 2 boyutlu array imizi 2 boyutlu olarak ekrana yazdırıyoruz.
	
	for(int i=0 ; i<10 ; i++)
	{
		for(int j=0 ; j<10 ; j++)
		{
			printf("%c ",array[i][j]);
			
		}
		printf("\n");
	}
}
