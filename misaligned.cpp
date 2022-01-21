#include <iostream>
#include <assert.h>

int colour_index_checker;

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

void majorMinorColourIndexFinder(int major_index, int minor_index)
{
    colour_index_checker = major_index * minor_index + 1;
  
}

int printColorMap() {
  
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            majorMinorColourIndexFinder(i,j);
            std::cout << i * 5 + j << " | " << majorColor[i] << " | " << majorColor[j] << "\n";
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    assert(result == colour_index_checker);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
