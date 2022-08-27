#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<list>
#include<map>
#include<utility>
using namespace std;
bool my_func(int a,int b)
{
    return a > b;
}
int main()
{
    vector<int> vec;
    vector<int>::iterator it;
    vec.push_back(9);
    vec.push_back(61);
    vec.push_back(31);
    vec.push_back(41);
    vec.push_back(19);
    for (int i = 0; i < vec.size();i++)
    {
        cout << vec[i] <<" ";
    }
    //sort(vec.begin(), vec.end(),my_func);
    sort(vec.begin(), vec.begin() + 3, my_func); //sorting only first 3 elements
    cout
        << endl;
    it = vec.begin();
    for (it; it != vec.end();it++)
        cout << *it <<" ";
    cout << endl;
    //-----------sorting array-------------
    int arr[5] = {4, 1, 7, 2, 3};
    sort(arr, arr + 5);
    for (int i = 0; i < 5;i++)
        cout << arr[i]<<" ";
    cout << endl;
    //----------list------------
    cout << "--------------list-------------";
    list<int> mylist;
    mylist.push_back(123);
    mylist.push_back(126);
    mylist.push_back(120);
    mylist.push_back(119);
    
    list<int>::iterator it2;
    for (it2 = mylist.begin(); it2 != mylist.end();it2++)
        cout << *it2<<" ";
    cout << endl;
    cout <<endl<< "inserting in middle of array"<<endl;
    it2 = find(mylist.begin(), mylist.end(), 120);

    cout <<endl<< *it2 << endl;
    mylist.insert(it2, 999);
    for (it2 = mylist.begin(); it2 != mylist.end();it2++)
       cout << *it2<<" ";
    cout << endl
    << "-----removing element from list-------" << endl;
    it2 = find(mylist.begin(), mylist.end(), 126);
    mylist.erase(it2);
    for (it2 = mylist.begin(); it2 != mylist.end();it2++)
       cout << *it2<<" ";
    cout << endl
         << "-------------map-------------" << endl;
    map<string, int> m;
    map<string, int>::iterator it3;
    m["sabbir"] = 3;
    m["miller"] = 6;
    m.insert(make_pair("messi", 10));
    cout << m["sabbir"]<<endl;
    for (it3 = m.begin(); it3 != m.end();it3++)
    {
        cout << it3->first <<" "<<it3->second<< endl;
    }
    cout << endl
         << "-------------pair----------------" << endl;
    //pair<string, int> p;
    //p.first = "sarkar";
    //p.second = 5;
    //p = make_pair("hello", 123);
    //cout << p.first << " " << p.second;
    vector<pair<string, int>> vcc;
    vcc.push_back(make_pair("hezard",43));
    vcc.push_back(make_pair("stirling", 21));
    vector < pair<string, int >> ::iterator it4;
    for (it4 = vcc.begin(); it4 != vcc.end();it4++)
        cout << it4->first << " " << it4->second << endl;
}
