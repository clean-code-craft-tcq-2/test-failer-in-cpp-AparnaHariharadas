#include "alerter.h"

int networkAlertStub(float celcius) {
    std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
    // Return 200 for ok
    // Return 500 for not-ok
    // stub always succeeds and returns 200
    if (celcius > 100)
    {
          checkalertFailureCount += 1;
          return 500;
    }
    else
        return 200;
    
}

void alertInCelcius(float farenheit) {
    float celcius = (farenheit - 32) * 5 / 9;
    int returnCode = networkAlertStub(celcius);
    if (returnCode != 200) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 1;
    }
}

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
