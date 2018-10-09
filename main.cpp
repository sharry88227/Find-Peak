#include <iostream>
using namespace std;

int main()
{
    cin>>int row>>int column;
    int array[row][column],peak=0;
    int* position;//改linked list 應該比較好
    for(int i=1;i<row;i++)
    {
        for(int j=1;j<column;j++)
        {
            cin>>array[i][j];
        }
    }
    for(i=1;i<row-1;i++)
    {
        for(j=0;j<column-1;j++)//最外面那一圈不用找--最外面一圈出大的測資?
        {
            if(array[i][j]>=array[i][j+1])//比右邊的大，右邊那個就可以跳過不找了
            {
                if(j!=0)
                {
                    if(array[i][j]>=array[i+1][j])
                    {
                        if(array[i][j]>=array[i-1][j])
                        {
                            //linked list
                            peak++;
                            j++;
                        }else j++;
                    }else j++;
                }else j++;//如果j=0比j=1大直接跳過
            }
        }
    }
    cout<<peak<<endl;
    for(i=1;i<=peak;i++)
    {
        cout<< +1<< +1<<endl;//比index大1
    }
    return 0;
}





