class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int>ans;
        sort(changed.begin(),changed.end());
        queue<int>q;
        for(auto x:changed){
            if(q.front()!=x){
                ans.push_back(x);
                q.push(2*x);
            }else{
                q.pop();
            }
        }
        if(!q.empty()) return{};
        return ans;
    }
};