#include<iostream>
using namespace std;


int main(){ 
	 int ano, mes, dia, dia_mes, dia_ano, soma;   
	 cout<<"Digite sua idade em anos"<<endl;
     cin >> ano;
     cout<<"Digite sua idade em mes"<<endl;
     cin >> mes;
     cout<<"Digite sua idade em dias"<<endl;
     cin >> dia;
     
    dia_mes= (mes * 30);
    dia_ano=( ano * 360);
    soma=( dia_mes + dia_ano + dia);
     
    cout<<"\n sua idade em dias e "<<soma;
    
return 0;
}

