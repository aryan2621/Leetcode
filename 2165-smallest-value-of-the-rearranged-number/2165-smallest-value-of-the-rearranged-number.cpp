class Solution {
public:
   long long smallestNumber(long long num){
	if(num>=0)
	{
		string s=to_string(num);
		sort(s.begin(),s.end());
		if(s[0]=='0')
		{
			int n=s.length();
			for(int i=0;i<n;i++)
			{
				if(s[i]!='0')
				{
					swap(s[0],s[i]);
					break;
				}
			}
		}
		return stoll(s);
	}
	else
	{
		string s=to_string(num).substr(1);
		sort(s.rbegin(),s.rend());
		return stoll("-"+s);
	}
   }
};