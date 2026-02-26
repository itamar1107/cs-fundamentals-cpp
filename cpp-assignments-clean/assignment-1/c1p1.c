#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//defining the menu fucntion 
void menu(); 
//defining the get ranged integer function 
int getRangedInteger(char prompt[], int min, int max);
//defining the show statistics function 
void showStatistics(int count[], int size);
//defining the draw line function
void drawLine(char c, int count, int newLine);
//defining the draw rectangle function 
void DrawRecatangle();
//defining the draw trapezoid fucntion
void DrawTrapezoid();
//defining the draw rombus function
void DrawRombus();
//defiinig the draw Enhanced square function
void DrawEnhanced(); 
//start main 
void DrawParallelogram(); 
int main(int argc, char *argv[]) {
	
	menu(); //calling the menu fucntion
	int MainMin = 0, MainMax = 6; //declaring integers for minimun and maximun
	char MainPrompt [14] = "please select"; //declaring an array of characters 
	int MainChoice = getRangedInteger(MainPrompt,MainMin,MainMax); //calling the get ranged ineger function and storing its value in mainchoice
	int size = 8; //declaring the size of the maincount array
	int MainCount[size];  //declaring the main count array
	char MainC = '-'; //defiing how the line would look
	int MainNewLine = 1; //defiinf how many lines to go down after the - line
	int countC = 50;//defifing the amount of - 
	int i; 
	for(i=0 ; i<size; i++) //filling the array with zeros; 
		{
			MainCount[i] = 0; 
		} 
				while(MainChoice!=0) //entering the loop as long as the user didnt choose to exit
			{
				switch(MainChoice)
					{
						case 1: 
						MainCount[1]++; //increasin count 
						DrawRecatangle(); //drawing shape
						printf("\n"); //getting one line down
						drawLine(MainC, countC, MainNewLine); //drawing line 
						menu(); //opening menu
						MainChoice = getRangedInteger(MainPrompt,MainMin,MainMax); //getting new integer
						break; 
						case 2:
						MainCount[2]++; //increasing count 
						DrawTrapezoid(); //drawing shape
						printf("\n"); //getting one line down
						drawLine(MainC, countC, MainNewLine); //drwaing line 
						menu(); //opening menu
						MainChoice = getRangedInteger(MainPrompt,MainMin,MainMax);//getting new integer
						break;
						case 3:
						MainCount[3]++; //incresing count
						DrawParallelogram();//drawing shape
						printf("\n"); //getting one line down
						drawLine(MainC, countC, MainNewLine); //drawing line 
						menu(); //opening menue
						MainChoice = getRangedInteger(MainPrompt,MainMin,MainMax); //getting new integer
						break;
						case 4:
						MainCount[4]++; //incresing count
						DrawRombus();//drawing shape
						printf("\n"); //getting one line down
						drawLine(MainC, countC, MainNewLine); //drawing line 
						menu(); //opeining menu
						MainChoice = getRangedInteger(MainPrompt,MainMin,MainMax); //getting new integer
						break;
						case 5:
						MainCount[5]++; //incresing count
						DrawEnhanced();//drawing shape
						printf("\n"); //getting one line down
						drawLine(MainC, countC, MainNewLine); //drawing line 
						menu(); //opening menu
						MainChoice = getRangedInteger(MainPrompt,MainMin,MainMax); //getting new integer
						break;
						case 6:
						MainCount[6]++; //incresing count
						showStatistics(MainCount,size); //showing statistics
						printf("\n"); //getting one line down
						drawLine(MainC, countC, MainNewLine); //drawing line 
						menu(); //opening menu
						MainChoice = getRangedInteger(MainPrompt,MainMin,MainMax); //getting new integer
						break;
					}
			}
				if(MainChoice == 0) //checking if the user decided to exit
						{
							MainCount[0]++;
							showStatistics(MainCount,size); //showing statiscts
							printf("Exiting. Goodbye!"); //ending program 
						}
}
//end main
void menu(){ //decalrnig the menu fucntion
	printf("1.Draw rectangle\n"); //printing the menue
	printf("2.Draw trapezoid\n"); 
	printf("3.Draw parallelogram\n");
	printf("4.Draw rombus\n"); 
	printf("5.Draw square\n"); 
	printf("6.Show usage statistics\n"); 
	printf("0.Exit\n"); 
}
int getRangedInteger(char prompt[], int min, int max){//declaring the get integer function
 	int i; 
 	for(i=0; i<13; i++) //getting the number of choice from the user
 		{
 			printf("%c", prompt[i]); 
		}
		printf("(%d - %d): " ,min, max);
		int choice; 
		scanf("%d", &choice); 
		do //checking if the number is valid
		{
			if(choice < 0 || choice > 6)
			{
				printf("out of range, Try again\n");
				scanf("%d", &choice); 			
			}
		} 
		while(choice < 0 || choice > 6);
		return choice; //returning the users choice to the main
}
void showStatistics(int count[], int size) { //declaring the show statistics function 
	printf("STATISTICS of usage:\n"); //printing title
	int i; 
	for(i=0; i<size; i++) //printing the statitstics
		{
			switch(i){
				case 0:
				printf("                     Exit :   %d\n", count[i]); 
				break;
				case 1:
				printf("                rectangle :   %d\n", count[i]); 
				break; 
				case 2: 
				printf("                trapezoid :   %d\n", count[i]); 
				break; 
				case 3: 
				printf("            parallelogram :   %d\n", count[i]); 
				break; 
				case 4: 
				printf("                   rombus :   %d\n", count[i]); 
				break; 
				case 5: 
				printf("         Enchanced square :   %d\n", count[i]); 
				break; 
				case 6: 
				printf("               statistics :   %d\n", count[i]); 
				break; 
			}
		}
}
void drawLine(char c, int count, int newLine) { //declaring thr draw line function 
	int i; 
	for(i=0; i<count; i++) //printing the line
		{
			printf("%c",c); 
		}
		int j; 
		for(j=0; j<newLine; j++) //moving the amount of rows down
		{
			printf("\n");
		} 
}
void DrawRecatangle(){//declaring the draw rectangle function
	char star ='*'; //setting the first line charactristics
	int line = 10; 
	int space = 1; 
	drawLine(star, line, space); //drawing the first line
	int i,j,lineChange =10;
	for(i=0; i<lineChange; i++)
		{
			for(j=0; j<lineChange; j++)
				{
					if(j==0 || j==lineChange-1)
						{
							drawLine(star, line = 1, space = 0); 
						}
						else
						{
							printf(" "); 	
						}	
				}
				printf("\n"); 	
		} 
		drawLine(star, line=10, space); //draw bottom line
}
void DrawTrapezoid(){ //declaring the draw trapezoid function
	char star = '*'; //setting first charctristics
	int line =5; 
	int space = 1; 
	printf("     "); 
	drawLine(star, line, space); //drawing upper line
	int lineChange=15; 
	int i,j, value1=4, value2=10;
	for(i=1; i<5; i++) //drwaing sides
	{
		for(j=0; j<lineChange; j++)
		{
			if(j == value1 || j == value2)
				{
					drawLine(star, line = 1, space =0); 
				}
				else
				{
					printf(" "); 
				} 
		}
			printf("\n"); 
			value1--; 
			value2++;
	}
	drawLine(star, line=15, space); //drawing bottom line
}
void DrawParallelogram(){ //decalring the draw parallelogram function
	char star = '*'; //setting first charactristics
	int line = 10; 
	int space =1; 
	printf("     "); 
	drawLine(star, line, space); //drawing upper line
	int lineChange=15; 
	int i,j, value1=4, value2=13;
	for(i=1; i<5; i++) //drwaing sides
	{
		for(j=0; j<lineChange; j++)
		{
			if(j == value1 || j == value2)
				{
					drawLine(star, line = 1, space =0); 
				}
				else
				{
					printf(" "); 
				} 
		}
			printf("\n"); 
			value1--; 
			value2--;
	}
	drawLine(star, line=10 , space); //drawing bottom line
}
void DrawRombus(){ //declaring the draw rombus function
	char star ='*'; //setting basic characteristics
	int line = 11; 
	int space = 1; 
	int i, j, value1 = 5, value2 = 5 ,lineChange =11; //setting values for loops   
	for(i=0; i<lineChange/2; i++) // drawing the top half of the rombus
		{
			for(j=0; j<lineChange; j++)
				{
					if(j == value1 || j == value2)
					{
						drawLine(star, line =1, space=0); 					
					}
					else
					{
						printf(" "); 
					}
				}
				printf("\n"); 
				value1--; 
				value2++; 
		}
		int k,l; 
	for(k=0; k<lineChange/2 +1; k++) //drawing the bottom half of the rombus
		{
			for(l=0; l<lineChange; l++)
				{
					if(l == value1 || l == value2)
					{
						drawLine(star, line =1, space=0); 					
					}
					else
					{
						printf(" "); 
					}
				}
				printf("\n"); 
				value1++; 
				value2--; 
		}	
}
void DrawEnhanced(){//defining the draw enhanced function
	char star ='*'; //setting basic characterists
	int line = 10; 
	int space =1; 
	int i, lineChange=10; //setting loop variabales
	for(i=0; i<lineChange; i++){ //drawing top line
		drawLine(star, line = 1, space =0); 
		printf(" "); 
	}
	printf("\n"); 
	int j,k;
	for(j=0; j<lineChange-2; j++) //drawing sides (left and right)
	{
		for(k=0; k<(lineChange*2); k++)
		{
			if(k==0 || k==((lineChange*2)-2))
				{
					drawLine(star, line=1, space=0); 
				}
				else
					{
						printf(" "); 
					}
		}	
		printf("\n");
	 } 
	int l; 
	for(l=0; l<lineChange; l++){ //drawing botoom line
		drawLine(star, line = 1, space =0); 
		printf(" "); 
	}
}
