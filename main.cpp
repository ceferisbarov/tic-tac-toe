#include <iostream>
#include <cstdlib>

void play(int player, int& turn, char a[])
{
    std::cin>>player;
    turn++;
for(int i=0;i<9;i++)
    {if((player==i+1)&&(turn%2==1))a[i]='x';
    else if ((player==i+1)&&(turn)%2==0)a[i]='o';}
    std::cout<<a[0]<<a[1]<<a[2]<<'\n'<<a[3]<<a[4]<<a[5]
    <<'\n'<<a[6]<<a[7]<<a[8]<<'\n';                     //shows the updated board
}

int main()
{
char a[10]="123456789";
    std::cout<<a[0]<<a[1]<<a[2]<<'\n'<<a[3]<<a[4]<<a[5]
        <<'\n'<<a[6]<<a[7]<<a[8]<<'\n';                 //this is the playing board
char player;
int turn=0;
while (!(a[0]==a[1]&&a[1]==a[2])&&!(a[1]==a[4]&&a[4]==a[7])
        &&!(a[2]==a[5]&&a[5]==a[8])&&!(a[0]==a[4]&&a[4]==a[8])
        &&!(a[2]==a[4]&&a[4]==a[6])&&!(a[0]==a[3]&&a[3]==a[6])
        &&!(a[1]==a[4]&&a[4]==a[7])&&!(a[2]==a[5]&&a[5]==a[8])&&turn<9)
{play (player, turn, a);}
if(!(a[0]==a[1]&&a[1]==a[2])&&!(a[1]==a[4]&&a[4]==a[7])
   &&!(a[2]==a[5]&&a[5]==a[8])&&!(a[0]==a[4]&&a[4]==a[8])
   &&!(a[2]==a[4]&&a[4]==a[6])&&!(a[0]==a[3]&&a[3]==a[6])
   &&!(a[1]==a[4]&&a[4]==a[7])&&!(a[2]==a[5]&&a[5]==a[8]))std::cout<<"No Winner.";//checks if there is no winner
else if(turn%2==1)std::cout<<"Player 1, CONGRATULATIONS!"<<'\n';
else std::cout<<"Player 2, CONGRATULATIONS"<<'\n';
   system("pause");
return 0;
}
