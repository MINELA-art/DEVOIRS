#include <iostream>
using namespace std;
int main(){
    unsigned int n;
    int i = 1;
    float coord_x = 0;
    float coord_y = 0;
    float somme_x = 0;
    float somme_y = 0;
    float x_final = 0;
    float y_final = 0;
    cout<< " Entrez le nombre de lieux de cambriollage connus:\n" ;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<"Entrez la coordonnée en x du lieu de cambriollage numero"<<i ;
        cin>>coord_x;
        somme_x = somme_x+ coord_x;
    }
    for(i=1;i<=n;i++){
        cout<<"Entrez la coordonnée en y du lieu de cambriollage numero"<<i ;
        cin>>coord_y;
        somme_y = somme_y+ coord_y;
    }
    x_final = somme_x/n;
    y_final = somme_y/n;
    cout<<"le domicile du bandit est probablement au point("<<x_final<<";"<<y_final<<")";
}