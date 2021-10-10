#include <iostream>
using namespace std;
int main() {

    int num, count = 0;
    int max = num;
    do{
        cin >> num;
    
        if (num != 0)
            count++;
        if (num > max)
            max = num;
        
    } while (num != 0);

    if(count){
      cout << "The biggest number is : " << max << endl;
      cout << "And the count is : " << count << endl;
    } else {
      cout << "bye ;-)" << endl;
}


}
