# Master-s-thesis
Config files for my GitHub profile.

#include <iostream>
using namespace std;

int main(){

    int m1,m2;
    double over;
    double x,y,z,xyz;

    cin >> x >> y >> z >> xyz;
    cout << "aaa" << endl;

    double a,b,c,d;
    double e,f,g,h;
    double i = 0;

    while(1){
        for(m1 = 4; m1 <= 16; m1++){ // max of mixer size is 16
            if( m1 % 2 == 1) continue; // mixer size is 2n, over 4

            for(a = 0; a<= m1; a++){ // search a,b,c
            for(b = 0; b<= m1; b++){
            for(c = 0; c<= m1; c++){
            for(d = 0; d<= m1; d++){

                /*if(a == x && b == y && c == z){
                    cout << "dekita" << endl;
                    cout << a << b << c <<endl;
                    cout << m1 << endl;
                }*/

                if(a + b + c + d ==m1){ // loop exprosion
                    for(m2 = 4; m2 <= 16; m2++){ // max of mixer size is 16

                        //cout <<"aab"<<endl;
                    
                        if( m2 % 2 == 1) continue; // mixer size is 2n, over 4
                        
                        for(over = 1; over <= m1 - 1; over++){
                            for(e = 0; e <= m2; e++){
                            for(f = 0; f <= m2; f++){
                            for(g = 0; g <= m2; g++){
                            for(h = 0; h <= m2; h++){
                                if(e + f + g + h + over == m2 && a + (double) m1/over * e == x && b + (double) m1/over * f == y && c + (double) m1/over * g == z && d + (double)m1/over * h ==xyz){
                                    cout << "dekita" << i << endl;
                                    cout << "a:" << a << " " << "b:" << b << " " << "c:" << c << " " << "d:" << d << " " << "e:" << e << " " << "f:" << f << " " << "g:" << g << " " <<"h:" << h << endl;
                                    cout << "m1:" << m1 << " " << "m2:" << m2 << " " << "over:" << over << endl;
                                    i++;
                                }
                            }
                            }   
                            }
                            }
                        }
                        
                    }
                    //cout << a << b << c <<endl;
                }
            }
            }   
            }
            }
        }
        break;
    }
return 0;
}
