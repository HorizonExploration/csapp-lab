#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int n;
    cout << "Please enter a integer number to determine the length of the array: "
         << endl;
    cin >> n;
    if(cin.fail()){
        cout << "Please enter a valid integer number." << endl;
        return -1;
    }
    int num[n];
    cout << "Please enter "<< n <<" numbers integer numbers:" << endl;
    double result=0;
    for(int i=0;i<n;i++){
        cout << "Please enter the " << i+1 << " number: ";
        cin >> num[i];
        if(cin.fail()){
            cout << "Please enter a valid integer number." << endl;
            return -1;
        }
        result+=num[i];
    }
    cout << "The result is " << result/(double)n << "." << endl;
    cin.ignore(100,'\n');
    cout << "Piease enter any key to exit." << endl;
    cin.get();
    return 0;
}