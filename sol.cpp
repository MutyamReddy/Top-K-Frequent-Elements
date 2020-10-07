class Solution {
public:
    vector<int> topKFrequent(vector<int>& A, int k) {
       int n=A.size();vector<int>ans;
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> >minh;
        for(int i=0;i<n;i++){
            mp[A[i]]+=1;
        }
        for(auto i:mp){
            minh.push({i.second,i.first});
            if(minh.size()>k){
                minh.pop();
            }
        }
        for(int i=0;i<k;i++){
            ans.push_back(minh.top().second);
            minh.pop();
        }
        return ans;
    }
};
