#include <iostream>

using namespace std;



int main(){
    int array[11] = {5,1,3,2,8,0,2,3,4,5,5};
    int value,n;

    //mengurutkan array terkecil ke terbesar tanpa membuat array baru
    while(true){
        n = 0;
        for(int i=0;i<(sizeof(array)/sizeof(int));i++){
            if(array[i]>array[i+1] & i != sizeof(array)/sizeof(int)) {
                n++;
                value = array[i];
                array[i] = array[i+1];
                array[i+1] = value;
            }
        }
        if(n == 0){
            break;
        }

    }

    //menampilkan array
    for(int i=0;i<sizeof(array)/sizeof(int);i++){
        cout << array[i] << ", ";
    }
    cout << endl;
    


    return 0;
}