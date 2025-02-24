#include <iostream>

int main() {
  int surv = 16500;
          int drinkers = surv * 0.15;
          int citrus = drinkers * 0.58;
std::cout << "According to a survey of " << surv << " people approximately " << drinkers << " people buy an energy drink every week and " << citrus << " of those people prefer citrus flavored energy drinks" << std::endl;
}

