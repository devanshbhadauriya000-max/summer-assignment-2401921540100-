 stack<char>sample;

        for(auto c : s)
        {
            if(sample.empty())
            {
               sample.push(c);
            }

            else if( (sample.top() == '(' && c == ')') || (sample.top() == '[' && c == ']') || (sample.top() == '{' && c == '}') )
            {
                sample.pop();
            }
            else {
                sample.push(c);
            }
        }

        if(sample.size() == 0)
        return true;

        return false;
        