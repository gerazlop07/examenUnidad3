#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

main()
{
	int i,x,sum,n1,n2;
   cout<<"Introduce numero inicial: ";
   cin>>n1;
   cout<<endl;
   cout<<"Introduce numero final: ";
   cin>>n2;
   cout<<endl;
   if(n1>n2)
   {
		cout<<"Los numeros en este Rango son: "<<abs(x=n2-n1-1)<<endl;
		cout<<endl;
		for(i=n2;i<=n1;i++)
		{
		cout<<i<<" ";
		sum = i - i;
		}
   }
   		else
   		{
   			cout<<"Los numeros en este Rango son: "<<(x=n2-n1+1)<<endl;
			cout<<endl;
			for(i=n1;i<=n2;i++)
   			{
    			cout<<i<<" ";
    			sum = i + i;
   			}
		}
getch();
}
