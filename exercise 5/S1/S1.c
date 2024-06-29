#include <stdio.h>

int anagram(char string_1[], char string_2[]);

void main()
{
	char string_1[50], string_2[50];
	
	scanf("%s",&string_1);
	scanf("%s",&string_2);
	
	int control = anagram(string_1,string_2);
	
	if(control == 1) { printf("Stringler anagramdir");}

	else if(control == 0) { printf("Stringler anagram degildir");}

	else { printf("Stringler esit uzunlukta olmadigindan anagram degildir"); }
}

int anagram(char string_1[], char string_2[])
{
	int letters_1[26]={0}, letters_2[26]={0}; 
	int lenght_1=0, lenght_2=0, indis = 0;
	
	while(1)
	{
		if ( string_1[indis] == 0 ) {break;}
		lenght_1++;
		indis++;		
	}
	indis = 0;
	while(1)
	{
		if ( string_2[indis] == 0 ) {break;}
		lenght_2++;
		indis++;		
	}

	if (lenght_1 == lenght_2)
	{
		for(int i=0;i<lenght_1;i++)
		{
			letters_1[string_1[i]-97]++;
		}
		for(int i=0;i<lenght_2;i++)
		{
			letters_2[string_2[i]-97]++;
		}

		int control = 1; 
		for(int i=0 ; i<26 ; i++)
		{
			if(letters_1[i] != letters_2[i]) { return 0 ;}
		}
		
		return 1 ;
	}
	
	else { return 2;}
}