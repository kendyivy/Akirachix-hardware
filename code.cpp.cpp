body{ 
   background-color: green;
}
p{
	color:blue;
	text-align: right
}
h1{
	font-size: 20px;
}   color:yellows
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


using namespace std,
int main ()
{

    int x=0;
    for (int i= 0; i < 5; i ++){
    cout << ++x;
    cout << "\n";
    }
    
    x=0;
    
    for(int i=0; i<5;i++){

    cout<<x++;
    cout<<"\n";
    }


    return 0;
}
 
 



