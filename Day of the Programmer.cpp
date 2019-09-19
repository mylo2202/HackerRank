#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the dayOfProgrammer function below.
string dayOfProgrammer(int year) {
    string result;
    ostringstream ss;
    ss << year;
    string years = ss.str();
    if (year < 1918 && year % 4 == 0) {
        result = "12.09." + years;
    }
    else if (year > 1918 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
        result = "12.09." + years;
    }
    else {
        result = "13.09." + years;
    }
    if (year == 1918)
        result = "26.09.1918";
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

