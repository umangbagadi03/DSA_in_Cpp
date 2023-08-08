#include<vector>
using namespace std;
void selectionSort(vector<int>& arr,int n);
{
    for(int i, i<n-1, i++) {   // jo pahila hai usko apan n i consider kar liya aur usko sab se chota mana hai abhi k liye jo i+1 elemnt and uske agey k ha unko hi swap krnege apn isko aisa hi rakhenege ye smj k ki ye sabse chota hai
        int minIndex = i;  //so min index i ko pakda apn n

        for(int j = i+1;, j<n, j++){   // apn n pahle wale ko consider kiya k vo sabse chota ha aur sorted lekin jo next hai usko apan n j liya hai aur j++ krke aagey ja rhe
            if(arr[j]<arr[minIndex]) // lekin agr ye 2 index k agey k hi chote niklna toh 
            minIndex = j;            // toh fhir usko hi minindex consider krna

        }
        swap(arr[minIndex], arr[i]);
    }
}
int main(){
    int arr[] = {100,200,30,40,50,60,70,80};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    SelectionSort(arr, n);
    
    cout << "Sorted Array is : ";
    
    for(int i =0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
