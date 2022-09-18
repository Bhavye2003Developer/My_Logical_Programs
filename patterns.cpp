#include<iostream>
using namespace std;


void star_square(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << "* ";
        }
        cout << "\n\n";
    }
}

void star_right_triangle(int n){
    for (int i=1; i<=n; i++){
        for (int j=0; j<i; j++){
            cout << "* ";
        }
        cout << "\n";
    }
}

void number_right_triangle_repeated(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << i << " ";
        }
        cout << "\n";
    }
}


void number_right_triangle(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
}

void star_left_triangle_down(int n){
    for (int i=n; i>=1; i--){
        for (int j=0; j<i; j++){
            cout << "* ";
        }
        cout << "\n";
    }
}

void number_left_triangle_down(int n){
    for (int i=n; i>=1; i--){
        for (int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
}


void star_triangle(int n){
    int space = n-1;
    for (int i=0; i<n; i++){
        for (int j=0; j<space; j++){
            cout << " ";
        }
        for (int j=0; j<2*i+1; j++){
            cout << "*";
        }
        space--;
        cout << "\n";
    }
}


void star_triangle_inverted(int n){
    n--;
    int space = 0;
    for (int i=2*n+1; i>=1; i-=2){
        for (int j=0; j<space; j++){
            cout << " ";
        }
        for (int j=0; j<i; j++){
            cout << "*";
        }
        space++;
        cout << "\n";
    }
}


void star_diamond(int n){
    int space = n-1;
    for (int i=0; i<n; i++){
        for (int j=0; j<space; j++){
            cout << " ";
        }
        for (int j=0; j<2*i+1; j++){
            cout << "*";
        }
        space--;
        cout << "\n";
    }
    n--;
    space = 0;
    for (int i=2*n+1; i>=1; i-=2){
        for (int j=0; j<space; j++){
            cout << " ";
        }
        for (int j=0; j<i; j++){
            cout << "*";
        }
        space++;
        cout << "\n";
    }
}

void star_right_arrow(int n){
    for (int i=1; i<=n; i++){
        for (int j=0; j<i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    n--;
    for (int i=n; i>=1; i--){
        for (int j=0; j<i; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

void zero_one_pattern(int n){
    for (int i=1; i<=n; i++){
        for (int j=0; j<i; j++){
            if (!((i+j)%2)) cout << 0 << " ";
            else{
                cout << 1 << " ";
            }
        }
        cout << "\n";
    }
}

void number_crown(int n){
    int space = (n-1)*2;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << j << " ";
        }
        for (int j=0; j<space; j++){
            cout << "  ";
        }
        space-=2;
        for (int j=i; j>=1; j--){
            cout << j << " ";
        }
        cout << "\n";
    }
}

void number_triangle_cnt(int n){
    int val = 1;
    for (int i=1; i<=n; i++){
        for (int j=0; j<i; j++){
            cout << val << " ";
            val++;
        }
        cout << "\n";
    }
}

void alpha_triangle(int n){
    for (int i=1; i<=n; i++){
        char val = 65;
        for (int j=0; j<i; j++){
            cout << val << " ";
            val++;
        }
        cout << "\n";
    }
}

void alpha_triangle_inverted(int n){
    for (int i=n; i>=1; i--){
        char val = 65;
        for (int j=0; j<i; j++){
            cout << val << " ";
            val++;
        }
        cout << "\n";
    }
}

void alpha_triangle_duplicate_letters(int n){
    char val = 65;
    for (int i=1; i<=n; i++){
        for (int j=0; j<i; j++){
            cout << val << " ";
        }
        val++;
        cout << "\n";
    }
}


void alpha_triangle_mid(int n){
    int space = n-1;
    for (int i=1; i<=n; i++){
        for (int j=0; j<space; j++){
            cout << " ";
        }
        char val = 65;
        for (int j=0; j<i; j++){
            cout << val << "";
            val++;
        }
        val-=2;
        while (val>=65){
            cout << val << "";
            val--;
        }
        space--;
        cout << "\n";
    }
}

void alpha_reverse_triangle(int n){
    int max = 65 + (n - 1);
    for (int i=1; i<=n; i++){
        for (int j=i-1; j>=0; j--){
            cout << char(max - j) << "";
        }
        cout << "\n";
    }
}

void diamond_background_star(int n){
    int space = 1;
    for (int i=n; i>=1; i--){
        for (int j=0; j<i; j++){
            cout << "*";
        }
        for (int j=1; j<space; j++){
            cout << " ";
        }
        for (int j=0; j<i; j++){
            cout << "*";
        }
        space+=2;
        cout << "\n";
    }
    space-=2;
    for (int i=1; i<=n; i++){
        for (int j=0; j<i; j++){
            cout << "*";
        }
        for (int j=1; j<space; j++){
            cout << " ";
        }
        for (int j=0; j<i; j++){
            cout << "*";
        }
        cout << "\n";
        space-=2;
    }
}

void tie_star_pattern(int n){
    int space = (n-1)*2;
    for (int i=1; i<=n; i++){
        for (int j=0; j<i; j++){
            cout << "*";
        }
        for (int j=1; j<=space; j++){
            cout << " ";
        }
        for (int j=0; j<i; j++){
            cout << "*";
        }
        space-=2;
        cout << "\n";
    }
    n--;
    space+=4;
    for (int i=n; i>=1; i--){
        for (int j=0; j<i; j++){
            cout << "*";
        }
        for (int j=1; j<=space; j++){
            cout << " ";
        }
        for (int j=0; j<i; j++){
            cout << "*";
        }
        space+=2;
        cout << "\n";
    }
}

void number_matrix(int n){
    for (int i=n; i>=1; i--){
        for (int j=n; j>=i; j--){
            cout << j << " ";
        }
        for (int j=i-1; j>=1; j--){
            cout << i << " ";
        }
        for (int j=i-1; j>=1; j--){
            cout << i << " ";
        }
        for (int j=i; j<=n; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
    for (int i=2; i<=n; i++){
        for (int j=n; j>=i; j--){
            cout << j << " ";
        }
        for (int j=i-1; j>=1; j--){
            cout << i << " ";
        }
        for (int j=i-1; j>=1; j--){
            cout << i << " ";
        }
        for (int j=i; j<=n; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
}

int main(){

    int n;
    cin >> n;
    number_matrix(n);
    return 0;
}