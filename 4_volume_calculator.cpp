#include <iostream>
using namespace std;

void sphere();
void cylinder();
void cube();

int main(){
    int ch;
    for(;;) {
        cout << "\n 1. Volume of Sphere";
        cout << "\n 2. Volume of Rectangle cube";
        cout << "\n 3. Volume of Cylinder";
        cout << "\n 4. Exit! \n";
        cin >> ch;
        if (ch == 4) 
            break;
        
        switch(ch) {
            case 1: sphere(); break;
            case 2: cube(); break;
            case 3: cylinder(); break;
            case 4: break;
        }
    }
    return 0;
}

void sphere() { 
    float a, r;
    cout << "Enter radius : ";
    cin >> r;
    a = (4/3) * 3.14 * r * r * r;
    cout << "Volume of sphere : " << a << endl;
}

void cylinder() { 
    float a,r,h;
    cout << "Enter radius : ";
    cin >> r;
    cout << "Enter height : ";
    cin >> h;
    a = (1.0/3.0) * 3.14 * r * r * h;
    cout << "Volume of Cylinder : " << a << endl;
}

void cube() { 
    int w,l,h;
    cout << "Enter width : ";
    cin >> w;
    cout << "Enter length : ";
    cin >> l;
    cout << "Enter height : ";
    cin >> h;
    cout << "Volume of rectangle cube : " << w * l * h << endl;
}

// 1. Volume of Sphere
// 2. Volume of Rectangle cube
// 3. Volume of Cylinder
// 4. Exit!