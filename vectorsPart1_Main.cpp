#include "bits/stdc++.h"
using namespace std;

int main()
{
    // Part1 :

    vector<int>v(4); // Vector with the size 4 ==> {0,0,0,0}.
    v[0]=10; // v = {10,0,0,0}
    vector<int>v1(4,100); // v1 = {100,100,100,100}.
    vector<int>v2(4,200); // v2 = {200,200,200,200}.
    v1.swap(v2); // v1={200,200,200,200} && v2={100,100,100,100}.
    cout<<"v1.front() : "<<v1.front()<<endl; // 200 ==> The first element in this vector.
    cout<<"v2.back() : "<<v2.back()<<endl; // 100 => The last element in this vector.
    vector<int>v3={1,2,3,4,5};
    v3.push_back(6); // Adding item in a Vector (in the end of the vector).
    cout<<"v3.at(index) : "<<v3.at(3)<<endl; // will print the element in this index(3) ==> 4
    cout<<"v3[index] : "<<v3[4]<<endl; // 5
    // What is the differance between v3.at() & v3[] ?
    // if u passed an index out of the range of the vector : v3.at()=> out_of_range , v3[]=> 0 as default value
    vector<int>v4(v3); // v4 = v3 = {1,2,3,4,5,6}.
    vector<int>v5(100);
    v5.push_back(5);
    cout<<"v5.size() : "<<v5.size()<<endl; // 100 + 1 => its size is 101 (1 for the 5 in the push_back)
    cout<<"v5.capacity() : "<<v5.capacity()<<endl; // when I push_back I will double my first size = 100*2 => 200
    vector<int>v6(100);
    vector<int>v7;
    cout<<"v6.empty() : "<<v6.empty()<<endl; // 0 => False => its Values = 0 (Default).
    cout<<"v7.empty() : "<<v7.empty()<<endl; // 1 => True => its actually empty.
    vector<double>v8 = {22.8, 3, 131.69, 55};
    for(int i=0;i<v8.size();i++)
    {
        cout<<v8[i]<<" ";
    }
    vector<int>v9 = {1,2,3,4};
    v9.push_back(5); // v9={1,2,3,4,5}.
    v9.pop_back(); // v9={1,2,3,4}.

    return 0;
}
