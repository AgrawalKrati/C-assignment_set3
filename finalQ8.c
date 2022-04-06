/*Krati Agrawal
set 3
 Q8: There are two processes, A and B, that can access a common variable x. They can access it in
sequence, A first and then B, or B first then A. But in one day they access it only once. A logbook is
maintained by the OS showing which process accessed x when.
You got a series of entries of the log, but you want to make sure that this log has not been
altered by anyone. Your output is the answer to the question: Is the log valid or not?
Ex: Input: AB, output: Yes
Input: ABAABB, output: No*/

#include <iostream>

using namespace std;

int main()
{

string str;    
bool ans = true;  //answer variable

cin >> str;

for(int i=0;i<str.size();i++){
    if(i%2 == 0 && i!=str.size()-1) 
    {
        if(str[i] == str[i+1])  //to check whether two  processors does not access common variable .        
        {
            ans = false;
        }
    }
}

if(ans == true){
    cout << "YES";
}
else{
    cout << "NO";
}
return 0;
}
