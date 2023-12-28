#include<iostream>
#include<windows.h>
using  namespace std;
int main()
{
   int hour,minut,second,limit,stat;
   limit=stat=0;
   while(limit==0)
   {
    cout<<" enter the hour "<<endl;
    cin>>hour;
    cout<<" enter the minut"<<endl;
    cin>> minut;
    cout<<" enter the second"<<endl;
    cin>>second;
    if(hour<24 && minut<60 && second<60)
    {
        limit++;
    }
    else
    {
        system("cls");

    }

   }
   while(stat==0)
   {
     system("cls");
     cout<<"hour : "<<" minut :"<<" second :"<<endl;
     cout<<"\n"<<hour<<"\t"<<minut<<"\t"<<second<<endl;
     Sleep(100);
     second++;
     if(second>59)
     {
        second=0;
        minut++;
     }
     if(minut>59){
        minut=0;
        hour++;

     }
     if(hour>24)
     {
        hour=0;
     }
   }
    return 0;

}
