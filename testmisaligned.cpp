#include "misaligned.h"


void testPrintColorMap(){
    int result = printColorMap();
    assert(result == colour_index_checker);
    cout << "All is well (maybe!)\n";
}
  
int main() {
    testPrintColorMap();
    return 0;
}
