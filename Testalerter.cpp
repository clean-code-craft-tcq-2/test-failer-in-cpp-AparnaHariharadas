#include "alerter.h"

void testAlerter(void){
    alertInCelcius(400.5);
    alertInCelcius(303.6);
    alertInCelcius(480.5);
    assert(alertFailureCount == checkalertFailureCount);
    std::cout << alertFailureCount << " alerts failed.\n";
    std::cout << "All is well (maybe!)\n";
}

int main() {
    testAlerter();
    return 0;
}
