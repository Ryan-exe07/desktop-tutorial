// Online C++ compiler to run C++ program online
#include <iostream>
#include <iomanip>

#define EPSILON_0       +8.85E-12
#define PI              3.141592653
#define ELECTRON_CHARGE -1.602E-19

using namespace std;
int main() {
    float force, q1, q2, r, k;
    // Calculate
    r = 5.5;
    q1 = q2 = abs(ELECTRON_CHARGE);
    k = 1/ (4.0 * PI * EPSILON_0 );
    force = (1/ (4.0 * PI * EPSILON_0 )) * ( (q1 * q2) / (r * r));
    
    cout << "\nCoulomb's constant, k is:" << setprecision (4) << scientific << k;
    cout << "\nForce is:" << setprecision (4) << scientific << force << "N";

    return 0;
}