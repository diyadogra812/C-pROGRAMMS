#include <stdio.h>
char board[3][3];
void init(){char c='1'; for(int i=0;i<3;i++) for(int j=0;j<3;j++) board[i][j]=c++; }
void display(){ for(int i=0;i<3;i++){ printf(" %c | %c | %c\n",board[i][0],board[i][1],board[i][2]); if(i<2) printf("---|---|---\n"); } }
int check(){ for(int i=0;i<3;i++) if(board[i][0]==board[i][1] && board[i][1]==board[i][2]) return 1; for(int i=0;i<3;i++) if(board[0][i]==board[1][i] && board[1][i]==board[2][i]) return 1; if(board[0][0]==board[1][1] && board[1][1]==board[2][2]) return 1; if(board[0][2]==board[1][1] && board[1][1]==board[2][0]) return 1; return 0; }
int main(){
    int player=1, choice, row, col; char mark;
    init();
    do{
        display();
        player=(player%2)?1:2;
        mark=(player==1)?'X':'O';
        printf("Player %d, enter a number (1-9): ", player);
        scanf("%d",&choice);
        row=(choice-1)/3; col=(choice-1)%3;
        if(board[row][col]!='X' && board[row][col]!='O') board[row][col]=mark;
        else{ printf("Invalid move!\n"); player--; }
        if(check()){ display(); printf("Player %d wins!\n", player); break; }
        player++;
    }while(player<=9);
    return 0;
}
