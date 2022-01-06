int firstUniqueChar(string str){
    int count[26] = {0};
    for(int i=0 ; i< str.length(); i++)
    count[str[i]-'a']++;

    for(int i=0;i <str.length(); i++){
        if(count[str[i]-'a'] == 1)
        return i;
    }
    return -1;
}
