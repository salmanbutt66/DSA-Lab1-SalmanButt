#include <iostream>
#include <vector>

using namespace std;

vector<int> findIndices(int *ptr, int key, int size){
    vector<int> indices;

    for (int i = 0; i < size; i++)
    {
        if (key == ptr[i])
        {
            indices.push_back(i);
        }
    }
    return indices;

}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    
    cout << "Enter elements of array: ";
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int key;
    cout << "Enter key to search: ";
    cin >> key;

    vector<int>indices = findIndices(arr, key, n);
    for (int i : indices)
    {
        cout << i << " ";
    }
    
    return 0;

}