#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int divizor(int num, int k);

int main() {
    ifstream CufarIn("cufar.in");
    ofstream CufarOut("cufar.out");

    string text{};
    getline(CufarIn, text);

    int p{};
    int n{};

    stringstream ss( text );
    ss >> p >> n;

    int sum{ 0 };
    while(getline(CufarIn, text)) {
        int num{};
        int k{};
        stringstream ss(text);
        ss >> num >> k;

        sum = sum + divizor(num, k);
        cout << sum << " " << num << " " << k << " " << divizor(num, k) << '\n';
    }
    CufarOut << sum;

    CufarIn.close();
    CufarOut.close();
    return 0;
}


bool isPrime(int n){
    if (n <= 1 || ((n > 2) && (n%2 == 0))) return false;

    int cnt{0};
    for (int i = 3; i * i <= n; i += 2) {
        if(n % i == 0) cnt++;
    }
    return (cnt > 2) ? false : true;
}


int divizor(int num, int k){
    int cnt{};
    
    for(int i = 2; i <= num; i++){
        if(num % i == 0 && isPrime(i)) cnt++;

        if(cnt == k) return i;
    }
    return 1;
}