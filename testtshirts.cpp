#include "tshirts.h"


void testTshirtSize(int cms , char expectedSize){
    assert(size(cms) == expectedSize);
    std::cout << "All is well (maybe!)\n";
}

int main() {
    testTshirtSize(37 , 'S');
    testTshirtSize(40 , 'M');
    testTshirtSize(43 , 'L');
    testTshirtSize(38 , 'M');
    return 0;
}
