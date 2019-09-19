#include <iostream>
#include <vector>

using namespace std;
// 23,4,5
// 23 4 5
vector<int> parseints(string str)
{
    int nums = 0;
    vector<int> ints;
    bool negative = false;
    for (int i = 0; i < str.size(); i++){
        if (str[i] == ','){
            if (negative == true) {
                nums = nums * -1;
            }
            ints.push_back(nums);
            nums = 0;
            negative = false;
        }
        else if (str[i] == '-') {
            negative = true;
        }
        else if (i+1 < str.size()) {
            str[i] -= '0';
            nums = nums*10 + str[i];
        }
        else if  (i+1 == str.size() ){
            str[i] -= '0';
            nums = nums*10 + str[i];
            if (negative == true) {
                nums = nums * -1;
            }
            ints.push_back(nums);
        }
    }
    return ints;
}


int main()
{
    string str;
    cin >> str;
    vector <int>intergers = parseints(str);
    for (int i = 0; i < intergers.size(); i++){
        cout << intergers[i] << "\n";
    }
}
