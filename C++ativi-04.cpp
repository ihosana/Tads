#include<iostream>
using namespace std;


int main(){ 

	int number, percentual, value;        
	cout<<"\n Informe um percentual"<<endl;
    cin >> percentual;
    cout<<"\n Informe um numero inteiro"<<endl;
    cin >> number;
    value= (number * percentual)/100;
    
	cout<<""<<percentual;
	cout<<"% de "<<number;
    cout<<" e "<< value; 
  
return 0;
}                 
  
