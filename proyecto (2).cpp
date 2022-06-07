#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

struct personajes{                             
	char nombre[20];
	int pateo; 
	int manos;
	int bloqueo;
};

	personajes p[20]={
		{"Jet Lee",50,48,50},
		{"Jackie Chan",52,50,48},
		{"Conor McGregor",48,46,46},
		{"Jon Jones",34,45,30},
		{"Nate Diaz",34,34,50},
		{"Tony freguson",21,38,23},
		{"Rose Namajunas",50,15,23},
		{"Tatiana Suarez",16,35,13},
		{"Alexa Grasso",50,48, 44},
		{"Randa Markos",49,18,22},
		{"Aspen Ladd",23,28,41},
		{"Yana Kunitsaya",5,16,19},
		{"Marion Reneau",21,30,34},
		{"Sara McMann",12,35,11},
		{"Lina Lansberg",29,19,28},
		{"Jason Statham",10,35,31},
		{"Donnie Yan",15,35,9},
		{"Van Damme",20,20,20},
		{"Steven Seagal",30,30,30},
		{"Jet Li",10,10,10},
	};
	
main(){
int ronda, posicion1, posicion2,cont1, cont2;
 char retrono;
do{
	printf("EQUIPO 1");
	for(int ronda=0;ronda<3;ronda++);{
		posicion1=rand()%19;	
		printf("%s\n", p[posicion1]);
		}
	printf("\n");

	printf("Equipo 2:\n");
	for(int ronda=0 ;ronda<3; ronda++){
		posicion2=rand()%19;	
		printf("%s\n", p[posicion2]);
		}
}

	if(p[posicion1].pateo>p[posicion2].pateo)
		cont1=cont1+1;
	else
		cont2=cont2+1;
	
	
	if (p[posicion1].manos>p[posicion2].manos) 
		cont1=cont1+1;
	else
		cont2=cont2+1;

	if (p[posicion1].bloqueo>p[posicion2].bloqueo) 
		cont1=cont1+1;
	else
		cont2=cont2+1;
	
	printf("\n");
	
	if (cont1>cont2)
	printf("equipo 1 wins");
	else                                                           
	printf("equipo 2 wins");
	
	
	printf("\n");
printf("Preciona r para repetir\n");
		fflush(stdin);
		scanf("%c",&retorno);
	}while(retorno=='R' || retorno=='r');
}
