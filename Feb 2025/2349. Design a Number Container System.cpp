class NumberContainers {
private:
    unordered_map<int,int> mp;
    unordered_map<int, priority_queue<int, vector<int>, greater<int>>> lst;
public:
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        mp[index] = number;
        lst[number].push(index);
    }
    
    int find(int number) {
        if(lst.find(number) == lst.end()) return -1;
        while(!lst[number].empty()){
            if(mp[lst[number].top()] == number) return lst[number].top();
            else lst[number].pop();
        }
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */