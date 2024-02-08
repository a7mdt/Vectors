#include "bits/stdc++.h"
using namespace std;

int BiggerThanFive(int i) // this function for the find_if
{
    return i > 5;
}

int main()
{
    // Part3 :

    cout<<"PROJECT_1"<<endl<<endl;
    vector<int>v(5);
    int n=0; // The number that the user will Enter to reSize
    for(int i=0;i<v.size();i++)
    {
        cout<<"Enter Element number "<<i+1<<" : "<<endl;
        cin>>v[i]; //  The user will input 5 values.
        // What if he wants to omput more values ? (reSize)
        if(i==v.size()-1) // v.size()-1 because i=0
        {
            cout << "Continue => Enter ur new Size || End => Type -1"<<endl;
            cin >> n; // The new Size.
            if (n == -1)
                break;
            else
                v.resize(n);
        }
    }
    cout<<"The Vector Elements :  ";
    for(auto it = v.begin() ; it != v.end() ;it++)
    {
        cout<<*it<<" ";
    }

    cout<<"\n--------------------------------------------------------\n";

    // VIP FUNCTIONS :

    // 1) SORTING :
    cout<<"PROJECT_2"<<endl<<endl;
    vector<int>v1= {7,5,1,4,0,6,-1,100};
    cout<<"Values Before Sorting : ";
    for(int i : v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v1.begin(),v1.end());
    cout<<"Values After Sorting (Descending) : ";
    for(int i : v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v1.rbegin(),v1.rend());
    cout<<"Values After Sorting (Ascending) : ";
    for(int i : v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // 2) REVERSING :
    vector<int>v2= {7,5,1,4,0,6,-1,100};
    cout<<"Values Before Reversing : ";
    for(int i : v2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    reverse(v2.begin(),v2.end());
    cout<<"Values After Reversing : ";
    for(int i : v2)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // 3) MIN / MAX :
    // NOTE : u must write the (*) because without it u will get address.
    cout<<"Min Element in the Vector (min_element) : "<<*min_element(v1.begin(),v1.end())<<endl;
    cout<<"Max Element in the Vector (max_element) : "<<*max_element(v2.begin(),v2.end())<<endl;
    auto minmaxIterator = minmax_element(v1.begin(),v1.end());
    cout<<"Min Element in the Vector (minmax_element) : "<<*minmaxIterator.first<<endl;
    cout<<"Max Element in the Vector (minmax_element) : "<<*minmaxIterator.second<<endl;

    // 4) FIND_IF :
    sort(v1.begin(),v1.end());
    auto findIfIterator = find_if(v1.begin(),v1.end(), BiggerThanFive);
    cout<<"Elements Bigger than 5 in the Vector (find_if) : ";
    for(findIfIterator ; findIfIterator != v1.end() ; findIfIterator++ )
        cout<<*findIfIterator<<" ";
    cout<<endl;

    // 5) COPY :
    int arr3[] = {1,2,3,4,5,6,7,8,9,10};
    vector<int>v3(8);
    cout<<"Vector Before Copy :  ";
    for(int i : v3)
        cout<<i<<" ";
    cout<<endl;
    copy(arr3,arr3+8,v3.begin());
    cout<<"Vector After Copy :  ";
    for(int i : v3)
        cout<<i<<" ";
    cout<<endl;

    // 6) PRINTING VALUES WITHOUT LOOP (ostream_iterator) :
    vector<int>v4 = {10,20,30,40,50,60,70,80,90,100} ;
    cout<<"Vector Values without LOOP (ostream_iterator) : ";
    copy(v4.begin(),v4.end(),ostream_iterator<int>(cout," ")); // u can do the same with arrays but u will write (arr,arr+(urSize),.....)

    cout<<"\n--------------------------------------------------------\n";

    return 0;
}
