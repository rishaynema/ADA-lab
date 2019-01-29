#include<iostream>
using namespace std;
void search(int* a,int n,int s)
{
	int count = 0;
	for(int i=0;i<n;i++)
	{
		count++;
		if(a[i]==s)
		{
		cout << s << " found at index: "<< i;
		cout << " ,time complexity: "<<count;
		cout << endl;
		break;}
	}
}
int main()
{
	cout << "enter the test cases: "<<endl;
	int t;
	cin >> t;
   while(t--)
   {
   	
	int n,s;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
    cin >> a[i];
    cout << "enter the number to be searched: ";
    cin >> s;
    search(a,n,s);
   
   }


}
