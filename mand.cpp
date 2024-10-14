#include <iostream>
using namespace std;
int main(){
    unsigned int i = 1;
    unsigned  nbre_iter = 10;
    float cr =0;
    float ci =0;
    float zr=0;
    float zi =0;
    float mod =0;
    cout<<"entrez la partie reelle de C:\n";
    cin>>cr;
    cout<<"entrez la partie imaginaire de C:\n";
    cin>>ci;
    for (i=1; i<=nbre_iter; i++){
        zr = zr*zr-(zi*zi)+cr;
        zi = 2*zr*zi + ci;
        cout<<"\n("<<zr<<";"<<zi<<")";
        if (zr *zr +zi *zi >= 4){
            cout<<"\nle point represente par le nombre" <<zr<<"+" <<(zr)<<"i n'appartient pas a la fractale de Mandelbrot";
            break;
        }
    }
}