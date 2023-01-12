#include <bits/stdc++.h>
using namespace std;
/*it is a boolean function checkStraightLine() to 
return whether an array of points passed to it forms a straight line*/
bool checkStraightLine(vector <vector <int> > &coordinates)
{
    if(coordinates.size() == 2)
     /*If the array has only 2 points:return true*/
        return true;
        /*Initialize x0 as x-coordinate of first point and y0 as y-coord
        inate of second point. Similarly, (x1 , y1) for coordinates 
        of second point*/
    int x0 = coordinates[0][0] , x1 = coordinates[1][0];
    int y0 = coordinates[0][1] , y1 = coordinates[1][1];
    int dx = x1 - x0 , dy = y1 - y0; // here i find difference and store itin dx &dy.
    for(int i = 2 ; i < coordinates.size() ; i++)
    {
        int x = coordinates[i][0] , y = coordinates[i][1];
        if(dy * (x - x0) != dx * (y - y0))
            return false;/*If dy * (x – x0) is not equal to dx * (y – y0)
return false*/
    }
    return true;
}
int main()
{
    vector <vector <int> > coordinates = {{1 , 2} , {2 , 3} , {3 , 4} , {4 , 5} , {5 , 6}};
    cout << (checkStraightLine(coordinates)); 
}
//Time Complexity: O(N)
//Space Complexity: O(1) 