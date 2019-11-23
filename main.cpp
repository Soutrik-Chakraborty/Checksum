#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char a[20],b[20];
    char sum[20],complement[20];
    int i;

	cout<<"Enter first binary string\n";
    cin>>a;
    cout<<"Enter second binary string\n";
    cin>>b;

	if(strlen(a)==strlen(b))
    {
        char carry='0';
        int length=strlen(a);

		for(i=length-1;i>=0;i--)
        {
            if(a[i]=='0' && b[i]=='0' && carry=='0')
            {
                sum[i]='0';
                carry='0';
            }
            else if(a[i]=='0' && b[i]=='0' && carry=='1')
            {
                sum[i]='1';
                carry='0';

            }
            else if(a[i]=='0' && b[i]=='1' && carry=='0')
            {
                sum[i]='1';
                carry='0';

            }
            else if(a[i]=='0' && b[i]=='1' && carry=='1')
            {
                sum[i]='0';
                carry='1';

            }
            else if(a[i]=='1' && b[i]=='0' && carry=='0')
            {
                sum[i]='1';
                carry='0';

            }
            else if(a[i]=='1' && b[i]=='0' && carry=='1')
            {
                sum[i]='0';
                carry='1';

            }
            else if(a[i]=='1' && b[i]=='1' && carry=='0')
            {
                sum[i]='0';
                carry='1';

            }
            else if(a[i]=='1' && b[i]=='1' && carry=='1')
            {
                sum[i]='1';
                carry='1';

            }
            else
                break;
        }
        cout<<"\nSum="<<carry<<sum;

        for(i=0;i<length;i++)
        {
            if(sum[i]=='0')
                complement[i]='1';
            else
                complement[i]='0';
        }

		if(carry=='1')
            carry='0';
        else
            carry='1';

	    cout<<"\nChecksum="<<carry<<complement;
    }
    else
        cout<<"\nWrong input strings";

    return 0;
}
