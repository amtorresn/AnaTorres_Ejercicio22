
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#import <random>

using std::cout;
using std::endl;

float funcion(x);
void MCMC(N);


int main(){

    MCMC(1000);
    return 0;

}

float funcion(x){
    return -x*x/2;
}

void MCMC(N){
    
    srand48(time(0));
    float random1;
    float propuesta;
    random1 = drand48()*2 - 1;
    int i;
    for (i=0; i < N; i++){
        propuesta = random1 + drand48()*2 - 1;
        r = funcion(propuesta)/funcion(random1);
        alpha = np.random.random();
        
        if(alpha<r){
            x = propuesta;
        }
        else{
            x = random1;
        }
        cout << x << endl;
    }
    
}



