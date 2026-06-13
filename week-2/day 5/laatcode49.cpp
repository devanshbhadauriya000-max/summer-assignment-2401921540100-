vector<vector<string>> ans;
        unordered_map<string , vector<string>>umap;

        for(auto x: strs)
        {
            string temp = x;
            sort(x.begin() , x.end());
            umap[x].push_back(temp);
        }

        for(auto x : umap)
        {
            vector<string>temp = x.second;
            ans.push_back(temp);
        }

        return ans;
