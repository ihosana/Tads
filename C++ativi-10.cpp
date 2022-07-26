 #include<iostream>
using namespace std;

int main(){                 
	int a_num, b_num, mult, div, soma, sub ;  
	cout<<"\n Qual sera o valor de A?"<<endl;
    cin >> a_num;
    cout<<"\n Qual sera o valor de B?"<<endl;
    cin >> b_num;
               
    soma=(a_num + b_num);
    mult=(a_num * b_num);
    sub=( a_num - b_num);
    div=(a_num / b_num);
    
    cout<<"\n A soma de A + B = "<<soma;
    cout<<"\n A subtracao de A - B = "<<sub;
    cout<<"\n A subtracao de A * B = "<<mult;
    cout<<"\n A subtracao de A / B = "<<div;  
  
return 0;
}                                 
  
