#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int camelcase(string s) {
    int n = s.size();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') cnt++;
    }
    return cnt + 1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
