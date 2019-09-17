#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string,pair<int,int> > a,pair<string,pair<int,int> > b){
    if(a.second.first == b.second.first){
        return a.second.second > b.second.second;
    }else{
        return a.second.first > b.second.first;
    }
}

int main()
{
    vector<pair<string,pair<int,int> > > v;
    v.push_back(pair<string,pair<int,int> >("���ѿ�",pair<int,int>(90,19961222)));
    v.push_back(pair<string,pair<int,int> >("�����",pair<int,int>(88,19931222)));
    v.push_back(pair<string,pair<int,int> >("����",pair<int,int>(95,19951222)));
    v.push_back(pair<string,pair<int,int> >("������",pair<int,int>(70,19911222)));
    v.push_back(pair<string,pair<int,int> >("������",pair<int,int>(90,19941222)));

    sort(v.begin(),v.end(),compare);

    for(int i=0;i<v.size();i++){
        cout << v[i].first << ' ';
    }

    return 0;
}
