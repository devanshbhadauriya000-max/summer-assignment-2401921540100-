queue<int> s;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        s.push(t);

        while(s.front() < t-3000)
        {
            s.pop();
        }

        return s.size();