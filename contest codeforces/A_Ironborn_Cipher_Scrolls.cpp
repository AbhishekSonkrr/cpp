#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    vector <int> a1; 
    int T; cin>>T;//no. of test cases
    

    while(T--)
    {
        int freq=0;
        int N; cin>>N;//no. of elements in sequence 
    
    /* intput the elments */
        int arr[N];
        for(int i=0;i<N;i++)  cin>>arr[i];
    
        int pos=0, pos_c=0;

        while(pos_c<N)
        {   ++freq;
            unordered_map<int,int> m; 
            int i=pos_c;
            for( ;i<N; i++)//to check cipher (first only)
            {
                m[arr[i]]++;
                if (m[arr[i]] == 2) break;

                pos_c= (i==pos_c) ? i+1 : i; 
            }   
        }cout<<freq<<endl;

        while(pos<N)
        {
            unordered_map<int,int> m; 
            int i=pos;
            for( ;i<N; i++)//to check cipher (first only)
            {
                m[arr[i]]++;
                if (m[arr[i]] == 2) break;
                else a1.push_back(arr[i]);
            }
            pos= (i==pos) ? i+1 : i; 
           
            
            cout<<a1.size()<<" ";
            for(int i : a1) cout<<i<<" ";
            cout<<endl;
            a1.clear();
        }
    }
    
    return 0;
}