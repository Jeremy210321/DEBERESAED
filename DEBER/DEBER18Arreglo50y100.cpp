
#include <iostream>
using namespace std;

void operacion (int a[]);
	int o[10];
	float c[10];
	int arreglo[10], i;

int main ()
{

	for(int i=0;i<10;i++)
	{	
		cout<<"Ingrese el elemento al arreglo: ";
		cin >> o[i];
		if ((o[i]<50)&&(o[i]>100))
		{
			cout<<"Numero erroneo"<<endl;
		}
	}

	operacion (arreglo);
	return 0;
}

void operacion (int a[]){
	for(int i=0;i<10;i++)
	{
		c[i]=o[i]*0.5;
	}
	for(int i=0;i<10;i++)
	{
		cout<<o[i]<<"\t"<<c[i]<<endl;
	}
}
