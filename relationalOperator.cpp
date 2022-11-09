#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    scanf("%d", &test);
    for(int cs=1; cs<=test;cs++){
        int x,y;
        scanf("%d%d", &x, &y);
        if(x>y){
            printf(">\n");

        }
        else if(x<y){
            printf("<\n");

        }
        else{
            printf("=\n");
        }
    }
    return 0;
}
