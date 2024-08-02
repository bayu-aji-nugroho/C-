#include <iostream>
using namespace std;
//kalkulator mengggunakan fungsi

double operasi(double a, double b, char op){
    if(op == '+'){
        return a+b;
    }else if(op == '-'){
        return a-b;
    }else if (op == 'x'){
        return a*b;
    }else if(op == '/'){
        if(b ==0){
            return 0;
        }else{
            return a/b;
        }
    }else{
        return 0;
    }
}

void ui(){
    double a,b;
    char op;
    cout << "selamat datang di program kami \n";
    cout << "masukkan nilai a dan b, terlebih dahulu\n";
    cin >> a,b;
    cout << "ketik operasi (+,-,x,/)\n";
    cin >> op;
    cout << operasi(a,b,op);
}

int main(){
    int val;
    cout << "masukkan jumlah program terulang: \t";
    cin >> val;
    while (0<val)
    {
        ui();
        val +=1;
    }   
}