/*
convex polygon (100 Marks)
As some of you know, cubism is a trend in art, where the problem of constructing volumetrical shape on a plane with a combination of three-dimensional geometric shapes comes to the fore.
A famous sculptor Cicasso, whose self-portrait you can contemplate, hates cubism. He is more impressed by the idea to transmit two-dimensional objects through three-dimensional objects by using his magnificent sculptures. And his new project is connected with this. Cicasso wants to make a coat for the haters of anticubism. To do this, he wants to create a sculpture depicting a well-known geometric primitive convex polygon.
Cicasso prepared for this a few blanks, which are rods with integer lengths, and now he wants to bring them together. The i-th rod is a segment of length li.
The sculptor plans to make a convex polygon with a nonzero area, using all rods he has as its sides. Each rod should be used as a side to its full length. It is forbidden to cut, break or bend rods. However, two sides may form a straight angle .
Cicasso knows that it is impossible to make a convex polygon with a nonzero area out of the rods with the lengths which he had chosen. Cicasso does not want to leave the unused rods, so the sculptor decides to make another rod-blank with an integer length so that his problem is solvable. Of course, he wants to make it as short as possible, because the materials are expensive, and it is improper deed to spend money for nothing.


Input Format
You will be given a function with integer array as a single argument where n is the length of the array, a number of rod-blanks.


Constraints
3 < = n < = 10^5

Output Format
Return the only integer z the minimum length of the rod, so that after adding it it can be possible to construct convex polygon with (n + 1) vertices and nonzero area from all of the rods.

Sample TestCase 1
Input
3
1 
2 
1
Output
1

Input 2
5
20 4 3 2 1
Output
11
*/

/* Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main(int argc, char *a[])
{
    //Write code here
    int n;
    cin>>n;
    int arr[n],max,res=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i==0){
            max=arr[i];
        }
        else if(max<arr[i]){
            res+=max;
            max=arr[i];
        }
        else{
            res+=arr[i];
        }
    }
    cout<<(max-res+1);
}
