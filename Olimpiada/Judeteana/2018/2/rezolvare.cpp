#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    ifstream FademaIn("fadema.in");
    stringstream ss;

    string line;
    getline(FademaIn, line);

    ss << line;

    int n{}, m{};
    ss >> n >> m;
    ss.clear();

    int panza[n][m];

    for(int j = 0; j < n; j++){
        getline(FademaIn, line);
        ss << line;

        for(int i = 0; i < m; i++){
            ss >> panza[j][i];
        }
        ss.clear();
    }

/*  
*   panza[m][n]
*   
*        m0 m1 m2 m3
*   n0: {0  0  1  0},
*   n1: {1  1  0  0},
*   n2: {1  0  1  0}
*/

    //!panza[j][i]
    for(int i = 0; i < n; i++){
        //? Linia i

        for(int j = 0; j < m; j++){
            //? Coloana j

        }
        
    }




    FademaIn.close();
    //FademaOut.close();
    return 0;
}