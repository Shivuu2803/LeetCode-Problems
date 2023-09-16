class MyHashMap 
{
public:
    int BUCKET_SIZE = 1000;
    vector<vector<pair<int, int>>> table;

    MyHashMap() 
    {
        table.resize(BUCKET_SIZE);
    }

    int hash(int key) 
    {
        return key % BUCKET_SIZE;
    }

    void put(int key, int value) 
    {
        int index = hash(key);
        for (auto& x : table[index]) 
        {
            if (x.first == key) 
            {
                x.second = value;
                return;
            }
        }
        table[index].emplace_back(key, value);
    }

    int get(int key) 
    {
        int index = hash(key);
        for (const auto& x : table[index]) 
        {
            if (x.first == key) 
            {
                return x.second;
            }
        }
        return -1;
    }

    void remove(int key) 
    {
        int index = hash(key);
        auto& bucket = table[index];
        for (auto it = bucket.begin(); it != bucket.end(); ++it) 
        {
            if (it->first == key) 
            {
                bucket.erase(it);
                return;
            }
        }
    }
};


/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
