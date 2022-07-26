#include<iostream>
using namespace std;


int main(){ 
	 int horas, minutos, segundos;   
	 cout<<"Digite os segundos que demorara a festa"<<endl;
     cin >> segundos;
     
     minutos = (segundos /60);
     horas   = (minutos / 60);
     
    cout<<"\n "<<horas;
    cout<<"h:"<<minutos;
    cout<<"m:"<<segundos;
    cout<<"s";
return 0;
}


