#include <iostream>
using namespace std;

int main()
{
    cin>>int row>>int column;
    int array[row][column],peak=0;
    int* position;//��linked list ���Ӥ���n
    for(int i=1;i<row;i++)
    {
        for(int j=1;j<column;j++)
        {
            cin>>array[i][j];
        }
    }
    for(i=1;i<row-1;i++)
    {
        for(j=0;j<column-1;j++)//�̥~�����@�餣�Χ�--�̥~���@��X�j������?
        {
            if(array[i][j]>=array[i][j+1])//��k�䪺�j�A�k�䨺�ӴN�i�H���L����F
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
                }else j++;//�p�Gj=0��j=1�j�������L
            }
        }
    }
    cout<<peak<<endl;
    for(i=1;i<=peak;i++)
    {
        cout<< +1<< +1<<endl;//��index�j1
    }
    return 0;
}





