
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <random>

using std::cout;
using std::endl;

float funcion(float x);
void MCMC(int N);


int main(){

    MCMC(1000);
    return 0;

}

float funcion(float x){
    return exp(-x*x/2);
}

void MCMC(int N){
    
    srand48(time(0));
    float random1;
    float propuesta;
    int i;
    float r;
    float alpha;
    float x;
    random1 = drand48()*2 - 1;
    for (i=0; i < N; i++){
        propuesta = random1 + drand48()*2 - 1;
        r = funcion(propuesta)/funcion(random1);
        alpha = drand48();
        
        if(r>1){
            r = 1;
        }
        
        if(alpha<r){
            x = propuesta;
        }
        else{
            x = random1;
        }
        cout << x << endl;
        random1 = x;
    }
    
}



