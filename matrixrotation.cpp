#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>a[i][j];
   
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%2d",a[i][j]);
            cout<<" ";
        }
        cout<<endl;
    }
   
    int gap= n-1;
    int temp1,temp2;
    for(int i=0;i<n/2;i++)
       {
           if(gap>0)
        {
            for(int j=i;j<(gap+i);j++)
            {
                temp1=a[j][i+gap];       
                a[j][i+gap] = a[i][j];
                temp2 = a[i+gap][n-j-1];
                a[i+gap][n-j-1] = temp1;
                temp1 = a[n-1-j][i];
                a[n-1-j][i] = temp2;
                a[i][j] = temp1;
            }
            gap=gap-2;
            cout<<"----------------------------------------------------"<<endl;
               for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    printf("%2d",a[i][j]);
                    cout<<" ";
                }
                cout<<endl;
            }
        }
   }
    return 0;
}
