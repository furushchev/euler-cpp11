#include "common.h"

using namespace std;

auto main(int argc, char **argv) -> int {
    vector<int> v = {1,2,3};
    int c = 2;
    while (v[c++] < 4000000) v.push_back(v[c-2] + v[c-1]);
    vector<int> e;
    remove_copy_if(begin(v), end(v), back_inserter(e), [](int n){return n%2;});
    cout << accumulate(begin(e), end(e), 0, [](int x, int y){return x+y;}) << endl;
}

