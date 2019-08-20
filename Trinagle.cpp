#include<stdio.h>
#include<conio.h>

void intersection(int x1,int y1,int x2,int y2)
{

}

void main()
{
    int ar[2][6];
    int n;
    printf("Enter the coordinates: \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<6;j++)
        {
            scanf("%d",ar[i][j]);
        }
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<6;j++)
        {
            counter = counter + intersection(ar[0][i],ar[0][j],ar[1][i],ar[1][j]);
        }
    }
}
