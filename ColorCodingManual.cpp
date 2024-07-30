#include <iostream>
#include "TelCoColorCoder.h"

void printColorCodingManual() {
    std::cout << "Color Coding Manual:\n";
    for (int i = 1; i <= 25; ++i) {
        TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(i);
        std::cout << "Pair Number: " << i << " - " << colorPair.ToString() << "\n";
    }
}
