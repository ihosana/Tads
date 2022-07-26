#include<iostream>
using namespace std;


int main(){ 
	int num_ano, num_cigarros, valor_caixa, result, unidade_ano, dias ,maco;   
	 cout<<"Ha quantos anos vc fuma?"<<endl;
     cin >> num_ano;
     cout<<"quantos cigarros vc fuma por dia?"<<endl;
     cin >> num_cigarros;
      cout<<"quanto custa uma cartela de cigarro?"<<endl;
     cin >> valor_caixa;
	 
	dias=(num_ano * 370);
	unidade_ano=(num_cigarros * dias);
	
	maco=(unidade_ano/20);   
	
	result=(maco * valor_caixa);        
	   
     
    cout<<"\n Nesses anos vc gastou R$ "<<result;
    cout<<" por "<<maco;
    cout<<" macos de cigarros com ";  
    cout<<""<<unidade_ano;
    cout<<" unidades";
return 0;
}                                 
	
