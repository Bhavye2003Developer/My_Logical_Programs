#include<iostream>
#include<string.h>
#include<array>
using namespace std;

void print_name(int n){
    if (n==5) return;
    cout << "Bhavye\n";
    print_name(n+1);
}

void printing_1_to_n(int n){
    if (n==0) return;
    printing_1_to_n(n-1);
    cout << n << " ";
}

void printing_n_to_1(int n){
    if (n==0) return;
    cout << n << " ";
    printing_n_to_1(n-1);
}

void printing_1_to_n_without_increment(int n){
    if (n==0) return;
    printing_1_to_n_without_increment(n-1);
    cout << n << " ";
}

void printing_n_to_1_without_decrement(int n, int a){
    if (a==n+1) return;
    printing_n_to_1_without_decrement(n,a+1);
    cout << a << " ";
    return;
}

int sum_1_to_n(int n, int sum){
    if (n<1) return sum;
    // sum+=n;
    return sum_1_to_n(n-1,sum+n);
}

int sum_1_to_n_2nd_approach(int n){
    if (n==0) return 0;
    return (n+sum_1_to_n_2nd_approach(n-1));
}

int factorial(int n){
    if (n==1) return 1;
    return (n * factorial(n-1));
}


void is_palindrome(string s,int length, int first){
    if (first>length/2) {
        cout << "YES";
        return;
    }
    if (s[first]!=s[length-first]){
        cout << "NO";
        return;
    }
    is_palindrome(s,length,first+1);
}


void reverse_arr(int arr[], int length, int first, int last){
    if (first==last){
        for (int i=0; i<length; i++){
            cout << arr[i] << " ";
        }
        return;
    }
    int temp = arr[first];
    arr[first] = arr[last];
    arr[last] = temp;
    reverse_arr(arr,length,first+1, last-1);
}


void reverse_arr_2nd_approach(int arr[], int length, int first){
    if (first>length/2){
        for (int i=0; i<length+1; i++){
            cout << arr[i] << " ";
        }
        return;
    }
    int temp = arr[first];
    arr[first] = arr[length-first];
    arr[length-first] = temp;
    reverse_arr_2nd_approach(arr,length,first+1);
}


int fibo(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    return fibo(n-1) + fibo(n-2);
}


int main(){
    // int n; cin >> n;
    // string s;
    // cin >> s;
    // printing_n_to_1_without_decrement(n,1);
    // cout << factorial(n);

    // int arr[5] = {1,2,3,4,5};
    // int size_arr = sizeof(arr)/sizeof(arr[0]);

    // cout << size_arr << "\n";
    // is_palindrome(s,s.length()-1,0);
    // is_palindrome(s,0,s.length()-1);
    // reverse_arr_2nd_approach(arr,size_arr-1,0);

    for (int i=0; i<10; i++){
        cout << fibo(i) << " ";
    }

    cout << "\n";
    return 0;
}