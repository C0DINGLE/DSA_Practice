string longestWord(string text) {
    string k;
    vector<string> s;
    bool space = false;
    for(int i = 0; i <= text.length(); i++)
    {
        if(i == text.length())
        {
            s.push_back(k);
            k.clear();
        }
        if(text[i] < 65 || (text[i] > 90 && text[i] < 97) || text[i] > 122)
        {
            space = true;
            s.push_back(k);
            k.clear();
            
        }
        else
        {
            k+= text[i];
        }
    }
    if(!space)
    {
        return text;
    }
    else 
    {
     string largest;
     largest = s[0];
     for(int i = 0; i < s.size(); i++)
     {
         if(largest.length() < s[i].length())
         {
             largest.clear();
             largest = s[i];
         }
     }
     return largest;
    }
    
}
