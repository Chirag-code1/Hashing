/*     
 * Complete the 'isPangrams' function below.
 * @params
 *  str -> a string that is to be tested for pangram
 *
 * @return
 *  boolean value, based on the fact, whether 
 *  the given string is a pangram or not.
 */
bool isPangram(string str) {
  int count[26] = {0};
  for(int i=0; i< str.length(); i++)
  count[str[i]-'a']++; //filling count array.
  for(int i=0; i< 26;i++){
      if(count[i] == 0)
      return false;
  }
  return true;
}
