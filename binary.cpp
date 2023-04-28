#include <iostream>
#include <ctime>
#include <algorithm>
#define MAX 10

using namespace std;

int FIRST_POST(int *arr, int search);
int LasT_POST(int *arr, int search);
void Xuat_Arr(int *arr);

int main(){
    system("cls");

    int index[] = {1, 2, 2, 3, 3, 3, 3, 7, 8, 9};

    cout<< endl<< FIRST_POST(index, 3)<< " "<< LasT_POST(index, 3);

}

void Xuat_Arr(int *arr){
    for (int i=0; i < MAX; ++i)
        cout<< arr[i]<<" ";
}
int FIRST_POST(int *arr, int search){
    int l = 0;
    int r = MAX - 1;
    int index = 0;

    while (l <= r){
        int m = (l + r) / 2;
        if (arr[m] == search){
            index = m;
            r = m - 1;
        }
        if (arr[m] > search)
            r = m - 1;
        else l = m + 1;
    }
    return index;
}

int LasT_POST(int *arr, int search){
    int l = 0;
    int r = MAX - 1;
    int index = 0;

    while (l <= r){
        int m = (l + r) / 2;
        if (arr[m] == search){
            index = m;
            l = m + 1;
        }
        if (arr[m] > search)
            r = m - 1;
        else l = m + 1;
    }
    return index;
}
