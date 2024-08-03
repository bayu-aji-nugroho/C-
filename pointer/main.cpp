#include <iostream>
using namespace std;


void kuadrat(int *aPtr){
    //Nilai dari addres aPtr = nilainya sendiri dikuadratkan.
    (*aPtr) = *aPtr * *aPtr;
}

void Kuadrat(int &a){
    a = a*a;
}

int main(){
    //mendefinisikan pointer
    int a = 5;
    int *aPtr = &a; //&x didefinisikan sebagai nama addres dari x
    cout << aPtr <<' '<<*aPtr << endl;

    // reference
    int &b = a;
    cout << b << "  " << &b << endl;
    //fungsi dengan pointer
    kuadrat(&a);
    cout << b << endl;

    //fungsi dengan reference
    Kuadrat(b);
    cout << b;

    return 0;
}
