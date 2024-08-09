#include <iostream>
float cel(float);
float far(float);
using namespace std;
int main(){
    float celcius,farenheit,a,b;
    cout<<"Enter the value of Celcius:\n";
    cin>>celcius;
    cout<<"Enter the value of Farenheit:\n";
    cin>>farenheit;
a=cel(celcius);
cout<<"The value in Farnheit is\n "<<a;
b=far(farenheit);
cout<<"The value in Celcius is\n "<<b;
}
float cel(float celcius){
    return (celcius*9/5+32 );
}
float far(float farenheit){
    return(((farenheit-32)*5)/9);
}

