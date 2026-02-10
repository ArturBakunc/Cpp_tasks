// Write single statements that perform the following single-subscripted array operations:

// a) Initialize the 10 elements of integer array counts to zero. 
    int array[10] = {0};

// b) Add 1 to each of the 15 elements of integer array bonus. 
    for (int i = 0; i < 15; i++)
    {
        bonus[i]++;
    }

// c) Read 12 values for double array monthlyTemperatures from the keyboard.
    for (int i = 0; i < 12; i++)
    {
        cin >> monthlyTemperatures[i];
    } 
    
// d) Print the 5 values of integer array bestScores in column format. 
    for (int i = 0; i < 5; i++)
    {
        cout << bestScores[i] << endl;;
    }
