/*
	Merry Christmas and Happy New Year!!!
	-- This is a program that asks the user the number of gifts they would like.
	-- After picking from the choices, there will be a surprise song.
	-- The program will end if the user does not want any gift.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // this is the header file for the beep and sleep functions that will be used for the song

#define RANDOM_NESS 4 //the lesser the value of RANDOM_NESS, the more random it becomes

// ---------------------------------------------------------------------- Notes
// these notes will be used to play a song

#define C3  130
#define Db3 138
#define D3  146
#define Eb3 155
#define E3  164
#define F3  174
#define Gb3 185
#define G3  196
#define Ab3 207
#define A3  220
#define Bb3 233
#define B3  246
 
#define C4  261
#define Db4 277
#define D4  293
#define Eb4 311
#define E4  329
#define F4  349
#define Gb4 369
#define G4  392
#define Ab4 415
#define A4  440
#define Bb4 466
#define B4  493
 
#define C5  523
#define Db5 544
#define D5  587
#define Eb5 622
#define E5  659
#define F5  698
#define Gb5 739
#define G5  783
#define Ab5 830
#define A5  880
#define Bb5 932
#define B5  987
 
#define C6  1046
#define Db6 1108
#define D6  1174
#define Eb6 1244
#define E6  1318
#define F6  1396
#define Gb6 1479
#define G6  1567
#define Ab6 1661
#define A6  1760
#define Bb6 1864
#define B6  1975
 
#define C7  2093
#define Db7 2217
#define D7  2349
#define Eb7 2489
#define E7  2637
#define F7  2794
#define Gb7 2960
#define G7  3136
#define Ab7 3322
#define A7  3520
#define Bb7 3729
#define B7  3951

#define full 600
#define half full/2
#define double 2*full 
#define quadruple 4*full
 
// ---------------------------------------------------------------------- Melody
// this part will be the sound and lyrics of the song

void intro() // this is the intro of the song entitled "Twelve Days of Christmas"
{
	printf("\nOn "); // this is the first syllable of the intro
    Beep(C4, half); // and this is the note on that first syllable
	printf("the ");
	Beep(C4, half); // the beep function generates a tone with a beep sound
	printf("first ");
	Beep(C4, full); // the beep function accepts two parameters: the frequency and the duration (in milliseconds)
	printf("day ");
    Beep(F4, half); // finishes the sound before it returns to the caller function
	printf("of ");
	Beep(F4, half);
	printf("Christ");
	Beep(F4, full);
	printf("mas ");
	Beep(E4, half);
	printf("\nMy ");
	Beep(F4, half);
	printf("true ");
	Beep(G4, half);
	printf("love ");
	Beep(A4, half);
	printf("sent ");
	Beep(Bb4, half);
	printf("to ");
	Beep(G4, half);
	printf("me");
	Beep(A4, double);
}

void twelveDrummers()
{
	printf("\nTwelve ");
	Beep(C5, full);
	printf("drum");
	Beep(G4, half);
	printf("mers ");
	Beep(A4, half);
	printf("drum");
	Beep(Bb4, half);
	printf("ming,");
	Beep(G4, half);
}

void elevenPipers()
{
	printf("\nEleven ");
	Beep(C5, full);
	printf("pi");
	Beep(G4, half);
	printf("pers ");
	Beep(A4, half);
	printf("pi");
	Beep(Bb4, half);
	printf("ping,");
	Beep(G4, half);
}

void tenLords()
{
	printf("\nTen ");
	Beep(C5, full);
	printf("lords ");
	Beep(G4, half);
	printf("a-");
	Beep(A4, half);
	printf("lea");
	Beep(Bb4, half);
	printf("ping,");
	Beep(G4, half);
}

void nineLadies()
{
	printf("\nNine ");
	Beep(C5, full);
	printf("la");
	Beep(G4, half);
	printf("dies ");
	Beep(A4, half);
	printf("dan");
	Beep(Bb4, half);
	printf("cing,");
	Beep(G4, half);
}

void eightMaids()
{
	printf("\nEight ");
	Beep(C5, full);
	printf("maids ");
	Beep(G4, half);
	printf("a-");
	Beep(A4, half);
	printf("mil");
	Beep(Bb4, half);
	printf("king,");
	Beep(G4, half);
}

void sevenSwans()
{
	printf("\nSeven ");
	Beep(C5, full);
	printf("swans ");
	Beep(G4, half);
	printf("a-");
	Beep(A4, half);
	printf("swim");
	Beep(Bb4, half);
	printf("ming,");
	Beep(G4, half);
}

void sixGeese()
{
	printf("\nSix ");
	Beep(C5, full);
	printf("geese ");
	Beep(G4, half);
	printf("a-");
	Beep(A4, half);
	printf("la");
	Beep(Bb4, half);
	printf("ying,");
	Beep(G4, half);
}
 
void fiveGoldenRings()
{
	Sleep(full);
	
	printf("\nFive ");
	Beep(C5, double);
	printf("gol");
	Beep(D5, full);
	printf("den ");
	Beep(Bb4, full);
	printf("rings,");
	Beep(C5, quadruple);
}
 
void fourCallingBirds()
{
	printf("\nFour ");
	Beep(C5, half);
	printf("ca");
	Beep(Bb4, half);
	printf("lli");
	Beep(A4, half);
	printf("ng ");
	Beep(G4, half);
	printf("birds,");
	Beep(F4, full);
} 

void threeFrenchHens()
{
	printf("\nThree ");
	Beep(Bb4, full);
	printf("French ");
	Beep(D4, full);
	printf("hens,");
	Beep(F4, full);
} 

void twoTurtleDoves()
{
	printf("\nTwo ");
	Beep(G4, half);
	printf("tu");
	Beep(F4, half);
	printf("rt");
	Beep(E4, half);
	printf("le ");
	Beep(D4, half);
	printf("doves, ");
	Beep(C4, full);
	printf("and ");
	Beep(A4, half);
} 

void aPartridge()
{
	
	printf("\nA ");
	Beep(Bb4, half);
	printf("part");
	Beep(C5, full);
	printf("ri");
	Beep(D5, half);
	printf("dge ");
	Beep(Bb4, half);
	printf("in ");
	Beep(A4, half);
	printf("a ");
	Beep(F4, half);
	printf("pear ");
	Beep(G4,full);
	printf("tree.");
	Beep(F4, quadruple);
} 

// ---------------------------------------------------------------------- Christmas Tree
// in this section, we will make a Christmas Tree

void randomLeaf() // this will generate different types of leaves for the tree
{
	char leafType[5] = { '*', '.', 'O', 'o', '+' }; //these are the types of leaves that will be randomly displayed on the tree
	int temp = rand() % RANDOM_NESS; // the value of temp is randomly decided
	if (temp == 0)
		printf("%c ", leafType[rand() % 5]); // if temp is equal to 0, the leaf type is randomly decided
		else
			printf("%c ", leafType[0]); // otherwise, the leaf type will be '*'
}

void christmasTree() // this function makes the actual tree
{
	int n=13; // n is the number of rows
	int i,j,k,m; // i is the row counter, j is the space counter, k is the leaf counter, m is the number of spaces


//printing the first triangle of the tree
	m=n-1;
	for(i=0;i<n;i++) // i is the row number; we work on the top to the bottom row
	{
		for(j=0;j<(m+2*n);j++) // as long as j<(12+(2*13)) or j<38, print blank spaces
		{
			printf(" "); // prints blank spaces
		}
    	m--; // number of spaces should be reduced as the triangle go down
		
		for(k=0;k<=i;k++) // as long as the n number of leaves is less than or equal to the nth row, print a leaf
		{
			randomLeaf(); // random leaf funcion is called to print a random leaf
		}
		printf("\n");
	}

//printing the second triangle of the tree
	m=n-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<((m+2*n)-5);j++) // the "-5" will make the 2nd tringle start with 5 leaves
		{
			printf(" ");
		}
		m--;

		for(k=0;k<(i+6);k++)
		{
			randomLeaf();
		}
		printf("\n");
  }
	
//printing the third triangle of the tree
	m=n-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<((m+2*n)-9);j++) // the "-9" will make the 3rd tringle start with 9 leaves
		{
			printf(" ");
		}
		m--;

		for(k=0;k<(i+10);k++)
		{
			randomLeaf();
		}
		printf("\n");
  }

//printing the log of the tree
	for(i=0;i<(n-n/2);i++)
	{
		for(j=0;j<(3*n-3);j++) // j<((3*13)-3) or j<36
		{
			printf(" ");
		}

    	for(k=0;k<6;k++) // the log will be 6 rows long
		{
			printf("|");
    	}
    printf("\n");
	}
}
 
int main()
{
	int answer,checker ;
 
Begin:
 
	puts("\n                     Merry Christmas and Happy New Year!!!\n"); // this will be the very first sentence and it will be on top of the Christmas tree
	christmasTree(); // the christmas tree function is called to display a static Christmas tree
	puts("\nHow many gifts would you like to receive: \n"); // Thirteen choices for the user are shown
	puts("1. Seventy-eight gifts");
	puts("2. Sixty-six gifts");
	puts("3. Fifty-Five gifts");
	puts("4. Forty-five gifts");
	puts("5. Thirty-six gifts");
	puts("6. Twenty-eight gifts");
	puts("7. Twenty-one gifts");
	puts("8. Fifteen gifts");
	puts("9. Ten gifts");
	puts("10. Six gifts");
	puts("11. Three gifts");
	puts("12. One gift");
	puts("13. I would prefer not receiving anything.\n"); // the thirteenth option can be chosen in order to exit the program
 
	do
	{
		printf("Your answer: ");
		checker = scanf("%d", &answer); // checker is used to determine if the input is between 1 and 13 [inclusive]
		fflush(stdin); // flushes the output buffer
	}
	while(!checker || (answer < 1) || (answer > 13)); // if the input is 0 or less than 1 or more than 13, the user will be asked to answer again
	
	switch (answer) { // cases from 1 to 13 are enumerated below using the switch flow control structure
		case 1:
			intro();
			twelveDrummers();
			elevenPipers();
			tenLords();
			nineLadies();
			eightMaids();
			sevenSwans();
			sixGeese();
			fiveGoldenRings();
			fourCallingBirds();
			threeFrenchHens();
			twoTurtleDoves();
			aPartridge();
 
			system("cls"); // commmands to clear the output screen
			goto Begin; // commands to go back to the beginning

		case 2:
			intro();
			elevenPipers();
			tenLords();
			nineLadies();
			eightMaids();
			sevenSwans();
			sixGeese();
			fiveGoldenRings();
			fourCallingBirds();
			threeFrenchHens();
			twoTurtleDoves();
			aPartridge();
 
			system("cls");
			goto Begin;

		case 3:
			intro();
			tenLords();
			nineLadies();
			eightMaids();
			sevenSwans();
			sixGeese();
			fiveGoldenRings();
			fourCallingBirds();
			threeFrenchHens();
			twoTurtleDoves();
			aPartridge();
 
			system("cls");
			goto Begin;

		case 4:
			intro();
			nineLadies();
			eightMaids();
			sevenSwans();
			sixGeese();
			fiveGoldenRings();
			fourCallingBirds();
			threeFrenchHens();
			twoTurtleDoves();
			aPartridge();
 
			system("cls");
			goto Begin;

		case 5:
			intro();
			eightMaids();
			sevenSwans();
			sixGeese();
			fiveGoldenRings();
			fourCallingBirds();
			threeFrenchHens();
			twoTurtleDoves();
			aPartridge();
 
			system("cls");
			goto Begin;

		case 6:
			intro();
			sevenSwans();
			sixGeese();
			fiveGoldenRings();
			fourCallingBirds();
			threeFrenchHens();
			twoTurtleDoves();
			aPartridge();
 
			system("cls");
			goto Begin;

		case 7:
			intro();
			sixGeese();
			fiveGoldenRings();
			fourCallingBirds();
			threeFrenchHens();
			twoTurtleDoves();
			aPartridge();
 
			system("cls");
			goto Begin;

		case 8:
			intro();
			fiveGoldenRings();
			fourCallingBirds();
			threeFrenchHens();
			twoTurtleDoves();
			aPartridge();
 
			system("cls");
			goto Begin;

		case 9:
			intro();
			fourCallingBirds();
			threeFrenchHens();
			twoTurtleDoves();
			aPartridge();
 
			system("cls");
			goto Begin;

		case 10:
			intro();
			threeFrenchHens();
			twoTurtleDoves();
			aPartridge();
 
			system("cls");
			goto Begin;

		case 11:
			intro();
			twoTurtleDoves();
			aPartridge();
 
			system("cls");
			goto Begin;

		case 12:
			intro();
			aPartridge();
 
			system("cls");
			goto Begin;

		case 13:
			puts("You don't want to receive anything. The program will now end.");
			break; // this breaks from the switch, and consequently ends the program

	}

	return 0;
}
