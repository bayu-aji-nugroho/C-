#include <iostream>
using namespace std;

double n;
void ui();

int main(){
    ui();
    return 0;
}

void Plus(double &aPtr){
    aPtr = aPtr + (aPtr +n);
}

void Minus(double &aPtr){
    aPtr = aPtr -  (aPtr +n);
}

void Times(double &aPtr){
    aPtr = aPtr *  (aPtr +n);
}

void Div(double &aPtr){
    aPtr = aPtr /  (aPtr +n);
}

void ui(){
    double a,b;
    char input;
    cout << "masukkan nilai a dan b" << endl;
    cin >>a; cin >>b;
    n = b-a;
    cout << "+,-,x,/" << endl;
    cin >> input;
    if(input == '+'){
        Plus(a);
    }else if(input == '-'){
        Minus(a);
    }else if(input == 'x'){
        Times(a);
    }else if(input == '/'){
        Div(a);
    }
    cout << "hasil: " << a << endl;


}