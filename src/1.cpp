#include "common.h"

using namespace std;

auto main(int argc, char **argv) -> int {
    vector<int> v;
    for (int i = 1; i < 1000; ++i)
        if(i % 3 == 0 || i % 5 == 0) v.push_back(i);
    //for (auto e : v) cout << e << endl;
    cout << accumulate(begin(v), end(v), 0, [](int x, int y){return x+y;}) << endl;
}








