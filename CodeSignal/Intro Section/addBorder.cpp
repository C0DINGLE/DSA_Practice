#include<iostream>
#include<vector>

using namespace std;
vector<string> addBorder(vector<string> picture) {
    string add = "";
    for(int i = 0; i< picture[0].length()+2; i++)
    {
        add.push_back('*');
    }
    picture.push_back(add);
    picture.push_back(add);
   for(int i = picture.size()-3; i >= 0; i--)
   {
        picture[i].push_back('*');
        picture[i].push_back('*');
        for(int j = picture[0].length()+1; j >= 0; j--)
        {
                picture[i][j+1] = picture[i][j];
        }
        picture[i][0] = '*';
        picture[i+1] = picture[i]; 
   }
   picture[0] = add;
    
    return picture;
}

int main()
{
    vector <string> picture;
    picture.push_back("abc");
    picture.push_back("ded");
    cout << addBorder(picture);
    return 0;
}