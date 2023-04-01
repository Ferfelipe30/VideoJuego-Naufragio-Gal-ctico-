#include <cstdlib>
#include <iostream>

using namespace std;

int num;

int main(){
    srand(getpid());
    for (int i = 0; i < 10; i++){
        cout<<rand()<<endl;
    }
    return 0;
}