#include<stdio.h>
#include<string.h>

int main(){
   char row[8][9];
   int enemyScore=0,myScore=0,total;
   for(int i = 0 ; i<8;i++)
   {
       scanf("%s",row[i]);
   }
    for(int a = 0;a<8;a++)
    {
            for(int i = 0;i<9;i++)
        {
            switch (row[a][i])
            {
                case 'P' : myScore+=1;
                    break;
                case 'N' : myScore+=3;
                    break;
                case 'B' : myScore+=3;
                    break;
                case 'R' : myScore+=5;
                    break;
                case 'Q' : myScore+=9;
                    break;
                case 'p' : enemyScore+=1;
                    break;
                case 'n' : enemyScore+=3;
                    break;
                case 'b' : enemyScore+=3;
                    break;
                case 'r' : enemyScore+=5;
                    break;
                case 'q' : enemyScore+=9;
                    break;
                default:
                    break;
            }
        }
    }
    if(myScore-enemyScore!=0)
    {
        printf("%d",myScore-enemyScore);
    }
    else
    {
        printf("equal");
    }
    
}
