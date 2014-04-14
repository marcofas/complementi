#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double i;
    double n1,n2;
    cout<<"inserisci l'intervallo n1:"<<endl;
    cin>>n1;
    cout<<"inserisci l'intervallo n2:"<<endl;
    cin>>n2;
    for(i=n1;i<n2;i=0.001)
    {
         if(((i*1)-2*i)==0)
         {
             
             cout<<"esiste nel punto"<<i<<endl;
         }
         else
         {
             cout<<"non esiste nel punto"<<i<<endl;
         }
         system("pause");
         return 0;
    }
}
