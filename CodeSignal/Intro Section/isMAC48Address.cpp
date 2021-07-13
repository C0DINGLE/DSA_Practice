bool isMAC48Address(string inputString) {
    int index = 0;
    int countHyp = 0;
    vector<string> k;
    bool result = true;
    k.push_back(inputString.substr(0,2));
    for(int i = 0; i <= inputString.length(); i++)
    {
        if(inputString[i] == '-' || i==inputString.length()-1)
        {
            countHyp++;
            k.push_back(inputString.substr(i+1, 2));
            if(i==inputString.length()-1 && (inputString[i] != 45))
            {
                countHyp--;
            }
        }
    }

    if(countHyp < 5 || countHyp > 5 )
    {
        return false;
    }
    
    else
    {
        if(k.size() < 6)
        {
            return false;
        }
        for(int i = 0; i < k.size()-1; i++)
        {
            if(((k[i])[0] < 48 || (((k[i])[0]) > 57 && ((k[i])[0]) < 65) || (((k[i])[0]) > 70 )) || ((k[i])[1] < 48 || (((k[i])[1]) > 57 && ((k[i])[1]) < 65) || (((k[i])[1]) > 70 )) || (k[i].length() < 2))
            {
                return false;
            }
            cout << k[i] << result<<endl;
        }
    }
    return true;
}
