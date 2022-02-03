#include <iostream>
#include <assert.h>

int alertFailureCount = 0;
int checkalertFailureCount = 0;

void alertInCelcius(float farenheit);
int networkAlertStub(float celcius);
