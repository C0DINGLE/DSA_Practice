#include<iostream>
#include <vector>
using namespace std;
vector<vector<int> > minesweeper(vector<vector<bool> > matrix)
{
  int sum = 0;
  vector<int> col;
  col.push_back(0);
  col.push_back(0);
  col.push_back(0);
  
  vector<vector<int> > rows;
  rows.push_back(col);
  rows.push_back(col);
  rows.push_back(col);
  for (int i = 0; i < matrix.size(); i++)
  {
    for (int j = 0; j < matrix[0].size(); j++)
    {
      if (i == 0)
      {
        if(j == 0)
        {
          if (matrix[i][j + 1])
          {
            sum++;
          }
          if (matrix[i + 1][j + 1])
          {
            sum++;
          }
          if (matrix[i + 1][j])
          {
            sum++;
          }
        }
        if(j == matrix[0].size()-1)
        {
          if (matrix[i][j - 1])
          {
            sum++;
          }
          if (matrix[i + 1][j - 1])
          {
            sum++;
          }
          if (matrix[i + 1][j])
          {
            sum++;
          }
        }
        else
        {
          if (matrix[i][j + 1])
          {
            sum++;
          }
          if (matrix[i][j - 1])
          {
            sum++;
          }
          if (matrix[i + 1][j - 1])
          {
            sum++;
          }
          if (matrix[i + 1][j + 1])
          {
            sum++;
          }
          if (matrix[i + 1][j])
          {
            sum++;
          }
        }
      }
      if (i == matrix.size() - 1)
      {
        if(j == 0)
        {
            if (matrix[i][j + 1])
          {
            sum++;
          }
          if (matrix[i - 1][j])
          {
            sum++;
          }
          if (matrix[i - 1][j + 1])
          {
            sum++;
          }
        }
        if(j == matrix[0].size()-1)
        {
          if (matrix[i][j - 1])
          {
            sum++;
          }
          if (matrix[i - 1][j - 1])
          {
            sum++;
          }
          if (matrix[i - 1][j])
          {
            sum++;
          }
        }
        else
        {
          if (matrix[i][j + 1])
          {
            sum++;
          }
          if (matrix[i][j - 1])
          {
            sum++;
          }
          if (matrix[i - 1][j - 1])
          {
            sum++;
          }
          if (matrix[i - 1][j])
          {
            sum++;
          }
          if (matrix[i - 1][j + 1])
          {
            sum++;
          }
        }
      }
      else
      {
        if(j == 0)
        {
          if (matrix[i][j + 1])
          {
            sum++;
          }
          if (matrix[i - 1][j])
          {
            sum++;
          }
          if (matrix[i - 1][j + 1])
          {
            sum++;
          }
          if (matrix[i + 1][j + 1])
          {
            sum++;
          }
          if (matrix[i + 1][j])
          {
            sum++;
          }
        }
        if(j == matrix[0].size()-1)
        {
          if (matrix[i][j - 1])
          {
            sum++;
          }
          if (matrix[i - 1][j - 1])
          {
            sum++;
          }
          if (matrix[i - 1][j])
          {
            sum++;
          }
          if (matrix[i + 1][j - 1])
          {
            sum++;
          }
          if (matrix[i + 1][j])
          {
            sum++;
          }
        }
        else
        {
          if (matrix[i][j + 1])
          {
            sum++;
          }
          if (matrix[i][j - 1])
          {
            sum++;
          }
          if (matrix[i - 1][j - 1])
          {
            sum++;
          }
          if (matrix[i - 1][j])
          {
            sum++;
          }
          if (matrix[i - 1][j + 1])
          {
            sum++;
          }
          if (matrix[i + 1][j - 1])
          {
            sum++;
          }
          if (matrix[i + 1][j + 1])
          {
            sum++;
          }
          if (matrix[i + 1][j])
          {
            sum++;
          }
        }
      }
      col.push_back(sum);
      sum = 0;
    }
    rows.push_back(col);
    col.clear();
  }
  return rows;
}

int main()
{
  vector<bool> mat; 
  vector<vector<bool> > mat2;
  vector<vector<int> > matres;
  mat.push_back(true);
  mat.push_back(false);
  mat.push_back(false);
  mat2.push_back(mat);
  mat.push_back(false);
  mat.push_back(true);
  mat.push_back(false);
  mat2.push_back(mat);
  mat.push_back(false);
  mat.push_back(false);
  mat.push_back(false);
  mat2.push_back(mat);
  matres = minesweeper(mat2);
  return 0;
}
