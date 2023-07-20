#include<iostream>
#include<ctime>
#include<stdlib.h>
#define MAX  100
    using namespace std;

class toatoegame
{
    private:

public:
    int row;
    int column;
    int background[MAX][MAX];
    string Player = "X";
    string Computer = "O";
    void SetupBackground(int &row, int &column){
        cout<<"you want number of row :";
        cin>> row;
        cout<<"you want number of column:";
        cin>> column;       
    }    
};
void DrawLine(toatoegame toe, string space[MAX][MAX]){
    for(int i=0;i<toe.column;i++){
        cout<<"|";
        for(int j=0;j<toe.row;j++){
            cout<<" "<<space[i][j];
        }
    }
}
int main(){
    toatoegame toatoe;
    string space[toatoe.row][toatoe.column];
    toatoe.SetupBackground(toatoe.row, toatoe.column);
    cout<<toatoe.row<<"\n";
    cout<<toatoe.column;
    DrawLine(toatoe,space);
}






