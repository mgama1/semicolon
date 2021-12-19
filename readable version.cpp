#include <iostream>
#include <cmath>
using namespace std;


void print_circle(){

int xsize=10;
int ysize=10;
int r=5;
string output="";
for (int y=0;y<ysize;y++){
    for(int x=0; x<xsize;x++){
            if ( sqrt(pow(x-xsize/2,2)+pow(y-ysize/2,2))<r ){
                     output+=";;";
            }
            else
            {
                output+="  ";
            }

    }
    output+="\n";
}
cout<<output<<endl;}

void printtail(){
    string tail="";
    for (int L=0;L<6;L++){

        for (int i=6-L;i>0;i--){
                tail+=" ";

        }

         for (int i=6-L;i>0;i--){
                tail+=";";

        }

        tail+="\n";
    }
    cout<<tail<<endl;
}


int main()
{

print_circle();
print_circle();
printtail();



    return 0;
}

