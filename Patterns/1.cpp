#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
/*

n=4
****
****
****
****

*/
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cout << "*";
        }
        cout << endl;
    }
/*    
n=4
1 1 1 1 
2 2 2 2 
3 3 3 3 
4 4 4 4
*/
    for (int i = 1; i <=n;i++){
        for (int j = 1; j <=n;j++){
            cout << i << " ";
        }
        cout << endl;
    }
/*    
n=4
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/
    
    for (int i = 1; i <=n;i++){
        for (int j = 1; j <=n;j++){
            cout << j << " ";
        }
        cout << endl;
    }
/*
n=4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/
    int count = 1;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
/*
n=4
*
**
***
****
*/
    for (int i = 0; i < n;i++){ //rows
        for (int j = 0; j <=i;j++){// cols
            cout << "*" << " ";
        }
        cout << endl;
    }

/*
n=4
1
2 2 
3 3 3 
4 4 4 4
*/
    for (int i = 1; i <=n;i++){
        for (int j = 1; j <= i;j++){
            cout << i << " ";
        }
        cout << endl;
    }

/*
n=4
1
2 3 
4 5 6
7 8 9 10
*/
    int count2 = 1;
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= i;j++){
            cout << count2 << " ";
            count2++;
        }
        cout << endl;
    }
/*
n=4
1
2 3
3 4 5
4 5 6 7
*/
    int count3;
    for (int i = 1; i <=n;i++){
        count3 = i;
        for (int j = 1; j <=i;j++){
            cout << count3<<" ";
            count3++;
        }
        cout << endl;
    }
        return 0;
}
