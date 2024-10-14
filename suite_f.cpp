#include <iostream>
using namespace std;
int main(){
    unsigned int n, i, f, f_0, f_1;
    f_0 = 0;
    f_1 = 1;
    cout<<"Entrez le nombre de terme de la suite de fibonacci que vous voulez afficher:";
    cin>>n;
    if(n<2){
        cout << "fib(" <<n <<")=" <<n <<endl;
    }
    else{
        for (i=2; i<=n; i++){
            f = f_0 + f_1;
            f_0 = f_1;
            f_1 = f;
        }
        cout <<"fib(" <<n <<")=" <<f <<endl;
    }
    return 0;
}