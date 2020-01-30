#include<bits/stdc++.h>
#define int long long
#include<fstream>
using namespace std;
int32_t main(){
	int n=0,m=0;
	cin>>n>>m;
	map<int,int,greater<int>> mp;
	for(int i=0;i<m;i++){
		int temp;
		cin>>temp;
		mp.insert(make_pair(temp,i));
	}
	int count=0;
	int slice=0;
	vector<int> vec;
	for(auto it=mp.begin();it!=mp.end();it++){
		if(slice+it->first <= n ){
			count++;
			slice+=it->first;
			vec.push_back(it->second);
		}
		if(slice==n)break;
	}
	int sz=vec.size();
	cout<<sz<<endl;
	sort(vec.begin(),vec.end());
	for(int i=0;i<sz;i++){
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	return 0;
}
