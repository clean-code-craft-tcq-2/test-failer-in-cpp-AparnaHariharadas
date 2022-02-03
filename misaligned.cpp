#include "misaligned.h"

void majorMinorColourIndexFinder(int major_index, int minor_index)
{
    colour_index_checker = (major_index *COLORMULTIPLIER + minor_index) + 1;
  
}

int printColorMap() {
  
    int i = 0, j = 0;
    for(i = 0; i < COLORMULTIPLIER; i++) {
        for(j = 0; j < COLORMULTIPLIER; j++) {
            majorMinorColourIndexFinder(i,j);
            cout <<std::setw(3)<<std::left<< (i * COLORMULTIPLIER + j) + 1 <<std::left << std::setw(4) << " | " << std::left << std::setw(6) << majorColor[i] << std::left << std::setw(4) << " | " << majorColor[j] << std::left << std::setw(4) << "\n";
        }
    }
    return i *COLORMULTIPLIER + j + 1;
}
