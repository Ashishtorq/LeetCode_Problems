class Solution
{
    public:
   
    char getMaxOccuringChar(string str)
    {
        int arr[26]={0};
        for(int i=0; i<str.size(); i++){
          int count = 0;
         
          count = str[i]-'a';
          arr[count]++;
        }
        int max=-1; int ans =0;
       for(int i=0; i<26; i++){
            if(max<arr[i]){
            ans = i;
            max = arr[i];
        }
       }
        return ans+'a';
    }

};