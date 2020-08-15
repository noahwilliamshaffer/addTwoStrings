class Solution {
public:
//pass in two strings as parameters into a function that returns a string
string addStrings(string num1, string num2) {
    /intitilize i to the last index of the first string
    int i = num1.size() - 1;
    //initilize j to the last index of the second string
    int j = num2.size() - 1;
    
    //initilize carry to zero
    int carry = 0;
    
    //initilize the string result to empty 
    string res = "";
    //if i or j still hace numbers left or carry = 1(thats very clever use of a bool) 
    //then we will continue the loop
    while(i>=0 || j>=0 || carry){
        //the current sum
        long sum = 0;
        //
        if(i >= 0){sum += (num1[i] - '0');i--;}
        if(j >= 0){sum += (num2[j] - '0');j--;}
        sum += carry; 
        carry = sum / 10;
        sum = sum % 10;
        res =  res + to_string(sum);
    }
    
    //if we are done with the while then the addition is complete but the number is stored backwards which is common
    //we need to reverse it and then return it
    reverse(res.begin(), res.end());
    return res;
}
};
