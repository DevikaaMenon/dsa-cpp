class ExcelSheet(int cn){
    string ans;

    while(cn>0){
        cn--;
        int rem=cn%26;
        char ch='A'+rem;
        ans.push_back(ch);

        cn/=26;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}