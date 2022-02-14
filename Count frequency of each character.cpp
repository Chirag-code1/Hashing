void countFrequency(string str){
  int count[26] = {0};
    for(int i=0; i<str.length(); i++)
        count[str[i]-'a']++;
    for(int i=0; i<str.length(); i++)
    {
        if(count[str[i]-'a'] != 0)
        {
            cout << str[i] << count[str[i]-'a'] << " ";
            count[str[i]-'a'] = 0;
        }
    }
} //revised.
