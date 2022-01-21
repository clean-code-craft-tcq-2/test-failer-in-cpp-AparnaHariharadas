#include <iostream>
#include <assert.h>

int colour_index_checker;


const char* majorMinorColourFinder(int major_index, int minor_index)
{
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    const char* major_color = majorColor[major_index];
    const char* minor_color =minorColor[minor_index];
    colour_index_checker = major_index * minor_index + 1;
    return major_color, minor_color;
}

int printColorMap() {
   //char major_col, minor_col;
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            const char* major_col, minor_col, major_col, minor_col = majorMinorColourFinder(i,j);
            std::cout << i * 5 + j << " | " << major_col << " | " << minor_col << "\n";
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
