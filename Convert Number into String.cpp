#include <bits//stdc++.h>

using namespace std;

int main()
{
    int i;
    i = 232324;
    string s;
    stringstream ss(s); // Set a var for stream
    ss << i; // Converts i into stream
    s = ss.str(); // Converts stream ss into string
    cout << s;
    
    return 0;
}
