class MyHashSet 
{
public:
    unordered_set<int> hash;

    void add(int key) 
    {
        hash.insert(key);
    }

    void remove(int key) 
    {
        hash.erase(key);
    }

    bool contains(int key) 
    {
        return hash.find(key) != hash.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
