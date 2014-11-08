#include <string>
#include <iostream>
#include "HTML.h"

using namespace std;
using namespace HTML;

int main() {
    html<
        body<
                p<'H', 'e', 'l', 'l', 'o', ',', 'W', 'o', 'r', 'l', 'd'>
            >
        > text;
    cout << text() << endl;

}
