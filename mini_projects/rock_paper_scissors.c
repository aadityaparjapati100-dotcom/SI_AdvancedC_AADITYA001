#include<stdio.h>
int main()
{
    char p1,p2;

    printf("Enter player1 (rock->r /paper-> p /scissor-> s)  ");
    scanf(" %c",&p1);
    printf("Enter player2 (rock-r/paper-p/scissor-s) ");
    scanf(" %c",&p2);
    
    if(p1==p2)
    printf("drow");
     else if(  (p1=='r' && p2=='s') 
            || (p1=='p' && p2=='r')
            || (p1=='s' && p2=='p'))
            {
            printf("player1 wins\n ");
    printf("           ___________\n");
    printf("          '._==_==_=_.'\n");
    printf("          .-\\:      /-.\n");
    printf("         | (|:.     |) |\n");
    printf("          '-|:.     |-'\n");
    printf("            \\::.    /\n");
    printf("             '::. .'\n");
    printf("               ) (\n");
    printf("             _.' '._\n");
    printf("            `\"\"\"\"\"\"\"`\n");
    printf("               ||\n");
    printf("               ||\n");
    printf("          .-========-.\n");
    printf("          |  WINNER  |\n");
    printf("          '----------'\n");
}

    else {
    printf(".     player 2 is the winner\n");
     
    printf("           ___________\n");
    printf("          '._==_==_=_.'\n");
    printf("          .-\\:      /-.\n");
    printf("         | (|:.     |) |\n");
    printf("          '-|:.     |-'\n");
    printf("            \\::.    /\n");
    printf("             '::. .'\n");
    printf("               ) (\n");
    printf("             _.' '._\n");
    printf("            `\"\"\"\"\"\"\"`\n");
    printf("               ||\n");
    printf("               ||\n");
    printf("          .-========-.\n");
    printf("          |  WINNER  |\n");
    printf("          '----------'\n");

}
     return 0;
}