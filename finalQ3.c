
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int max(int a,int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int count(string s){
int i = 0, res = 0;    
    
    while(i+1<s.size()){
        if(s[i] == '0' && s[i+1] == '1'){
            res++;
            i += 2;
        }
        else{
            i++;
        }
    }
    
return res;    
}

string merge(string even,string odd){
    string ans;
    int n = even.size(),m = odd.size();
    int i=0,j=0,k=0;
    
    while(i<n && j<m){
         if(k%2 == 0){
            ans += even[i];
            i++;
        }
        else{
            ans += odd[j];
            j++;
        }
        k++;
    }
    
    while(i<n){
        ans += even[i];
        i++;
    }
    while(j<m){
        ans += odd[j];
        j++;
    }
    
 return ans;   
}

int main()
{

string s;
cin >> s;

string even;
string odd;

for(int i=0;i<s.size();i++){
    if(i%2 == 0){
        even += s[i];  //to append even character
    }
    else{
       odd += s[i];    // to append odd character
           }
}


sort(even.begin(),even.end());   //to sort the even parity
sort(odd.rbegin(),odd.rend());   //to sort the even parity

string s1 = merge(even,odd);     //merging even and odd

reverse(odd.begin(), odd.end());

string s2 = merge(even,odd);

reverse(even.begin(),even.end());

string s3 = merge(even,odd);

reverse(odd.begin(),odd.end());

string s4 = merge(even,odd);

int count1 = count(s1);     
int count2 = count(s2);
int count3 = count(s3);
int count4 = count(s4);


int ans = max(count1,max(count2,max(count3,count4)));

cout << ans <<endl;
return 0;
}

