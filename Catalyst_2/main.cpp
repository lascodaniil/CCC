#include <bits/stdc++.h>

using namespace std;
ifstream fin("out.txt");
ofstream fout("out1.txt");

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main() {

    int n, m;
    fin >> n >> m;

    int x, y;
    fin >> x >> y;

    int cur_dir = 0;

    char type;
    int num;
    while (fin >> type >> num) {
        if (type == 'F') {
            while (num) {
                fout << x << " " << y << "\n";

                x += dx[cur_dir];
                y += dy[cur_dir];

                --num;
            }
        } else {
            cur_dir = (cur_dir + num) % 4;
        }
    }

    fout << x << " " << y << "\n";
    return 0;
}

