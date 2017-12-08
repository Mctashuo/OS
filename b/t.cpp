#include<stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int pc;
static int temp[320];
void suijishu() 

{   

    int flag=0;     

    cin>>pc;     

    cout<<"******按照要求产生的320个随机数：*******"<<endl;     

    for(int i=0;i<320;i++)  

    {        

        temp[i]=pc;   

        if(flag%2==0) pc=++pc%320;         

        if(flag==1) pc=rand()% (pc-1);         

        if(flag==3) pc=pc+1+(rand()%(320-(pc+1)));         

        flag=++flag%4;   

        printf(" %03d",temp[i]);         

        if((i+1)%10==0) cout<<endl;  

    } 

} 

void pagestring() 

{     
    int page = 4;
    printf("第%2d页",page);
    for(int i=0;i<320;i++)  

    {     

        printf(" %02d",temp[i]/10);        

        if((i+1)%10==0)
        {
            printf("\n");
            if(page < 35)printf("第%2d页",page++);
        }

    } 

} 


int main()
{
    suijishu();
    printf("\n");
    pagestring();
    return 0;
}
