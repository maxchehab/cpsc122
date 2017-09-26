/*
-----Problem 1.1-----
	This code works syntactically. But may not acheive what the programmer wants logically.
	This will print out the entire character array including the terminating character '\0'.
	To print out the entire character array one can loop through each entry within greeting.

	char greeting[] = {'H','e','l','l','o'};
	cout << greeting; 

-----Problem 1.2-----
	This was an interesting problem. I wanted to use an empty array like int nums[][] but one
	cannot create a raw array with two dimensions when both dimensions are dynamic. This is
	because raw array indexing works in terms of pointers; for example, in order to access
	the second row a pointer to the first needs to be incremented by the size of the row. This
	task would be imposible without knowing the size of the rows.

	Since I am already passing in the column value I may as well make the row value static.
	This means there is no size parameter because this function will only work on int[4][5].

	I should note that brackets in for loops are completely optional within these cirumstances.

	This is how I would change the function
	
	void showValues(int nums[4][5]){
        	for(int rows = 0; rows < 4; rows++)
                	for(int cols= 0; cols < 5; cols++)
        	                cout << numbs[rows][cols];
	}	

-----Problem 1.3-----
	This problem will return an invalid array assignment when compiled. I am actually not sure
	why this is. From what I know, an array is a pointer and the following will compile successfuly:

	int *a;
	int *b;
	a = b;

	But for whatever reason this is impossible to do with c++. Understandably, because the correct way to
	clone values would require a mapping loop such as:

	for(int i = 0; i < 4; i++){
		array1[i] = array[i];
	}

-----Problem 1.4-----
	int x, *ptr = nullptr;
    	ptr = &x;
    	*ptr = 100; //All this needs is a '*' before ptr.
    	cout << x << endl;
*/

