#include "tshirts.h"

char size(int cms) {
    char sizeName = '\0';
    if(cms < 38) {
        sizeName = 'S';
    } else if(cms >= 38 && cms < 42) {
        sizeName = 'M';
    } else if(cms >= 42 && cms <=50) {
        sizeName = 'L';
    }
    else {
        sizeName = 'U';
    }
    return sizeName;
}


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
