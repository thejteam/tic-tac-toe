#include <stdio.h>
#include <stdlib.h>


void showBoard(char board[][3]){//Prints board and after each turn
	int rows,columns;
	for(rows=0;rows<3;rows++){
		for(columns=0;columns<3;columns++){
			printf("%c",board[rows][columns]);
		}
		printf("\n");
	}
}
int main(int argc, char *argv[]) {

	int rows,columns;	
	char input;
	char game[3][3];
  
	for(rows=0;rows<3;rows++){ //initializes game array
		for(columns=0;columns<3;columns+=2){
			game[rows][columns]=' ';
		}
	}
	
	while(1){
		printf("\nEnter (x) or (o): \n");
		scanf("%c",&input);
		printf("Enter row: \n");
		scanf("%d",&rows);
		printf("Enter column: \n");
		scanf("%d",&columns);
		game[rows][columns]=input;
		showBoard(game);
	}

	return 0;
}
