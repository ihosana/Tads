#include<iostream>
using namespace std;
int main(){ 
	float cotacao, dolar, reais, resultado;    
	cout<<"\n insira o valor da cotacao"<<endl;
    cin >> cotacao;
    cout<<"\n Insira quantitdade de dolares"<<endl;
    cin >> dolar;
	      
    reais = (4.75 + (cotacao)) ;
	resultado=(reais * dolar) ;
    
    cout<<"\n Para reais fica R$"<<resultado;
  
return 0;
}
                 
                      
   
