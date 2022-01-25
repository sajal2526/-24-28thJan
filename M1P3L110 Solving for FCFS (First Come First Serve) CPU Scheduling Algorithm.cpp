#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int process[4];
    for(int i=0;i<4;i++){
        cin>>process[i];
}
    int wt=0;
    for(int i=0;i<4;i++){
        cout<<"P"<<i+1<<" "<<"("<<"WT="<<wt<<")";
        if(i==3)
        break;
        else
        cout<<","<<" ";
        wt+=process[i];
    }
    return 0;
}