#include <stdio.h>
#define BOYUT 10
#include <conio.h>
int main ( )
{
		
		int n[ BOYUT ] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 }; 
		int l ;
		int i , j ;
		
		printf("%2s%14s%17s\n","Eleman","Deger","Grafik");
		
			for(i = 0 ; i <=BOYUT-1 ; i++){
				printf("%7d%13d\t",i,n[i]);
				
				for(j= 0 ; j<=n[i];j++)
				{
					printf("%c",'*');
				}
				printf("\n");
			}
			
			
			getchar();
} 