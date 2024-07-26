class RandomizedCollection {
    private:
    vector<int> nums;
    unordered_map<int, unordered_set<int>> m;
public:
    RandomizedCollection() {
        
    }
    
    bool insert(int val) {
        nums.push_back(val);
        m[val].insert(nums.size()-1);
        return m[val].size() <= 1;
    }
    
    bool remove(int val) {
        if(m[val].size()==0)
        return false;
        int ind = *m[val].begin();
        m[val].erase(ind);

        int tmp=nums.back();
        swap(nums[ind], nums[nums.size()-1]);
        m[tmp].insert(ind);
        m[tmp].erase(nums.size()-1);
        nums.pop_back();
        return true;
    }
    
    int getRandom() {
        return nums[rand()%nums.size()];
    }
};