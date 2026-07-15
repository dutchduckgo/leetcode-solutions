class RandomizedSet {
private:
    vector<int> list;
    unordered_map<int, int> map;
public:
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if (map.count(val)) {
            return false;
        }
        map[val] = list.size(); 
        list.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if (map.count(val)) {
            int idx = map[val];
            list[idx] = list.back();
            map[list.back()] = idx;
            list.pop_back();
            map.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        int r = rand() % list.size();
        return list[r];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
