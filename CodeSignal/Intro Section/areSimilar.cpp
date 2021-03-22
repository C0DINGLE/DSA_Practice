#include <iostream>
#include <vector>
#include <set>
using namespace std;

void print(set<int> const &s)
{
    std::copy(s.begin(),
              s.end(),
              std::ostream_iterator<int>(std::cout, " "));
}

bool areSimilar(vector<int> a, vector<int> b)
{
    int count = 0;
    vector<int> c;
    int checkA = 0, checkB = 0;
    if (a.size() == b.size())
    {
        int k = 0;
        for (int i = 0; i < a.size(); i++)
        {

            if (a[i] == b[k])
            {
                k++;
                continue;
            }
            if (a[i] != b[k] && count == 0)
            {
                checkA = a[i];
                checkB = b[k];
                count++;

                cout << i << " " << k << endl;
                cout << a[i] << " " << b[k] << endl;
                cout << checkA << " " << checkB << endl;
                k++;
            }
            else if (a[i] != b[k] && count <= 2)
            {

                cout <<endl << i <<"th unmatch~: " << endl
                     << i << " " << k << endl
                     << checkA << " " << checkB << endl;
                cout << a[i] << " " << b[k];
                if (a[i] == checkB && b[k] == checkA)
                {
                    count++;
                    
                }
                else
                {
                    return false;
                }
                k++;
            }
            if (count > 2)
            {
                return false;
            }
        }
        if (count == 2 || count == 0)
        {
            return true;
        }
        else
            return false;
    }
    else
        return false;
}
bool areSimilarOptimised(std::vector<int> a, std::vector<int> b)
{
    int c = 0;
    set<int> s1;
    set<int> s2;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            c++;
            s1.insert(a[i]);
            s2.insert(b[i]);
        }
    }
    print(s1);
    print(s2);
    if (c == 0)
        return true;
    else if (c == 2 && s1 == s2)
        return true;
    else
        return false;
}
int main()
{
    vector<int> c;
    vector<int> d;
    c.push_back(2);
    c.push_back(3);
    c.push_back(1);
    d.push_back(1);
    d.push_back(3);
    d.push_back(2);
    bool t = areSimilar(c, d);
    cout << "result: " << t;
    return 0;
}
