#include "headers.h"

void play (int player, int& turn, char a[])
{
    replay: std::cin>>player;             //the player looks at the board and inputs where (which number) he wants to cross out
    turn++;                       //to keep record of the number of terms
    for(int i=0;i<9;i++)
    {
        if((player==i+1)&&(turn%2==1))
        {
            if(a[i]=='x' || a[i]=='o')
            {
                std::cout<<"Overwrite forbidden!";
                turn--;
                goto replay;
            }
            a[i]='x';
        }
        else if ((player==i+1)&&(turn)%2==0)
            a[i]='o';
    }
    display (a);                     //shows the updated board
}

void display (char a[])
{
    std::cout<<a[0]<<a[1]<<a[2]<<'\n'
             <<a[3]<<a[4]<<a[5]<<'\n'
             <<a[6]<<a[7]<<a[8]<<'\n';
}

bool noWinner(char a[])
{
    return (!(a[0]==a[1]&&a[1]==a[2])
            &&!(a[1]==a[4]&&a[4]==a[7])
            &&!(a[2]==a[5]&&a[5]==a[8])
            &&!(a[0]==a[4]&&a[4]==a[8])
            &&!(a[2]==a[4]&&a[4]==a[6])
            &&!(a[0]==a[3]&&a[3]==a[6])
            &&!(a[1]==a[4]&&a[4]==a[7])
            &&!(a[2]==a[5]&&a[5]==a[8]));
}
