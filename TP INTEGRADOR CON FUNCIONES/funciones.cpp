#include <iostream>
using namespace std;

///tirada///
int tirada(){
    return rand ()% 6+1;
};

///hacer tirada (repetir 3 veces)///
void lanzamiento(int v[6]){
    int x;
    for(x=0; x<6; x++){

    v[x] = tirada();
        }
}

///mostrar tirada///
void mostrarTirada(int dado[6]){
    int y;
    for(y=0; y<6; y++){
    cout << dado[y] << endl;
    }
}

////////////////////


