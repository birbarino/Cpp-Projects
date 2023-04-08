#include <iostream>
using namespace std;

int main() {
    cout << "endl prints a newline and asks the system to flush the buffer..." << endl;
    cout << "flush just asks the system to flush the buffer (that's it)..." << flush;

    /* According to zyBooks:
        Printing characters from the buffer to the output device (e.g., screen) requires a 
        time-consuming reservation of processor resources. Once the resources are reserved, moving
        characters is fast, whether there is 1 character or 50 characters to print.

        To preserve resources, the system may wait until the output buffer is full, or at least has
        a certain number of characters, before moving the characters to the output device. Or, 
        with fewer characters in the buffer, the system may wait until the resources are not busy. 
        Sometimes a programmer does not want the system to wait. Ex: In a very processor-intensive 
        program, waiting could cause delayed and/or jittery output. 
        
        A common error is to assume that a cout statement is never reached because the output had 
        not been flushed when the program crashed. Ex: If the program crashes on the statement 
        cout << "value is " << someFunction();, the words "value is" will not output because the 
        buffer was not flushed. 
    
    */

    return 0;
}
