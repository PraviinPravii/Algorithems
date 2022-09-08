#include <algorithm>
#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
vector<int> A{2,3,3,5,6,7,8};
int s=A.size();
int once=0;
int zeros=0;
int ans=0;
for(int i=0;i<32;i++){
    once=0;
    for(int j=0;j<s;j++){
        if (((A[j]>>i)&1)==1){
            once++;
        }
    }
    zeros=s-once;
    ans+=once*zeros*2;
    
    
}
cout<<ans;

}
	
