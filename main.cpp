#include "bits/stdc++.h"
using namespace std;

int main()
{
    // Part2 :

    vector<int>v = {10, 20, 30, 40};
    vector<int>::iterator it; // Making iterator. (::)=>Scope , This iterator is like the POINTER.
    // NOTE : WE USE THIS ITERATOR TO ACCESS MY VECTOR..
    it = v.begin(); // We made our iterator cursor the first element in the vector.
    cout<<"*it (begin) : "<<*it<<endl; // u must use the (*) like the pointers.
    cout<<"*v.begin() : "<<*v.begin()<<endl; // u must use the (*) to get a value.
    it++;
    cout<<"*it after it++ : "<<*it<<endl;
    it = v.end(); // out_of_range => it will give you 0 not 40 .
    cout<<"*it (end) : "<<*it<<endl;
    it = v.end()-1;
    cout<<"*it (end-1) : "<<*it<<endl;
    // USING ITERATOR FOR PRINTING VALUES (from begin to end) :
    vector<int>v1 = {1,2,3,4,5,6};
    cout<<"For loop with iterator (begin/end) : ";
    vector<int>::iterator it1 = v1.begin();
    for( it1 ; it1 != v1.end() ; it1++)
    {
        cout<<*it1<<" ";
    }
    cout<<endl;
    // USING CONST ITERATOR FOR PRINTING VALUES (from cbegin to cend) :
    vector<int>v2 = {1,2,3,4,5,6};
    cout<<"For loop with const_iterator (cbegin/cend) : ";
    vector<int>::const_iterator it2 = v2.cbegin();
    for( it2 ; it2 != v2.end() ; it2++)
    {
        cout<<*it2<<" ";
    }
    cout<<endl;
    // USING REVERSE ITERATOR FOR PRINTING VALUES (from rend to rbegin) :
    vector<int>v3 = {1,2,3,4,5,6};
    cout<<"For loop with reverse_iterator (rbegin/rend) : ";
    for(vector<int>::reverse_iterator it3 = v3.rbegin() ; it3 != v3.rend() ; it3++)
    {
        cout<<*it3<<" ";
    }
    cout<<endl;
    // USING CONST REVERSE ITERATOR FOR PRINTING VALUES (from crend to crbegin) :
    vector<int>v4 = {1,2,3,4,5,6};
    cout<<"For loop with const_reverse_iterator (crbegin/crend) : ";
    for(vector<int>::const_reverse_iterator it4 = v4.crbegin() ; it4 != v4.crend() ; it4++)
    {
        cout<<*it4<<" ";
    }
    cout<<endl;
    // another Declarition for the ITERARTOR :
    vector<int>v5 = {100,200,300,400,500,600,700};
    cout<<"For loop with auto iterator : ";
    auto it5 = v5.begin();
    for(it5 ; it5 != v5.end() ; it5++)
    {
        cout<<*it5<<" ";
    }
    cout<<"\n-------------------------------------\n";
    // ADDING , DELETING :
    vector<int>v6 = {2,4,6,8,10,12,14,16,18,20};
    // NOTE: insert == emplace but emplace quicker.
    v6.insert(v6.begin(),0); // v.insert(position,value)
    v6.emplace(v6.end(),22); // v.emplace(position,value)
    v6.erase(v6.end()-1); // remove the last item before the end (20)
    v6.erase(v6.begin(),v6.begin()+2); // removes items from the beggining to the begin+2 [0,2]=>{0,2,4}

    // RESIZE , SHRINK_TO_FIT :
    vector<int>v7(10);
    cout<<"v7.size() 'before' : "<<v7.size()<<endl;
    for(int i=1;i<=v7.size();i++)
        v7[i]=i;
    cout<<"for loop to print v7 items 'before' : ";
    for(int i=1;i<=v7.size();i++)
        cout<<v7[i]<<" ";
    cout<<endl;
    v7.resize(5);
    cout<<"v7.size() 'after' : "<<v7.size()<<endl;
    v7.shrink_to_fit(); // it removes the items after the new size index from the memory.
    cout<<endl;

    return 0;
}
