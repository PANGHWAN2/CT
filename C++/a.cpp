//중복제거
// #include <bits/stdc++.h>
// using namespace std;
// map<int, int> mp;
// int main(){
//     vector<int> v{1, 1, 2, 2, 3, 3};
//     for(int i : v){
//         if(mp[i]){
//             continue;
//         }
//         else{
//             mp[i] = 1;
//         }
//     }
//     vector <int> ret;
//     for(auto it : mp){
//         ret.push_back(it.first);

//     }
//     for(int i : ret) cout << i << '\n';
// }

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> v;
// int main(){
//     for(int i = 1; i <=5; i++){
//         v.push_back(i);
//         v.push_back(i);
//     }
//     for(int i : v) cout << i << " ";
//     cout << "\n";
//     auto it = unique(v.begin(), v.end());
//     cout << it - v.begin() << "\n";
//     for(int i : v) cout << i << " ";
//     cout << "\n";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> v {2, 2, 1, 1, 2, 2, 3, 3, 5, 6, 7, 8, 9};
// int main(){
//     sort(v.begin(), v.end());
//     v.erase(unique(v.begin(), v.end()),v.end());
//     for(int i : v) cout << i << " ";
//     cout << "\n";
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int n;
int arr[100];
int m;
int main(){
cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
    return 0;
}