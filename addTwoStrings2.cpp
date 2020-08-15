string addStrings(string num1, string num2) {

    //initilize sum to 0, i to the last index of the first string, j to the last index of the second string 
    int sum = 0, i = num1.length() - 1, j = num2.length() - 1;
    
    //create a string called str which will hold the summation of the two parameter strings
    string str;
    
    //loop will continue
    while (i >= 0 || j >= 0 || sum > 0) {
    
        //coverts the char in the first string(num1) to an int and adds it to the current sum, which could be 0 or 1 at this point 
        if (i >= 0) 
            sum += (num1[i--] - '0');
         //converts thr char in the second string(num2) to an int and adds it to the current sum, which be over 10 but that is okay because...
        if (j >= 0) 
             sum += (num2[j--] - '0');
             
        //we are moding sum by ten to get a single digit before coverting it into a character and then 
        //using the insert function to put the character into the string we created earlier      
        str.insert(0, 1, (sum % 10) + '0');
        //then we devide sum by ten to get the carry over which will be either 1 or 0
        sum /= 10;
    }
    
    return str;
}
