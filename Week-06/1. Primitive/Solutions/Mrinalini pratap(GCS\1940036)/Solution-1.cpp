void upper_string(string s)
{
 for(int i=0;s[i]!='\0';i++)
 {
    if(s[i]>='a' && s[i]<='z')
       s[i]=s[i]-32;'
 }
 cout<<"The string in upper case is:"<<s;
}
int main()
{
  string s;
  cout<<"enter a string:";
  cin>>s;
  upper_string(s);
  return 0;
}
