/*
-----Problem 2.1------
	int numbers[10] = {0, 0, 1, 0, 0, 1, 0, 0, 1, 1}; //VALID
  	int matrix[5] = {1, 2, 3, 4, 5, 6, 7}; //INVALID; Too many initilizers
  	double radii[10] = {3.2, 4.7}; //VALID
  	int table[7] = {2,,, 27,, 45, 39}; //INVALID; Need an initilizer per array element
  	char codes[] = {'A', 'X', '1', '2', 's'}; //VALID
  	int blanks[]; //INVLAID; Need at least an initial size or initilized elements.

-----Problem 2.2-----
	int values[] = {2,6,10,14};
  	
	cout << values[2]; //10
	cout << ++values[0]; //3
	cout << values[1]++; //6
	x = 2;
	cout << values[++x]; //Error; becuase x does not have a datatype. If it had a datatype it would print out 14.

-----Problem 2.3-----
	void getNumber(int *n)
	{
    		cout << "Enter a number: ";
    		cin >> *n;
	}
*/
