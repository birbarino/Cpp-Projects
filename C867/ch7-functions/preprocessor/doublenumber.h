// ALWAYS ALWAYS ALWAYS GUARD HEADER FILES TO PREVENT THEM FROM BEING OPENED MULTIPLE TIMES
#ifndef DOUBLENUMBER_H  // If not defined...
#define DOUBLENUMBER_H  // Define filename

int doubleValue(int num) {
    return num * 2;
}

double doubleValue(double num) {
    return num * 2.0;
}

#endif