class Solution {
public:
    int majorityElement(vector<int> v) {
        map<int, int>map;
        for(int i=0 ; i<v.size() ; i++){
            map[v[i]]++;
        }
        for(auto it: map){
            if(it.second > (v.size()/2)){
                return it.first;
            }
        }
        return -1;
    }
};
