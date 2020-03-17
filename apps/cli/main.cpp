#include <iostream>

#include "fmt/format.h"

#include "strings/strings.hpp"

using namespace std;

int main() {
    cout << hello() << "\n";

    std::string s = fmt::format("I'd rather be {1} than {0}.", "right", "happy");

    cout << s << "\n";

    return 0;
}