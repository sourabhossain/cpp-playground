#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
#include <bitset>
#include <functional>
#include <utility>

using namespace std;

#define BOOLEAN_PRINT cout << boolalpha;

int main()
{
    BOOLEAN_PRINT;
    vector<pair<int, bool>> v(4, {0, false});

    for (auto item : v) {
        cout << item.first << " " << item.second << endl;
    }

    return 0;
}
