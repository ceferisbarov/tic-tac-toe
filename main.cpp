#include "headers.h"

int main()
{
    char a[10]="123456789";
    display(a);

    char player;
    int turn=0;
    while (noWinner(a) && turn<9)
    play (player, turn, a);

    if(noWinner(a))
        std::cout<<"No Winner.";
    else if(turn%2==1)
        std::cout<<"Player 1, CONGRATULATIONS!"<<'\n';
    else
        std::cout<<"Player 2, CONGRATULATIONS"<<'\n';

    return 0;
}
