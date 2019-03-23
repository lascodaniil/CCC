#include <bits/stdc++.h>

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};


using namespace std;
ifstream fin("level1_1.in");
ofstream fout("out.txt");

int main(){

    int x,y,cur_direction=0;
    fin >> x>>y;

    char type;
    int num;
    while(fin>>type>>num){
        if(type == 'F'){
            x += dx[cur_direction]*num;
            y += dy[cur_direction]*num;
        }else {
            cur_direction = (cur_direction+num) % 4;
        }
    }


    fout << x << " " <<y;

   return 0;
}
