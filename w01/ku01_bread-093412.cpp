#include <iostream>
#include <vector>
using namespace std;

int main() {
    int ymax, xmax, yblade, xblade;
    cin >> ymax >> xmax >> yblade >> xblade;

    vector<int> ypos(yblade);
    vector<int> ylength(yblade + 1);
    vector<int> xpos(xblade);
    vector<int> xlength(xblade + 1);


    int curry = 0;
    for (int i = 0; i < yblade; i++) {
        cin >> ypos[i];
        ylength[i] = ypos[i] - curry;
        curry = ypos[i];
    }
    ylength[yblade] = ymax - curry;


    int currx = 0;
    for (int i = 0; i < xblade; i++) {
        cin >> xpos[i];
        xlength[i] = xpos[i] - currx;
        currx = xpos[i];
    }
    xlength[xblade] = xmax - currx;

 
    int max1 = 0, max2 = 0;
    for (int i = 0; i <= yblade; i++) {
        for (int j = 0; j <= xblade; j++) {
            int area = ylength[i] * xlength[j];
            if (area > max1) {
                max2 = max1;
                max1 = area;
            } else if (area > max2) {
                max2 = area;
            }
        }
    }

    cout << max1 << " " << max2 << endl;
    return 0;
}
