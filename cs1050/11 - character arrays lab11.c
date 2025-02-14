char * Filter(char *s) 
{
    static char test[256]; // test array to copy over to
    int c = 0; 

    for (int i = 0; s[i] != '\0'; i++) {
    
        if (s[i] == '\n') // skip over newline and tab
		{
            continue;
        }
        if (s[i] == '\t') 
		{
            test[c] = ' ';
			c++;
            continue;
        }
        if (s[i] >= 'A' && s[i] <= 'Z') //if uppercase add 32 to ASCII
		{
            test[c] = s[i] + 32;
			c++;
        } 
		else if (s[i] >= 'a' && s[i] <= 'z') // if lowercase minus 32 to ASCII
		{
            test[c] = s[i] - 32;
			c++;
        } 
		else if (s[i] >= '0' && s[i] <= '9') // if number then copy over
		{
            test[c] = s[i];
			c++;
        } 
		else if (s[i] == ' ') //copy over
		{
            test[c] = ' ';
			c++;
		}
    }
   		test[c] = '\0';
    return test; // return new arrway that just had new letters, spaces, and numbers
}
