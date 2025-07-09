#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    set<int> C1{ 1,2,3,4,5,6,7,8,9,10 };
    set<int> C2{ 2,4,6,8,10,12,14,16,18,20 };
    set<int> C3{ 10,11,12,13,14,15,16,17,18,19,20 };
    set<int> D;
    set<int> DIF;
    set<int> I;

    // operations on a set
    set_difference(C1.begin(), C1.end(), C3.begin(), C3.end(), inserter(DIF, DIF.cbegin()));
    set_intersection(C2.begin(), C2.end(), C3.begin(), C3.end(), inserter(I, I.begin()));
    set_union(DIF.begin(), DIF.end(), I.begin(), I.end(), inserter(D, D.begin()));

    // output to console
    cout<<"Set D: "
    for (int i : D) {
        cout << i << " ";
    }
    cout << endl;
    cout << "Size " << D.size() << endl;
}