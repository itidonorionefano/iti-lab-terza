#include <cmath>
#include "personal_math.h"

using namespace std;

float calculateDelta(float a, float b, float c) {
    return (b * b) - (4 * (a * c));
}

void calculateEquation(float a, float b, float c, float &x1, float &x2) {
    x1 = ((-b) + sqrt(calculateDelta(a, b, c))) / (2 * a);
    x2 = ((-b) - sqrt(calculateDelta(a, b, c))) / (2 * a);
}
