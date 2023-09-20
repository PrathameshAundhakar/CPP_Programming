#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp = temp * 10;
        temp = temp + arr[i];
    }
    cout << temp << endl;
    int ans = temp + 1;
    cout << ans << endl;
    int d = temp % 10;
    vector<int> output;
    for(int i=0;i<n+1;i++){
        if(d<=0){
            break;
        }
        output[i]=d;
        temp=temp/10;
        d=temp%10;
    }
    // while (i < n + 1 && d > 0)
    // {
    //     output[i] = d;
    //     temp = temp / 10;
    //     d = temp % 10;
    //     i++;
    // }
    for (int i = 0; i < n + 1; i++)
        cout << output[i] << " ";

    return 0;
}