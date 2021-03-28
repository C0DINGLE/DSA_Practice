#include <iostream>
#include <vector>
using namespace std;
void boxBlur(vector<vector<int> > image)
{
    int sum = 0;
    vector<int> arr;
    vector<vector<int> > imageBlur;
    for (int i = 1; i < image.size() - 1; i++)
    {
        for (int j = 1; j < image[0].size() - 1; j++)
        {
            sum = (floor(image[i - 1][j - 1] + image[i - 1][j] + image[i - 1][j + 1] + image[i][j - 1] + image[i][j] + image[i][j + 1] + image[i + 1][j - 1] + image[i + 1][j] + image[i + 1][j + 1]) / 9);
            arr.push_back(sum);
        }
        imageBlur.push_back(arr);
        arr.clear();
    }
    
    cout << endl;
    for (int i = 0; i < imageBlur.size(); i++)
    {
        for (int j = 0; j < imageBlur[0].size(); j++)
        {
            cout << imageBlur[i][j] << " ";
        }
        cout << endl;
    }
    return imageBlur;
}
int main()
{
    vector<int> fill;
    vector<vector<int> > image;
    fill.push_back(0);
    fill.push_back(18);
    fill.push_back(9);
    image.push_back(fill);
    fill.pop_back();
    fill.pop_back();
    fill.pop_back();
    fill.push_back(27);
    fill.push_back(9);
    fill.push_back(0);
    image.push_back(fill);
    fill.pop_back();
    fill.pop_back();
    fill.pop_back();
    fill.push_back(81);
    fill.push_back(63);
    fill.push_back(45);
    image.push_back(fill);
    boxBlur(image);
    return 0;
}